#include "inputstream.h"
#include "QDebug"
#include "globalsettings.h"
#include "QMessageBox"
#include "QErrorMessage"
#include "QDialog"
#include "opencv2/imgproc.hpp"

#define MAXDEPTH 255

InputStream::InputStream(int _width, int _height, int _min_depth, int _max_depth, int _offsetLeft, int _offsetRight, int _offsetTop, int _offsetBottom)
{
    printf("Initialization is");

    rc_depth = openni::OpenNI::initialize();
    openni::Array<openni::DeviceInfo> list;
    openni::OpenNI::enumerateDevices(&list);
    deviceURI = openni::ANY_DEVICE;

    width = _width;
    height = _height;
    history_capacity = 10;
    raw = new uint16_t[width * height];

    history = new uint16_t[width * height * history_capacity];
    filtered_statistic = new uint16_t[width * height];
    average = new uint16_t[width * height];
    history_scan_depth = 7;
    img_depth.create(height, width, CV_8UC1);
    min_depth = _min_depth;
    max_depth = _max_depth;
    current = 0;


    toFlipVertically = GlobalSettings::getInstance()->getFlipVertical();
    toFlipHorisontally = GlobalSettings::getInstance()->getFlipHorisontal();
    offsetLeft = _offsetLeft;
    offsetRight = _offsetRight;
    offsetTop = _offsetTop;
    offsetBottom = _offsetBottom;

   raw_mat = Mat::zeros(height, width, CV_8UC3);

   width_cropped = width - offsetLeft - offsetRight;
   height_cropped = height - offsetTop - offsetBottom;

   filtered_data = new unsigned char[width_cropped * height_cropped];

   for (int i = 0; i < width * height; i++)
   {
        raw[i] = 0;
        filtered_statistic[i] = 0;
        history[i] = 0;
        average[i] = 0;
   }
   qDebug() << "Input stream is created";


   initialize();

   qDebug() << "initialized";
}

void InputStream::setVerticalFlip(bool _toFlipVertically)
{
    toFlipVertically = _toFlipVertically;
}

void InputStream::setHorisontalFlip(bool _toFlipHorisontally)
{
    toFlipHorisontally = _toFlipHorisontally;
}

bool InputStream::isSensorConnected()
{ 
    qDebug() << "Hello world";
    openni::Status status = openni::OpenNI::initialize();
    qDebug() << OpenNI::getExtendedError();

    openni::Array<openni::DeviceInfo> list;
    openni::OpenNI::enumerateDevices(&list);
    int num = list.getSize();
    qDebug() << "Num: " << num;

    if (num == 0)
    {
        qDebug() << "No sensors found";
        openni::OpenNI::shutdown();
        return false;
    }

    else
    {
        qDebug() << "Sensor is found";

        openni::OpenNI::shutdown();
        return true;
    }
}

int InputStream::getConnectedSensorType()
{
    openni::Status status = openni::OpenNI::initialize();
    openni::Array<openni::DeviceInfo> list;
    openni::OpenNI::enumerateDevices(&list);
    openni::Device dev;
    int deviceType = -1;

    if (list.getSize() > 0)
    {

        dev.open(list[0].getUri());
        const openni::SensorInfo* info = dev.getSensorInfo(openni::SENSOR_DEPTH);
        const openni::Array< openni::VideoMode>& modesDepth = info->getSupportedVideoModes();

        if (modesDepth[0].getResolutionX() == 512)
        {
            qDebug() << "You connected Kinect v2";
            deviceType = 1;
        }
        else
        {
            qDebug() << "You connected Kinect v1";
            deviceType = 0;
        }

        dev.close();
        openni::OpenNI::shutdown();

        return deviceType;
    }

    else
    {
        openni::OpenNI::shutdown();
        return deviceType;
    }


}



void InputStream::initialize()
{
    device.open(deviceURI);

    const openni::SensorInfo* info = device.getSensorInfo(openni::SENSOR_DEPTH);
    const openni::Array< openni::VideoMode>& modesDepth = info->getSupportedVideoModes();

    depth.create(device, openni::SENSOR_DEPTH);

    depth.setVideoMode(modesDepth[0]);

    openni::Status status = depth.start();
}

void InputStream::setMaxDepth(int maxDepth)
{
    max_depth = maxDepth;
}

void InputStream::setMinDepth(int minDepth)
{
    min_depth = minDepth;
}

bool InputStream::filterStatistic(int data_delta)
{
    bool isData = GetDepthData(raw, width * height, min_depth, max_depth);

    if (!isData)
       return false;


    for (int i = 0; i < width * height; i++)
    {
        uint16_t b = raw[i];
        uint16_t avg = 0;

        for (int k = 0; k < history_scan_depth; k++)
        {
            avg += history[k * width * height + i];
        }

        average[i] = avg / history_scan_depth;


        if (abs(b - average[i]) < data_delta) {
            filtered_statistic[i] = b;
        }

        history[current * width * height + i] = b;
    }

    current ++;

    if (current == history_scan_depth) {
        current = 0;
     }

    return true;

}

