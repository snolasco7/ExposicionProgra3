#ifndef SOUND_H
#define SOUND_H

#include <QDialog>
#include <QMediaPlayer>
#include <QDebug>

namespace Ui {
class sound;
}

class sound : public QDialog
{
    Q_OBJECT

public:
    explicit sound(QWidget *parent = 0);
    ~sound();

private slots:
    void on_progressSlider_sliderMoved(int position);

    void on_volumeSlider_sliderMoved(int position);

    void on_playBtn_clicked();

    void on_stopBtn_clicked();

    void on_positionChanged(qint64 pos);

    void on_durationChanged(qint64 pos);

private:
    Ui::sound *ui;
    QMediaPlayer* player;
};

#endif // SOUND_H
