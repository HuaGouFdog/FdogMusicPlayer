#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include<QtMultimedia/QMediaPlayer>
#include<QtMultimedia/QMediaPlaylist>
#include<QNetworkAccessManager>
#include<QNetworkReply>
#include<QVector>
#include<QMap>
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
    QNetworkAccessManager * network_manager3;
    QNetworkRequest * network_request3;

    bool m_bIsWindowMoveable = false;
    bool m_IsPause = true;
    bool m_Volume = false;
    QPoint m_point;
    int M_Amount=0;   //总数
    int M_Value=0;  //当前
    QVector<QString> m_Vectorlist;
    QVector<QString> m_ID;
    QVector<QString> m_Jpg;
    //用于判断哪个功能被选中 ，默认显示歌词
    //    0 歌词显示
    //    1 搜索
    //    2 歌单
    //    3 排行榜
    //    4 试听列表
    //    5 历史播放
    //    6 我的收藏
    //    7 本地音乐
    //    8 下载管理
    //    9 设置
    bool m_b_array[10]={false};

    QMap<int,QString> lrcMap;


public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

    void search(QString str);
    void parseJson(QString json);
    void parseJsonSongInfo(QString json);

    void hideAll();
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

    void replyFinished3(QNetworkReply *reply);

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_tableWidget_cellDoubleClicked(int row, int column);


    void on_pushButton_8_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
