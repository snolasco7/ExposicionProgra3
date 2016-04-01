#include "imagen.h"
#include "ui_imagen.h"

Imagen::Imagen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Imagen)
{
    ui->setupUi(this);

    QPixmap qpix("C:/Users/Usuario/Documents/ExpoP3/akuma.jpg");
    ui->imgLbl->setPixmap(qpix);
}

Imagen::~Imagen()
{
    delete ui;
}
