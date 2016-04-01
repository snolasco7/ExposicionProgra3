#ifndef IMAGEN_H
#define IMAGEN_H

#include <QDialog>

namespace Ui {
class Imagen;
}

class Imagen : public QDialog
{
    Q_OBJECT

public:
    explicit Imagen(QWidget *parent = 0);
    ~Imagen();

private:
    Ui::Imagen *ui;
};

#endif // IMAGEN_H
