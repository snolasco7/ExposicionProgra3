#include "video.h"
#include "ui_video.h"

#include <QMediaPlayer>
#include <QVideoWidget>
#include <QDebug>

video::video(QWidget *parent) :
    //QDialog(parent),
    ui(new Ui::video)
{
    ui->setupUi(this);

    QMediaPlayer* player = new QMediaPlayer;
    QVideoWidget* vw = new QVideoWidget;

    player->setVideoOutput(vw);
    player->setMedia(QUrl::fromLocalFile("C:/Users/Usuario/Documents/ExpoP3/AB.mpg"));

    vw->setGeometry(200,200,300,400);
    vw->show();

    player->play();
    qDebug() <<player ->state();
}

video::~video()
{
    delete ui;
}
