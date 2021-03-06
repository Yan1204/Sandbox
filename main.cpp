#include "sandbox.h"
#include "QApplication"
#include "QFile"
#include "sensorcalibration.h"
#include "crop.h"
#include "globalsettings.h"
#include "QDesktopWidget"
#include "QMessageBox"
#include "waitforsensor.h"

int main(int argc, char *argv[])
{
    printf("Инициализация \n");

    QApplication a(argc, argv);

    printf("Классы \n");

    SensorCalibration* s;
    Sandbox* w;
    WaitForSensor* wait;

    printf("Считывание файла \n");

    QString full_path = QApplication::applicationDirPath();

    GlobalSettings::getInstance()->setConfigFile(full_path + "/config.txt");

    printf("Файл считан \n");

    int screenWidth = a.desktop()->screenGeometry().width();
    int screenHeight = a.desktop()->screenGeometry().height();
    GlobalSettings::getInstance()->setScreenWidth(screenWidth);
    GlobalSettings::getInstance()->setScreenHeight(screenHeight);

    bool firstTime = GlobalSettings::getInstance()->getFirstTime();
    bool isSensorConnected = InputStream::isSensorConnected();

    if (firstTime && isSensorConnected)
    {
        int sensorType = InputStream::getConnectedSensorType();
        GlobalSettings::getInstance()->setSensorType(sensorType);


        GlobalSettings::getInstance()->setSensorMode(true);
        s = new SensorCalibration;
        GlobalSettings::getInstance()->setFirstTime(false);

        s->show();
    }

    else if (isSensorConnected && !firstTime)
    {
        printf("Ситуация 1\n");

        GlobalSettings::getInstance()->setSensorMode(true);
        int sensorType = InputStream::getConnectedSensorType();

        if (sensorType == 0)
        {
            GlobalSettings::getInstance()->setWidth(640);
            GlobalSettings::getInstance()->setHeight(480);
        }

        else if (sensorType == 1)
        {
            GlobalSettings::getInstance()->setWidth(512);
            GlobalSettings::getInstance()->setHeight(424);
        }
        GlobalSettings::getInstance()->setSensorType(sensorType);
        w = new Sandbox;
        w -> show();
    }

    else if (!isSensorConnected && !firstTime)
    {
        printf("Ситуация 2 \n");

        wait = new WaitForSensor;
        wait -> show();
    }

    else if (!isSensorConnected && firstTime)
    {
        printf("Ситуация 3 \n");

        s = new SensorCalibration;
        s->show();
    }

    return a.exec();
}
