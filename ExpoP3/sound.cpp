#include "sound.h"
#include "ui_sound.h"
#include <QMediaPlayer>
#include <QDebug>


sound::sound(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sound)
{
    ui->setupUi(this);

    player = new QMediaPlayer(this);

    connect(player,&QMediaPlayer::positionChanged,this,&sound::on_positionChanged);

    connect(player,&QMediaPlayer::durationChanged,this,&sound::on_durationChanged);
}

sound::~sound()
{
    delete ui;
}


void sound::on_progressSlider_sliderMoved(int position)
{
    player->setPosition(position);
}

void sound::on_volumeSlider_sliderMoved(int position)
{
    player->setVolume(position);
}

void sound::on_playBtn_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/Usuario/Documents/ExpoP3/Star Wars Theme.mp3"));
    player->play();
    qDebug() <<player->errorString();
}

void sound::on_stopBtn_clicked()
{
    player->stop();
}

void sound::on_positionChanged(qint64 pos)
{
    ui->progressSlider->setValue(pos);
}

void sound::on_durationChanged(qint64 pos)
{
    ui->volumeSlider->setMaximum(pos);
}
