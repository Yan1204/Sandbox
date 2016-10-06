/********************************************************************************
** Form generated from reading UI file 'sensorcalibration.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSORCALIBRATION_H
#define UI_SENSORCALIBRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SensorCalibration
{
public:
    QLabel *welcome;
    QLabel *welcome2;
    QPushButton *next;
    QPushButton *exit;
    QLabel *isFound;
    QPushButton *refresh;
    QLabel *option;
    QPushButton *setup;
    QLabel *sensorType;

    void setupUi(QDialog *SensorCalibration)
    {
        if (SensorCalibration->objectName().isEmpty())
            SensorCalibration->setObjectName(QStringLiteral("SensorCalibration"));
        SensorCalibration->resize(1280, 720);
        welcome = new QLabel(SensorCalibration);
        welcome->setObjectName(QStringLiteral("welcome"));
        welcome->setGeometry(QRect(320, 110, 561, 51));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(welcome->sizePolicy().hasHeightForWidth());
        welcome->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        welcome->setFont(font);
        welcome->setAlignment(Qt::AlignCenter);
        welcome2 = new QLabel(SensorCalibration);
        welcome2->setObjectName(QStringLiteral("welcome2"));
        welcome2->setGeometry(QRect(410, 200, 391, 17));
        welcome2->setAlignment(Qt::AlignCenter);
        next = new QPushButton(SensorCalibration);
        next->setObjectName(QStringLiteral("next"));
        next->setGeometry(QRect(1090, 630, 161, 61));
        exit = new QPushButton(SensorCalibration);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(20, 650, 151, 51));
        isFound = new QLabel(SensorCalibration);
        isFound->setObjectName(QStringLiteral("isFound"));
        isFound->setGeometry(QRect(320, 280, 561, 71));
        isFound->setAlignment(Qt::AlignCenter);
        refresh = new QPushButton(SensorCalibration);
        refresh->setObjectName(QStringLiteral("refresh"));
        refresh->setGeometry(QRect(800, 630, 161, 61));
        option = new QLabel(SensorCalibration);
        option->setObjectName(QStringLiteral("option"));
        option->setGeometry(QRect(290, 450, 601, 61));
        option->setAlignment(Qt::AlignCenter);
        setup = new QPushButton(SensorCalibration);
        setup->setObjectName(QStringLiteral("setup"));
        setup->setGeometry(QRect(510, 530, 161, 61));
        sensorType = new QLabel(SensorCalibration);
        sensorType->setObjectName(QStringLiteral("sensorType"));
        sensorType->setGeometry(QRect(320, 370, 561, 21));
        sensorType->setAlignment(Qt::AlignCenter);

        retranslateUi(SensorCalibration);

        QMetaObject::connectSlotsByName(SensorCalibration);
    } // setupUi

    void retranslateUi(QDialog *SensorCalibration)
    {
        SensorCalibration->setWindowTitle(QApplication::translate("SensorCalibration", "Dialog", 0));
        welcome->setText(QApplication::translate("SensorCalibration", "Welcome to Interactive Sandbox !", 0));
        welcome2->setText(QApplication::translate("SensorCalibration", "Now you need to configure your sensor", 0));
        next->setText(QApplication::translate("SensorCalibration", "Next", 0));
        exit->setText(QApplication::translate("SensorCalibration", "Exit", 0));
        isFound->setText(QApplication::translate("SensorCalibration", "isConnected", 0));
        refresh->setText(QApplication::translate("SensorCalibration", "Refresh", 0));
        option->setText(QApplication::translate("SensorCalibration", "option", 0));
        setup->setText(QApplication::translate("SensorCalibration", "Set up", 0));
        sensorType->setText(QApplication::translate("SensorCalibration", "Sensor type", 0));
    } // retranslateUi

};

namespace Ui {
    class SensorCalibration: public Ui_SensorCalibration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSORCALIBRATION_H
