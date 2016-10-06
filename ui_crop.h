/********************************************************************************
** Form generated from reading UI file 'crop.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CROP_H
#define UI_CROP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Crop
{
public:
    QPushButton *finish;
    QLabel *label;
    QPushButton *setDefault;
    QLabel *left;
    QLabel *right;
    QLabel *top;
    QLabel *bottom;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;

    void setupUi(QDialog *Crop)
    {
        if (Crop->objectName().isEmpty())
            Crop->setObjectName(QStringLiteral("Crop"));
        Crop->resize(1005, 811);
        finish = new QPushButton(Crop);
        finish->setObjectName(QStringLiteral("finish"));
        finish->setGeometry(QRect(850, 740, 131, 51));
        label = new QLabel(Crop);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 30, 221, 17));
        label->setAlignment(Qt::AlignCenter);
        setDefault = new QPushButton(Crop);
        setDefault->setObjectName(QStringLiteral("setDefault"));
        setDefault->setGeometry(QRect(420, 680, 151, 31));
        left = new QLabel(Crop);
        left->setObjectName(QStringLiteral("left"));
        left->setGeometry(QRect(150, 660, 67, 17));
        right = new QLabel(Crop);
        right->setObjectName(QStringLiteral("right"));
        right->setGeometry(QRect(150, 690, 67, 17));
        top = new QLabel(Crop);
        top->setObjectName(QStringLiteral("top"));
        top->setGeometry(QRect(150, 720, 67, 17));
        bottom = new QLabel(Crop);
        bottom->setObjectName(QStringLiteral("bottom"));
        bottom->setGeometry(QRect(150, 750, 67, 17));
        label_6 = new QLabel(Crop);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 660, 67, 17));
        label_7 = new QLabel(Crop);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 690, 67, 17));
        label_8 = new QLabel(Crop);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 720, 67, 17));
        label_9 = new QLabel(Crop);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 750, 67, 17));

        retranslateUi(Crop);

        QMetaObject::connectSlotsByName(Crop);
    } // setupUi

    void retranslateUi(QDialog *Crop)
    {
        Crop->setWindowTitle(QApplication::translate("Crop", "Dialog", 0));
        finish->setText(QApplication::translate("Crop", "Finish", 0));
        label->setText(QApplication::translate("Crop", "Please, set sensor cropping", 0));
        setDefault->setText(QApplication::translate("Crop", "Set default cropping", 0));
        left->setText(QApplication::translate("Crop", "left", 0));
        right->setText(QApplication::translate("Crop", "right", 0));
        top->setText(QApplication::translate("Crop", "top", 0));
        bottom->setText(QApplication::translate("Crop", "bottom", 0));
        label_6->setText(QApplication::translate("Crop", "left", 0));
        label_7->setText(QApplication::translate("Crop", "right", 0));
        label_8->setText(QApplication::translate("Crop", "top", 0));
        label_9->setText(QApplication::translate("Crop", "bottom", 0));
    } // retranslateUi

};

namespace Ui {
    class Crop: public Ui_Crop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CROP_H