bool InputStream::filterData()
{
    bool isData = filterStatistic(1);

    if (!isData)
        return false;

    for (int y = 0; y < img_depth.rows; y++)
        for (int x = 0; x < img_depth.cols; x++)
    {
        img_depth.at<uchar>(Point(x,y)) = uchar(filtered_statistic[y * img_depth.cols + x]);
    }

    Mat img;
    //medianBlur(img_depth, img, 9);

    img_depth.copyTo(img);

    Mat temp1, temp2;
    Mat depth_small;

    cv::resize(img, depth_small, Size(), 0.2, 0.2);

    const unsigned char noDepth = 0;

    cv::inpaint(depth_small, (depth_small == noDepth), temp1, 0.2, INPAINT_TELEA);

    cv::resize(temp1, temp2, img.size());

    temp2.copyTo(img, (img == noDepth));

    GaussianBlur(img, img, Size(9,9), 10.0);

    cv::Rect roi = cv::Rect(offsetLeft, offsetTop, width_cropped, height_cropped);

    img = img(roi);

    if (toFlipHorisontally)
        flip(img,img, 0);
    if (toFlipVertically)
        flip(img,img, 1);

    for (int y = 0; y < img.rows; y++)
        for (int x = 0; x < img.cols; x++)
    {
        filtered_data[y * img.cols + x] = (unsigned char)img.at<uchar>(Point(x,y));
    }

    return true;

}


unsigned char* InputStream::getData()
{
    bool isData = filterData();
    if (!isData)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","There is an error occured with depth sensor. Please, try to run this program again");
        messageBox.setFixedSize(500,200);
        return NULL;
    }
    else
    {
        return filtered_data;
    }
}


bool InputStream::GetDepthData(uint16_t* dst, int size, int _min_depth, int _max_depth)
{
    int changedStreamDummy;
    VideoStream* pStream = &depth;
    rc_depth = OpenNI::waitForAnyStream(&pStream, 1, &changedStreamDummy, 3000);

    if (rc_depth != STATUS_OK)
    {
        printf("Wait failed! (timeout is %d ms)\n%s\n", 3000, OpenNI::getExtendedError());

        return false;
    }

    unsigned short data = 0;

    frame = new VideoFrameRef;

    rc_depth = depth.readFrame(frame);

    if (rc_depth != STATUS_OK)
    {
        printf("Read failed!\n%s\n", OpenNI::getExtendedError());
        return false;
    }

    int min_depth = _min_depth;
    int max_depth = _max_depth;

    openni::DepthPixel* pDepth = (openni::DepthPixel*)frame->getData();

    delete frame;

    for (int i = 0; i < size; i++)
    {
        data = pDepth[i];

        if (data > max_depth) data = max_depth;
        if (data < min_depth) data = min_depth;
        dst[i] = (unsigned char)((float)(data - min_depth) / (max_depth - min_depth) * MAXDEPTH);
    }


    return true;
}


Mat InputStream::getRawMat()
{

    int changedStreamDummy;
    VideoStream* pStream = &depth;
    rc_depth = OpenNI::waitForAnyStream(&pStream, 1, &changedStreamDummy, 3000);

    if (rc_depth != STATUS_OK)
    {
        printf("Wait failed! (timeout is %d ms)\n%s\n", 3000, OpenNI::getExtendedError());

        exit(0);
    }

    unsigned short data = 0;

    frame = new VideoFrameRef;
    rc_depth = depth.readFrame(frame);

    int j = 0;

    openni::DepthPixel* pDepth = (openni::DepthPixel*)frame->getData();
    delete frame;

    for (int i = 0; i < width * height; i++)
        raw[i] = pDepth[i];

    uint16_t max = 0;

    for (int i = 0; i < width * height; i++)
        if (raw[i] > max)
            max = raw[i];

    uint16_t min = 200000;

    for (int i = 0; i < width * height; i++)
        if (raw[i] < min)
            min = raw[i];


    qDebug() << "MAX VALUE : " << max;
    qDebug() << "MIN VALUE : " << min;

    for (int y = 0; y < raw_mat.rows; y++)
        for (int x = 0; x < raw_mat.cols; x++)
        {
                raw_mat.at<Vec3b>(Point(x,y)) = Vec3b(0, 0, uchar( ((float)raw[y * raw_mat.cols + x] - min) * (255.0) / (max - min) ));
        }

    cv::Mat raw_mat_gray;
    raw_mat_gray.create(raw_mat.rows, raw_mat.cols, CV_8UC1);
    cvtColor(raw_mat, raw_mat_gray, CV_BGR2GRAY);

    equalizeHist(raw_mat_gray,raw_mat_gray);

    for (int y = 0; y < raw_mat.rows; y++)
        for (int x = 0; x < raw_mat.cols; x++)
        {
                raw_mat.at<Vec3b>(Point(x,y)) = Vec3b(0, 0, raw_mat_gray.at<uchar>(Point(x,y)));
        }

    return raw_mat;
}


void InputStream::Terminate()
{
    depth.stop();
    depth.destroy();
    device.close();
    openni::OpenNI::shutdown();
}

InputStream::~InputStream()
{
    Terminate();
}
