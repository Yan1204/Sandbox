/********************************************************************************
** Form generated from reading UI file 'sandbox.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SANDBOX_H
#define UI_SANDBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "sandboxwidget.h"

QT_BEGIN_NAMESPACE

class Ui_Sandbox
{
public:
    QWidget *centralWidget;
    SandboxWidget *widget;
    QPushButton *settings;
    QPushButton *start;
    QPushButton *mode;
    QPushButton *exit;

    void setupUi(QMainWindow *Sandbox)
    {
        if (Sandbox->objectName().isEmpty())
            Sandbox->setObjectName(QStringLiteral("Sandbox"));
        Sandbox->resize(1280, 720);
        centralWidget = new QWidget(Sandbox);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new SandboxWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 1280, 720));
        settings = new QPushButton(widget);
        settings->setObjectName(QStringLiteral("settings"));
        settings->setGeometry(QRect(370, 580, 141, 51));
        start = new QPushButton(widget);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(690, 580, 141, 51));
        mode = new QPushButton(widget);
        mode->setObjectName(QStringLiteral("mode"));
        mode->setGeometry(QRect(580, 580, 41, 51));
        exit = new QPushButton(widget);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(10, 660, 141, 51));
        settings->raise();
        mode->raise();
        start->raise();
        exit->raise();
        Sandbox->setCentralWidget(centralWidget);

        retranslateUi(Sandbox);

        QMetaObject::connectSlotsByName(Sandbox);
    } // setupUi

    void retranslateUi(QMainWindow *Sandbox)
    {
        Sandbox->setWindowTitle(QApplication::translate("Sandbox", "Sandbox", 0));
        settings->setText(QApplication::translate("Sandbox", "Settings", 0));
        start->setText(QApplication::translate("Sandbox", "START", 0));
        mode->setText(QApplication::translate("Sandbox", "3D", 0));
        exit->setText(QApplication::translate("Sandbox", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class Sandbox: public Ui_Sandbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SANDBOX_H
