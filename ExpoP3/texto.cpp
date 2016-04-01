#include "texto.h"
#include "ui_texto.h"

texto::texto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::texto)
{
    ui->setupUi(this);
}

texto::~texto()
{
    delete ui;
}
