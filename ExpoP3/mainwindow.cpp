#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "imagen.h"
#include "sound.h"
#include "video.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Imagen imagen;
    imagen.setModal(true);
    imagen.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    sound sonido;
    sonido.setModal(true);
    sonido.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    video vid;
    vid.setModal(true);
    vid.exec();
}
