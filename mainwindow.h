#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include<QtMultimedia/QMediaPlayer>
#include<QtMultimedia/QMediaPlaylist>
#include<QNetworkAccessManager>
#include<QNetworkReply>
#include<QVector>
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

    QNetworkAccessManager * network_manager;
    QNetworkRequest * network_request;
    QNetworkAccessManager * network_manager2;
    QNetworkRequest * network_request2;

    bool m_bIsWindowMoveable = false;
    bool m_IsPause = true;
    bool m_Volume = false;
    QPoint m_point;
    int M_Amount=0;   //总数
    int M_Value=0;  //当前
    QVector<QString> m_Vectorlist;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

    void search(QString str);
    void parseJson(QString json);
    void parseJsonSongInfo(QString json);

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

    void replyFinished(QNetworkReply *reply);

    void replyFinished2(QNetworkReply *reply);

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_tableWidget_cellDoubleClicked(int row, int column);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
