/********************************************************************************
** Form generated from reading UI file 'lightdirection.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIGHTDIRECTION_H
#define UI_LIGHTDIRECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_LightDirection
{
public:

    void setupUi(QDialog *LightDirection)
    {
        if (LightDirection->objectName().isEmpty())
            LightDirection->setObjectName(QStringLiteral("LightDirection"));
        LightDirection->resize(400, 300);

        retranslateUi(LightDirection);

        QMetaObject::connectSlotsByName(LightDirection);
    } // setupUi

    void retranslateUi(QDialog *LightDirection)
    {
        LightDirection->setWindowTitle(QApplication::translate("LightDirection", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class LightDirection: public Ui_LightDirection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHTDIRECTION_H
