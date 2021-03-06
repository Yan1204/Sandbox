#ifndef SENSORCALIBRATION_H
#define SENSORCALIBRATION_H

#include "QDialog"
#include "sandbox.h"
#include "filestream.h"
#include "sensorsettings.h"
#include "crop.h"
#include "inputstream.h"
#include "QTimer"

namespace Ui {
class SensorCalibration;
}

class SensorCalibration : public QDialog
{
    Q_OBJECT

public:
    explicit SensorCalibration(QWidget *parent = 0);
    ~SensorCalibration();

private:
    Ui::SensorCalibration *ui;

    Sandbox* sandbox;
    bool isConnected;
    SensorSettings* settings;

        QTimer* timer;

    bool isSandboxCreated;
    int sensorType;
    Crop* crop;
    InputStream* sensorStream;

    bool isCroppingSetUp;

    int offsetLeft;
    int offsetRight;
    int offsetTop;
    int offsetBottom;


public slots:
    void createSandbox();
    void refresh();
    void setup();
    void quit();
    void setCropping();
    void setHeightmap();

};

#endif // SENSORCALIBRATION_H
