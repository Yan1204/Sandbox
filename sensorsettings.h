#ifndef SENSORSETTINGS_H
#define SENSORSETTINGS_H

#include "QDialog"
#include "QRubberBand"

#include "QMouseEvent"
#include "QPainter"
#include "crop.h"
#include "QTimer"

#include "inputstream.h"
#include "globalsettings.h"

namespace Ui {
class SensorSettings;
}

class SensorSettings : public QDialog
{
    Q_OBJECT

public:
    explicit SensorSettings(QWidget *parent = 0);
    ~SensorSettings();

private:
    Ui::SensorSettings *ui;
    bool isResolutionSetUp;
    bool isCroppingSetUp;
    int width;
    int height;

    int x;
    int y;


    Crop* crop;

    int offsetLeft;
    int offsetRight;
    int offsetTop;
    int offsetBottom;

    QTimer* timer;



    InputStream* sensorStream;


public slots:
    void next();
    void setResolution(int);
    void setCropping();
    void quit();
    void setHeightmap();
};

#endif // SENSORSETTINGS_H
