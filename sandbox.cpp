#include "sandbox.h"
#include "ui_sandbox.h"
#include "QDebug"
#include "QFileDialog"
#include "QColorDialog"
#include "QMessageBox"


Sandbox::Sandbox(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Sandbox)
{
    printf("1 \n");
    ui->setupUi(this);

    printf("2 \n");
    renderTimer = new QTimer(this);

    printf("3 \n");
    connect(renderTimer, SIGNAL(timeout()), this, SLOT(renderSlot()));

    printf("4 \n");
    connect(ui->start, SIGNAL(pressed()), this, SLOT(start()));
    connect(ui->exit, SIGNAL(pressed()), this, SLOT(quit()));
    connect(ui->mode, SIGNAL(pressed()), this, SLOT(mode()));
    connect(ui->settings, SIGNAL(pressed()), this, SLOT(openSettings()));

    printf("5 \n");
    renderTimer->start(20);

    printf("6 \n");
    ui->start->setAutoDefault(false);
    ui->mode->setAutoDefault(false);
    ui->exit->setAutoDefault(false);
    ui->settings->setAutoDefault(false);

    printf("7 \n");
    inGameMode = false;

    printf("8 \n");
    settings = new Settings(this);
    printf("8.1 \n");
    this->resize(GlobalSettings::getInstance()->getScreenWidth(), GlobalSettings::getInstance()->getScreenHeight());
    printf("8.2 \n");
    ui->widget->resize(GlobalSettings::getInstance()->getScreenWidth(), GlobalSettings::getInstance()->getScreenHeight());
    printf("8.3 \n");
    ui->exit->move(this->width() * 0.1, this->height() * 0.9);
    printf("8.4 \n");
    ui->settings->move(this->width() * 0.35, this->height() * 0.8);
    printf("8.5 \n");
    ui->mode->move(this->width() * 0.46, this->height() * 0.8);
    printf("8.6 \n");
    ui->start->move(this->width() * 0.5, this->height() * 0.8);

    printf("9 \n");
    isRolledUp = false;

    showFullScreen();
}

Sandbox::~Sandbox()
{
    delete ui;
}

void Sandbox::quit()
{
    _exit(0);
}

void Sandbox::openSettings()
{
    settings->raise();
    settings->setFocus();
    settings->show();
}



void Sandbox::mode()
{
    Scene::getInstance()->terrain->setSandboxMode();
    if (ui->mode->text() == "3D")
        ui->mode->setText("2D");
    else
        ui->mode->setText("3D");
}

void Sandbox::start()
{

    ui->start->setVisible(false);
    ui->exit->setVisible(false);
    ui->mode->setVisible(false);
    ui->settings->setVisible(false);
    if (!Scene::getInstance()->terrain->isSandboxMode())
        Scene::getInstance()->terrain->setSandboxMode();

    Scene::getInstance()->setWindowSize(GlobalSettings::getInstance()->getScreenWidth(), GlobalSettings::getInstance()->getScreenHeight());
    Scene::getInstance()->camera->setWindowSize(GlobalSettings::getInstance()->getScreenWidth(), GlobalSettings::getInstance()->getScreenHeight());
    ui->widget->resize(GlobalSettings::getInstance()->getScreenWidth(), GlobalSettings::getInstance()->getScreenHeight());

    showFullScreen();

    inGameMode = true;
}

void Sandbox::renderSlot()
{
    ui->widget->repaint();
}

void Sandbox::keyPressEvent(QKeyEvent *event)
{
    Scene::getInstance() -> OnKeyboard(event);
    int keyInt = event->key();
    Qt::Key key = static_cast<Qt::Key>(keyInt);
    if (key == Qt::Key_Escape)
    {
        if (inGameMode && !isRolledUp)
        {

            ui->start->setVisible(true);
            ui->exit->setVisible(true);
            ui->mode->setVisible(true);
            ui->settings->setVisible(true);
            Scene::getInstance()->terrain->setSandboxMode();
            Scene::getInstance()->setWindowSize(this->width(), this->height());
            Scene::getInstance()->camera->setWindowSize(this->width(),this->height());
            ui->widget->resize(this->width(), this->height());
            ui->widget->move(this->x(), this->y());
            inGameMode = false;
        }

        else if (inGameMode && isRolledUp)
        {
            showNormal();
            Scene::getInstance()->terrain->setSandboxMode();
            ui->start->setVisible(true);
            ui->exit->setVisible(true);
            ui->mode->setVisible(true);
            ui->settings->setVisible(true);
            this->resize(this->width() / 2, this->height() / 2);
            ui->widget->resize(this->width(), this->height());
            ui->widget->move(this->x(), this->y());
            Scene::getInstance()->setWindowSize(this->width(), this->height());
            Scene::getInstance()->camera->setWindowSize(this->width(),this->height());

            ui->exit->move(this->width() * 0.1, this->height() * 0.8);
            ui->settings->move(this->width() * 0.3, this->height() * 0.6);
            ui->mode->move(this->width() * 0.46, this->height() * 0.6);
            ui->start->move(this->width() * 0.5, this->height() * 0.6);

            isRolledUp = true;

        }

        else
        {
            _exit(0);
        }
    }

    if (key == Qt::Key_F11)
    {
        if (!isRolledUp)
        {

            showNormal();
            this->resize(this->width() / 2, this->height() / 2);
            ui->widget->resize(this->width(), this->height());
            ui->widget->move(this->x(), this->y());
            Scene::getInstance()->setWindowSize(this->width(), this->height());
            Scene::getInstance()->camera->setWindowSize(this->width(),this->height());

            ui->exit->move(this->width() * 0.1, this->height() * 0.8);
            ui->settings->move(this->width() * 0.3, this->height() * 0.6);
            ui->mode->move(this->width() * 0.46, this->height() * 0.6);
            ui->start->move(this->width() * 0.5, this->height() * 0.6);

            isRolledUp = true;

          //  ui->start->hide();

        }

        else
        {
            showFullScreen();
            this->resize(GlobalSettings::getInstance()->getScreenWidth(), GlobalSettings::getInstance()->getScreenHeight());
            Scene::getInstance()->setWindowSize(GlobalSettings::getInstance()->getScreenWidth(), GlobalSettings::getInstance()->getScreenHeight());
            Scene::getInstance()->camera->setWindowSize(GlobalSettings::getInstance()->getScreenWidth(), GlobalSettings::getInstance()->getScreenHeight());
            ui->widget->resize(GlobalSettings::getInstance()->getScreenWidth(), GlobalSettings::getInstance()->getScreenHeight());
            ui->widget->move(0, 0);
            ui->start->setVisible(true);
            ui->exit->move(this->width() * 0.1, this->height() * 0.9);
            ui->settings->move(this->width() * 0.35, this->height() * 0.8);
            ui->mode->move(this->width() * 0.46, this->height() * 0.8);
            ui->start->move(this->width() * 0.5, this->height() * 0.8);
            isRolledUp = false;


        }



    }
}




