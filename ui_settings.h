/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QTabWidget *tabWidget;
    QWidget *Display;
    QCheckBox *flip_hor;
    QSlider *contrast;
    QLabel *contrast_label;
    QLabel *contrastValue;
    QCheckBox *flip_vert;
    QWidget *Lighting;
    QPushButton *setDirection;
    QPushButton *chooseColor;
    QSlider *diffuse;
    QLabel *diffuse_label;
    QWidget *Kinect;
    QLabel *minHeight_label;
    QLabel *maxHeight_label;
    QLabel *minHeightValue;
    QLabel *maxHeightValue;
    QSlider *minHeight;
    QSlider *maxHeight;
    QLabel *pleaseConnect;
    QPushButton *reconfigure;
    QWidget *Skybox;
    QPushButton *loadSkyboxLeft;
    QLabel *imgSkyboxRight;
    QPushButton *loadSkyboxBack;
    QLabel *imgSkyboxTop;
    QPushButton *loadSkyboxTop;
    QPushButton *loadSkyboxFront;
    QLabel *imgSkyboxLeft;
    QLabel *imgSkyboxBack;
    QPushButton *loadSkyboxRight;
    QComboBox *changeSkybox;
    QLabel *imgSkyboxFront;
    QLabel *imgSkyboxBottom;
    QPushButton *loadSkyboxBottom;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *Textures;
    QComboBox *terrainTextures;
    QLabel *waterImg;
    QLabel *sandImg;
    QLabel *grassImg;
    QLabel *stoneImg;
    QLabel *snowImg;
    QPushButton *loadWater;
    QPushButton *loadSand;
    QPushButton *loadGrass;
    QPushButton *loadStone;
    QPushButton *loadSnow;
    QWidget *Terrain;
    QSlider *waterMax;
    QSlider *sandMax;
    QSlider *grassMax;
    QSlider *stoneMax;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *waterMaxLabel;
    QLabel *sandMaxLabel;
    QLabel *grassMaxLabel;
    QLabel *stoneMaxLabel;
    QWidget *General;
    QPushButton *reset;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(941, 367);
        tabWidget = new QTabWidget(Settings);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 941, 451));
        Display = new QWidget();
        Display->setObjectName(QStringLiteral("Display"));
        flip_hor = new QCheckBox(Display);
        flip_hor->setObjectName(QStringLiteral("flip_hor"));
        flip_hor->setGeometry(QRect(20, 20, 181, 23));
        contrast = new QSlider(Display);
        contrast->setObjectName(QStringLiteral("contrast"));
        contrast->setGeometry(QRect(20, 120, 160, 16));
        contrast->setOrientation(Qt::Horizontal);
        contrast_label = new QLabel(Display);
        contrast_label->setObjectName(QStringLiteral("contrast_label"));
        contrast_label->setGeometry(QRect(20, 90, 67, 17));
        contrastValue = new QLabel(Display);
        contrastValue->setObjectName(QStringLiteral("contrastValue"));
        contrastValue->setGeometry(QRect(200, 120, 67, 17));
        flip_vert = new QCheckBox(Display);
        flip_vert->setObjectName(QStringLiteral("flip_vert"));
        flip_vert->setGeometry(QRect(250, 20, 181, 23));
        tabWidget->addTab(Display, QString());
        Lighting = new QWidget();
        Lighting->setObjectName(QStringLiteral("Lighting"));
        setDirection = new QPushButton(Lighting);
        setDirection->setObjectName(QStringLiteral("setDirection"));
        setDirection->setGeometry(QRect(240, 50, 141, 31));
        chooseColor = new QPushButton(Lighting);
        chooseColor->setObjectName(QStringLiteral("chooseColor"));
        chooseColor->setGeometry(QRect(240, 110, 141, 31));
        diffuse = new QSlider(Lighting);
        diffuse->setObjectName(QStringLiteral("diffuse"));
        diffuse->setGeometry(QRect(70, 90, 16, 160));
        diffuse->setOrientation(Qt::Vertical);
        diffuse_label = new QLabel(Lighting);
        diffuse_label->setObjectName(QStringLiteral("diffuse_label"));
        diffuse_label->setGeometry(QRect(50, 60, 67, 17));
        tabWidget->addTab(Lighting, QString());
        Kinect = new QWidget();
        Kinect->setObjectName(QStringLiteral("Kinect"));
        minHeight_label = new QLabel(Kinect);
        minHeight_label->setObjectName(QStringLiteral("minHeight_label"));
        minHeight_label->setGeometry(QRect(10, 20, 121, 17));
        maxHeight_label = new QLabel(Kinect);
        maxHeight_label->setObjectName(QStringLiteral("maxHeight_label"));
        maxHeight_label->setGeometry(QRect(10, 160, 121, 17));
        minHeightValue = new QLabel(Kinect);
        minHeightValue->setObjectName(QStringLiteral("minHeightValue"));
        minHeightValue->setGeometry(QRect(710, 60, 67, 17));
        maxHeightValue = new QLabel(Kinect);
        maxHeightValue->setObjectName(QStringLiteral("maxHeightValue"));
        maxHeightValue->setGeometry(QRect(720, 200, 67, 17));
        minHeight = new QSlider(Kinect);
        minHeight->setObjectName(QStringLiteral("minHeight"));
        minHeight->setGeometry(QRect(10, 60, 671, 16));
        minHeight->setOrientation(Qt::Horizontal);
        maxHeight = new QSlider(Kinect);
        maxHeight->setObjectName(QStringLiteral("maxHeight"));
        maxHeight->setGeometry(QRect(10, 200, 671, 16));
        maxHeight->setOrientation(Qt::Horizontal);
        pleaseConnect = new QLabel(Kinect);
        pleaseConnect->setObjectName(QStringLiteral("pleaseConnect"));
        pleaseConnect->setGeometry(QRect(210, 270, 421, 17));
        reconfigure = new QPushButton(Kinect);
        reconfigure->setObjectName(QStringLiteral("reconfigure"));
        reconfigure->setGeometry(QRect(770, 260, 141, 51));
        tabWidget->addTab(Kinect, QString());
        Skybox = new QWidget();
        Skybox->setObjectName(QStringLiteral("Skybox"));
        loadSkyboxLeft = new QPushButton(Skybox);
        loadSkyboxLeft->setObjectName(QStringLiteral("loadSkyboxLeft"));
        loadSkyboxLeft->setGeometry(QRect(60, 280, 61, 25));
        imgSkyboxRight = new QLabel(Skybox);
        imgSkyboxRight->setObjectName(QStringLiteral("imgSkyboxRight"));
        imgSkyboxRight->setGeometry(QRect(180, 160, 111, 101));
        imgSkyboxRight->setAutoFillBackground(true);
        loadSkyboxBack = new QPushButton(Skybox);
        loadSkyboxBack->setObjectName(QStringLiteral("loadSkyboxBack"));
        loadSkyboxBack->setGeometry(QRect(480, 280, 61, 25));
        imgSkyboxTop = new QLabel(Skybox);
        imgSkyboxTop->setObjectName(QStringLiteral("imgSkyboxTop"));
        imgSkyboxTop->setGeometry(QRect(600, 160, 111, 101));
        imgSkyboxTop->setAutoFillBackground(true);
        loadSkyboxTop = new QPushButton(Skybox);
        loadSkyboxTop->setObjectName(QStringLiteral("loadSkyboxTop"));
        loadSkyboxTop->setGeometry(QRect(630, 280, 61, 25));
        loadSkyboxFront = new QPushButton(Skybox);
        loadSkyboxFront->setObjectName(QStringLiteral("loadSkyboxFront"));
        loadSkyboxFront->setGeometry(QRect(350, 280, 61, 25));
        imgSkyboxLeft = new QLabel(Skybox);
        imgSkyboxLeft->setObjectName(QStringLiteral("imgSkyboxLeft"));
        imgSkyboxLeft->setGeometry(QRect(40, 160, 111, 101));
        imgSkyboxLeft->setAutoFillBackground(true);
        imgSkyboxBack = new QLabel(Skybox);
        imgSkyboxBack->setObjectName(QStringLiteral("imgSkyboxBack"));
        imgSkyboxBack->setGeometry(QRect(460, 160, 111, 101));
        imgSkyboxBack->setAutoFillBackground(true);
        loadSkyboxRight = new QPushButton(Skybox);
        loadSkyboxRight->setObjectName(QStringLiteral("loadSkyboxRight"));
        loadSkyboxRight->setGeometry(QRect(210, 280, 61, 25));
        changeSkybox = new QComboBox(Skybox);
        changeSkybox->setObjectName(QStringLiteral("changeSkybox"));
        changeSkybox->setGeometry(QRect(30, 30, 151, 41));
        imgSkyboxFront = new QLabel(Skybox);
        imgSkyboxFront->setObjectName(QStringLiteral("imgSkyboxFront"));
        imgSkyboxFront->setGeometry(QRect(320, 160, 111, 101));
        imgSkyboxFront->setAutoFillBackground(true);
        imgSkyboxBottom = new QLabel(Skybox);
        imgSkyboxBottom->setObjectName(QStringLiteral("imgSkyboxBottom"));
        imgSkyboxBottom->setGeometry(QRect(760, 160, 111, 101));
        imgSkyboxBottom->setAutoFillBackground(true);
        loadSkyboxBottom = new QPushButton(Skybox);
        loadSkyboxBottom->setObjectName(QStringLiteral("loadSkyboxBottom"));
        loadSkyboxBottom->setGeometry(QRect(790, 280, 61, 25));
        label_5 = new QLabel(Skybox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 110, 67, 17));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(Skybox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(210, 110, 67, 17));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(Skybox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(490, 110, 67, 17));
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(Skybox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(340, 110, 67, 17));
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(Skybox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(770, 110, 67, 17));
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(Skybox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(620, 110, 67, 16));
        label_10->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(Skybox, QString());
        Textures = new QWidget();
        Textures->setObjectName(QStringLiteral("Textures"));
        terrainTextures = new QComboBox(Textures);
        terrainTextures->setObjectName(QStringLiteral("terrainTextures"));
        terrainTextures->setGeometry(QRect(20, 30, 151, 41));
        waterImg = new QLabel(Textures);
        waterImg->setObjectName(QStringLiteral("waterImg"));
        waterImg->setGeometry(QRect(30, 140, 111, 101));
        waterImg->setAutoFillBackground(true);
        sandImg = new QLabel(Textures);
        sandImg->setObjectName(QStringLiteral("sandImg"));
        sandImg->setGeometry(QRect(170, 140, 111, 101));
        sandImg->setAutoFillBackground(true);
        grassImg = new QLabel(Textures);
        grassImg->setObjectName(QStringLiteral("grassImg"));
        grassImg->setGeometry(QRect(310, 140, 111, 101));
        grassImg->setAutoFillBackground(true);
        stoneImg = new QLabel(Textures);
        stoneImg->setObjectName(QStringLiteral("stoneImg"));
        stoneImg->setGeometry(QRect(450, 140, 111, 101));
        stoneImg->setAutoFillBackground(true);
        snowImg = new QLabel(Textures);
        snowImg->setObjectName(QStringLiteral("snowImg"));
        snowImg->setGeometry(QRect(590, 140, 111, 101));
        snowImg->setAutoFillBackground(true);
        loadWater = new QPushButton(Textures);
        loadWater->setObjectName(QStringLiteral("loadWater"));
        loadWater->setGeometry(QRect(50, 260, 61, 25));
        loadSand = new QPushButton(Textures);
        loadSand->setObjectName(QStringLiteral("loadSand"));
        loadSand->setGeometry(QRect(200, 260, 61, 25));
        loadGrass = new QPushButton(Textures);
        loadGrass->setObjectName(QStringLiteral("loadGrass"));
        loadGrass->setGeometry(QRect(340, 260, 61, 25));
        loadStone = new QPushButton(Textures);
        loadStone->setObjectName(QStringLiteral("loadStone"));
        loadStone->setGeometry(QRect(470, 260, 61, 25));
        loadSnow = new QPushButton(Textures);
        loadSnow->setObjectName(QStringLiteral("loadSnow"));
        loadSnow->setGeometry(QRect(620, 260, 61, 25));
        tabWidget->addTab(Textures, QString());
        Terrain = new QWidget();
        Terrain->setObjectName(QStringLiteral("Terrain"));
        waterMax = new QSlider(Terrain);
        waterMax->setObjectName(QStringLiteral("waterMax"));
        waterMax->setGeometry(QRect(60, 60, 16, 160));
        waterMax->setOrientation(Qt::Vertical);
        sandMax = new QSlider(Terrain);
        sandMax->setObjectName(QStringLiteral("sandMax"));
        sandMax->setGeometry(QRect(190, 60, 16, 160));
        sandMax->setOrientation(Qt::Vertical);
        grassMax = new QSlider(Terrain);
        grassMax->setObjectName(QStringLiteral("grassMax"));
        grassMax->setGeometry(QRect(320, 60, 16, 160));
        grassMax->setOrientation(Qt::Vertical);
        stoneMax = new QSlider(Terrain);
        stoneMax->setObjectName(QStringLiteral("stoneMax"));
        stoneMax->setGeometry(QRect(460, 60, 16, 160));
        stoneMax->setOrientation(Qt::Vertical);
        label = new QLabel(Terrain);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 71, 17));
        label_2 = new QLabel(Terrain);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 30, 71, 17));
        label_3 = new QLabel(Terrain);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(300, 30, 71, 21));
        label_4 = new QLabel(Terrain);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(440, 30, 71, 17));
        waterMaxLabel = new QLabel(Terrain);
        waterMaxLabel->setObjectName(QStringLiteral("waterMaxLabel"));
        waterMaxLabel->setGeometry(QRect(40, 250, 67, 17));
        sandMaxLabel = new QLabel(Terrain);
        sandMaxLabel->setObjectName(QStringLiteral("sandMaxLabel"));
        sandMaxLabel->setGeometry(QRect(160, 250, 67, 17));
        grassMaxLabel = new QLabel(Terrain);
        grassMaxLabel->setObjectName(QStringLiteral("grassMaxLabel"));
        grassMaxLabel->setGeometry(QRect(290, 250, 67, 17));
        stoneMaxLabel = new QLabel(Terrain);
        stoneMaxLabel->setObjectName(QStringLiteral("stoneMaxLabel"));
        stoneMaxLabel->setGeometry(QRect(440, 250, 67, 17));
        tabWidget->addTab(Terrain, QString());
        General = new QWidget();
        General->setObjectName(QStringLiteral("General"));
        reset = new QPushButton(General);
        reset->setObjectName(QStringLiteral("reset"));
        reset->setGeometry(QRect(50, 60, 141, 51));
        tabWidget->addTab(General, QString());

        retranslateUi(Settings);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Dialog", 0));
        flip_hor->setText(QApplication::translate("Settings", "Flip image horisontally", 0));
        contrast_label->setText(QApplication::translate("Settings", "Contrast", 0));
        contrastValue->setText(QString());
        flip_vert->setText(QApplication::translate("Settings", "Flip image vertically", 0));
        tabWidget->setTabText(tabWidget->indexOf(Display), QApplication::translate("Settings", "Display", 0));
        setDirection->setText(QApplication::translate("Settings", "Choose direction", 0));
        chooseColor->setText(QApplication::translate("Settings", "Choose color", 0));
        diffuse_label->setText(QApplication::translate("Settings", "Intensity", 0));
        tabWidget->setTabText(tabWidget->indexOf(Lighting), QApplication::translate("Settings", "Lighting", 0));
        minHeight_label->setText(QApplication::translate("Settings", "Minimum height", 0));
        maxHeight_label->setText(QApplication::translate("Settings", "Maximum height", 0));
        minHeightValue->setText(QApplication::translate("Settings", "minHeight", 0));
        maxHeightValue->setText(QApplication::translate("Settings", "maxHei", 0));
        pleaseConnect->setText(QApplication::translate("Settings", "Please, connect depth sensor to get access to these settings", 0));
        reconfigure->setText(QApplication::translate("Settings", "Reconfigure sensor", 0));
        tabWidget->setTabText(tabWidget->indexOf(Kinect), QApplication::translate("Settings", "Kinect", 0));
        loadSkyboxLeft->setText(QApplication::translate("Settings", "Load", 0));
        imgSkyboxRight->setText(QString());
        loadSkyboxBack->setText(QApplication::translate("Settings", "Load", 0));
        imgSkyboxTop->setText(QString());
        loadSkyboxTop->setText(QApplication::translate("Settings", "Load", 0));
        loadSkyboxFront->setText(QApplication::translate("Settings", "Load", 0));
        imgSkyboxLeft->setText(QString());
        imgSkyboxBack->setText(QString());
        loadSkyboxRight->setText(QApplication::translate("Settings", "Load", 0));
        changeSkybox->clear();
        changeSkybox->insertItems(0, QStringList()
         << QApplication::translate("Settings", "Sea", 0)
         << QApplication::translate("Settings", "Sunset", 0)
         << QApplication::translate("Settings", "Custom", 0)
        );
        imgSkyboxFront->setText(QString());
        imgSkyboxBottom->setText(QString());
        loadSkyboxBottom->setText(QApplication::translate("Settings", "Load", 0));
        label_5->setText(QApplication::translate("Settings", "Left", 0));
        label_6->setText(QApplication::translate("Settings", "Right", 0));
        label_7->setText(QApplication::translate("Settings", "Back", 0));
        label_8->setText(QApplication::translate("Settings", "Front", 0));
        label_9->setText(QApplication::translate("Settings", "Bottom", 0));
        label_10->setText(QApplication::translate("Settings", "Top", 0));
        tabWidget->setTabText(tabWidget->indexOf(Skybox), QApplication::translate("Settings", "Skybox", 0));
        terrainTextures->clear();
        terrainTextures->insertItems(0, QStringList()
         << QApplication::translate("Settings", "Planet Earth", 0)
         << QApplication::translate("Settings", "Fantastic planet", 0)
         << QApplication::translate("Settings", "Custom", 0)
        );
        waterImg->setText(QString());
        sandImg->setText(QString());
        grassImg->setText(QString());
        stoneImg->setText(QString());
        snowImg->setText(QString());
        loadWater->setText(QApplication::translate("Settings", "Load", 0));
        loadSand->setText(QApplication::translate("Settings", "Load", 0));
        loadGrass->setText(QApplication::translate("Settings", "Load", 0));
        loadStone->setText(QApplication::translate("Settings", "Load", 0));
        loadSnow->setText(QApplication::translate("Settings", "Load", 0));
        tabWidget->setTabText(tabWidget->indexOf(Textures), QApplication::translate("Settings", "Textures", 0));
        label->setText(QApplication::translate("Settings", "waterMax", 0));
        label_2->setText(QApplication::translate("Settings", "sandMax", 0));
        label_3->setText(QApplication::translate("Settings", "grassMax", 0));
        label_4->setText(QApplication::translate("Settings", "stoneMax", 0));
        waterMaxLabel->setText(QApplication::translate("Settings", "TextLabel", 0));
        sandMaxLabel->setText(QApplication::translate("Settings", "TextLabel", 0));
        grassMaxLabel->setText(QApplication::translate("Settings", "TextLabel", 0));
        stoneMaxLabel->setText(QApplication::translate("Settings", "TextLabel", 0));
        tabWidget->setTabText(tabWidget->indexOf(Terrain), QApplication::translate("Settings", "Terrain", 0));
        reset->setText(QApplication::translate("Settings", "Reset to default", 0));
        tabWidget->setTabText(tabWidget->indexOf(General), QApplication::translate("Settings", "General", 0));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
