#ifndef VIDEO_H
#define VIDEO_H

#include <QDialog>
#include <QMediaPlayer>
#include <QVideoWidget>

namespace Ui {
class video;
}

class video : public QDialog
{
    Q_OBJECT

public:
    explicit video(QWidget *parent = 0);
    ~video();

private:
    Ui::video *ui;
};

#endif // VIDEO_H
