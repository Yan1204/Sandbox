#-------------------------------------------------
#
# Project created by QtCreator 2016-03-02T13:47:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets opengl multimedia

TARGET = Sandbox_Qt
TEMPLATE = app


SOURCES += main.cpp\
        sandbox.cpp \
    sandboxwidget.cpp \
    camera.cpp \
    filestream.cpp \
    inputstream.cpp \
    lighting.cpp \
    math_3d.cpp \
    pipeline.cpp \
    scene.cpp \
    shadertechnique.cpp \
    skybox.cpp \
    terrain.cpp \
    texture.cpp \
    texture2D.cpp \
    texture3D.cpp \
    settings.cpp \
    sensorcalibration.cpp \
    sensorsettings.cpp \
    crop.cpp \
    globalsettings.cpp \
    lightdirection.cpp \
    waitforsensor.cpp

HEADERS  += sandbox.h \
    sandboxwidget.h \
    camera.h \
    datastream.h \
    filestream.h \
    inputstream.h \
    lighting.h \
    math_3d.h \
    pipeline.h \
    scene.h \
    shadertechnique.h \
    skybox.h \
    terrain.h \
    texture.h \
    texture2D.h \
    texture3D.h \
    settings.h \
    sensorcalibration.h \
    sensorsettings.h \
    crop.h \
    globalsettings.h \
    lightdirection.h \
    waitforsensor.h

FORMS    += sandbox.ui \
    settings.ui \
    sensorcalibration.ui \
    sensorsettings.ui \
    crop.ui \
    lightdirection.ui \
    waitforsensor.ui

LIBS += -L$$PWD/OpenNI2/Bin/x64-Release/ -lOpenNI2

LIBS += -L$$PWD/cuda-7.0/lib64/ -lcudart

LIBS += -L$$PWD/lib/ -lopencv_imgproc -lopencv_imgcodecs -lopencv_core -lopencv_photo -lopencv_highgui

RESOURCES += \
    shaders.qrc

