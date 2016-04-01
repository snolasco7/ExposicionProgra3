#ifndef TEXTO_H
#define TEXTO_H

#include <QDialog>

namespace Ui {
class texto;
}

class texto : public QDialog
{
    Q_OBJECT

public:
    explicit texto(QWidget *parent = 0);
    ~texto();

private:
    Ui::texto *ui;
};

#endif // TEXTO_H
