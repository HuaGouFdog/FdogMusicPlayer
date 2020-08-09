#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include<QtMultimedia/QMediaPlayer>
#include<QtMultimedia/QMediaPlaylist>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QMediaPlayer * player;
    QMediaPlaylist * playlist;
    QString durationTime;
    QString positionTime;

    bool m_bIsWindowMoveable = false;
    bool m_IsPause = false;
    bool m_Volume = false;
    QPoint m_point;
    int M_Amount=0;   //总数
    int M_Value=0;  //当前

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
private slots:
    void on_pushButton_clicked();
    void onStateChanged(QMediaPlayer::State state);
    void onPlaylistChanged(int position);
    void onDurationChanged(qint64 duration);
    void onPositionChanged(qint64 position);
    void on_horizontalSlider_sliderReleased();

    void on_pushButton_3_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_horizontalSlider_2_valueChanged(int value);

    void on_pushButton_5_clicked();

    void on_verticalSlider_valueChanged(int value);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
