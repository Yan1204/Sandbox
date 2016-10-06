/********************************************************************************
** Form generated from reading UI file 'waitforsensor.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAITFORSENSOR_H
#define UI_WAITFORSENSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WaitForSensor
{
public:
    QLabel *label;
    QPushButton *next;
    QPushButton *exit;
    QLabel *sensorType;

    void setupUi(QDialog *WaitForSensor)
    {
        if (WaitForSensor->objectName().isEmpty())
            WaitForSensor->setObjectName(QStringLiteral("WaitForSensor"));
        WaitForSensor->resize(760, 423);
        label = new QLabel(WaitForSensor);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 100, 761, 81));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        next = new QPushButton(WaitForSensor);
        next->setObjectName(QStringLiteral("next"));
        next->setGeometry(QRect(580, 360, 89, 25));
        exit = new QPushButton(WaitForSensor);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(50, 360, 89, 25));
        sensorType = new QLabel(WaitForSensor);
        sensorType->setObjectName(QStringLiteral("sensorType"));
        sensorType->setGeometry(QRect(250, 230, 261, 20));
        sensorType->setAlignment(Qt::AlignCenter);

        retranslateUi(WaitForSensor);

        QMetaObject::connectSlotsByName(WaitForSensor);
    } // setupUi

    void retranslateUi(QDialog *WaitForSensor)
    {
        WaitForSensor->setWindowTitle(QApplication::translate("WaitForSensor", "Dialog", 0));
        label->setText(QApplication::translate("WaitForSensor", "<html><head/><body><p><span style=\" color:#ff0000;\">There is no depth sensor connected</span></p><p><span style=\" color:#ff0000;\">Please, connect depth sensor and wait about 10 seconds until it will be initialized.</span></p><p><span style=\" color:#ff0000;\">Or click &quot;Next&quot; to continue with default terrain height map</span></p></body></html>", 0));
        next->setText(QApplication::translate("WaitForSensor", "Next", 0));
        exit->setText(QApplication::translate("WaitForSensor", "Exit", 0));
        sensorType->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WaitForSensor: public Ui_WaitForSensor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAITFORSENSOR_H
