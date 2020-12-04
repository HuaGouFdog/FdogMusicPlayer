#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include<QtMultimedia/QMediaPlayer>
#include<QtMultimedia/QMediaPlaylist>
#include<QNetworkAccessManager>
#include<QNetworkReply>
#include<QVector>
#include<QMap>
#include<QMovie>
#include<QSize>
#include<QPushButton>
#include<QJsonObject>
#include <QSignalMapper>
#include"jsoninfo.h"
#include"lenon.h"
#include"historydata.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QMediaPlayer * player;      //播放器
    QMediaPlaylist * playlist;  //播放列表
    QString durationTime;       //当前文件播放进度
    QString positionTime;       //文件播放总进度

    /*****************************************************************
     * QNetworkAccessManager类用于协调网络操作，在QNetworkRequest类发起一个*
     * 网络请求后，QNetworkAccessManager类负责发送网络，创建网络相应。       *
     *                                                               *
     * QNetworkRequest类通过一个URL地址发起网络协议请求，也保存网络请求的信息，*
     * 目前支持HTTP，FTP，和局部文件URLs的下载或上传。                      *
    *****************************************************************/

    QNetworkRequest * network_request;      //用于歌曲搜索
    QNetworkRequest * network_request2;     //用于歌曲播放
    QNetworkRequest * network_request3;
    QNetworkAccessManager * network_manager;
    QNetworkAccessManager * network_manager2;
    QNetworkAccessManager * network_manager3;

    QPoint m_point;                     //鼠标坐标
    QMovie * m_movie;                   //添加动态图
    QSize m_si;                         //动态图压缩大小
    QVector<QString> songname_original; //歌曲名
    QVector<QString> singername;        //歌手
    QVector<QString> album_name;        //专辑
    QVector<int> duration;              //时间
    QVector<QString> m_Vectorlist;      //保存hash
    QVector<QString> m_ID;              //保存album_id
    QVector<QString> m_Jpg;             //保存img
    QMap<int,QString> lrcMap;           //保存歌词
    JsonInfo JI;
    int m_Amount=0;                     //文件总索引
    int m_Value=0;                      //当前索引
    int m_StackedIndex =0;              //获取当前页面索引
    bool m_IsPause = true;              //判断播放器状态
    bool m_IsVolume = false;            //判断音量状态
    bool m_IsLyricsShow = false;        //判断歌词显示状态
    int m_IsMode=0;                     //判断播放模式0单曲1循环2单曲循环3随机播放
    Lenon J;                            //极简
    QSignalMapper * myMapper;
    HistoryData  music;
    int IsExecute = 1;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void mousePressEvent(QMouseEvent *event);    //鼠标点击
    void mouseMoveEvent(QMouseEvent *event);     //鼠标移动
    void mouseReleaseEvent(QMouseEvent *event);  //鼠标释放
    void search(QString str,int page,int pagesize); //搜索

    void parseJsonSongInfo(QString json);
    void hideAll();
    QString getcontains(QJsonObject Object,QString strInfo);
    JsonInfo parseJson(QString json);
private slots:
    void setPushButton(int index);//列表效果
    void on_pushButton_1_clicked();     //上一曲
    void on_pushButton_2_clicked();     //播放
    void on_pushButton_3_clicked();     //下一曲
    void on_pushButton_4_clicked();     //播放模式
    void on_pushButton_5_clicked();     //音量
    void on_pushButton_clicked();       //添加本地音乐
    void on_pushButton_17_clicked();    //展开歌词
//    void on_pushButton_9_clicked();     //歌单
//    void on_pushButton_10_clicked();    //排行榜
//    void on_pushButton_11_clicked();    //试听列表
//    void on_pushButton_16_clicked();    //历史播放
//    void on_pushButton_12_clicked();    //我的收藏
//    void on_pushButton_13_clicked();    //本地音乐
//    void on_pushButton_14_clicked();    //下载管理
    //void on_pushButton_15_clicked();    //设置
    void on_pushButton_7_clicked();     //搜索
    void replyFinished(QNetworkReply *reply);
    void replyFinished2(QNetworkReply *reply);
    void replyFinished3(QNetworkReply *reply);
    void onPlaylistChanged(int position);
    void onDurationChanged(qint64 duration);
    void onPositionChanged(qint64 position);
    void on_horizontalSlider_sliderReleased();              //播放进度
    void on_horizontalSlider_2_valueChanged(int value);     //声音
    void on_verticalSlider_valueChanged(int value);         //速度
    void on_tableWidget_cellDoubleClicked(int row, int column);//双击搜索列表歌曲
    //void musicData();

    //void createDate();
    //void on_tableWidget_2_cellDoubleClicked(int row, int column);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
