/********************************************************************************
** Form generated from reading UI file 'sensorsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSORSETTINGS_H
#define UI_SENSORSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SensorSettings
{
public:
    QLabel *label;
    QPushButton *next;
    QPushButton *cancel;
    QComboBox *resolution;
    QPushButton *finish;

    void setupUi(QDialog *SensorSettings)
    {
        if (SensorSettings->objectName().isEmpty())
            SensorSettings->setObjectName(QStringLiteral("SensorSettings"));
        SensorSettings->resize(869, 718);
        label = new QLabel(SensorSettings);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 30, 441, 71));
        label->setAlignment(Qt::AlignCenter);
        next = new QPushButton(SensorSettings);
        next->setObjectName(QStringLiteral("next"));
        next->setGeometry(QRect(730, 670, 89, 25));
        cancel = new QPushButton(SensorSettings);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(20, 670, 89, 25));
        resolution = new QComboBox(SensorSettings);
        resolution->setObjectName(QStringLiteral("resolution"));
        resolution->setGeometry(QRect(330, 230, 201, 31));
        finish = new QPushButton(SensorSettings);
        finish->setObjectName(QStringLiteral("finish"));
        finish->setGeometry(QRect(260, 340, 331, 131));

        retranslateUi(SensorSettings);

        QMetaObject::connectSlotsByName(SensorSettings);
    } // setupUi

    void retranslateUi(QDialog *SensorSettings)
    {
        SensorSettings->setWindowTitle(QApplication::translate("SensorSettings", "Dialog", 0));
        label->setText(QApplication::translate("SensorSettings", "<html><head/><body><p>Please, choose sensor resolution </p><p>The more resolution, the more detailed scene you will have</p></body></html>", 0));
        next->setText(QApplication::translate("SensorSettings", "Next", 0));
        cancel->setText(QApplication::translate("SensorSettings", "Cancel", 0));
        resolution->clear();
        resolution->insertItems(0, QStringList()
         << QString()
        );
        finish->setText(QApplication::translate("SensorSettings", "Finish", 0));
    } // retranslateUi

};

namespace Ui {
    class SensorSettings: public Ui_SensorSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSORSETTINGS_H
