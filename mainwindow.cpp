#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QtMultimedia/QMediaPlayer>
#include<QtMultimedia/QMediaPlaylist>
#include<QFileDialog>
#include<QDir>
#include<QPoint>
#include<QNetworkAccessManager>
#include<QVariant>
#include<QByteArray>
#include<QJsonParseError>
#include<QJsonDocument>
#include<QJsonObject>
#include<QJsonArray>
#include<QUrl>
#include<QPixmap>
#include<QSize>

#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏
    player = new QMediaPlayer(this);
    playlist = new QMediaPlaylist(this);
    playlist->setPlaybackMode(QMediaPlaylist::Sequential);
    player->setPlaylist(playlist);
    connect(player,SIGNAL(stateChanged(QMediaPlayer::State)),
            this,SLOT(onStateChanged(QMediaPlayer::State)));
    connect(player,SIGNAL(positionChanged(qint64)),
            this,SLOT(onPositionChanged(qint64)));
    connect(player,SIGNAL(durationChanged(qint64)),
            this,SLOT(onDurationChanged(qint64)));
    connect(playlist,SIGNAL(currentIndexChanged(int)),
            this,SLOT(onPlaylistChanged(int)));

    network_manager = new QNetworkAccessManager();
    network_request = new QNetworkRequest();

    network_manager2 = new QNetworkAccessManager();
    network_request2 = new QNetworkRequest();

    network_manager3 = new QNetworkAccessManager();
    network_request3 = new QNetworkRequest();

    connect(network_manager, &QNetworkAccessManager::finished, this, &MainWindow::replyFinished);
    connect(network_manager2, &QNetworkAccessManager::finished, this, &MainWindow::replyFinished2);
    connect(network_manager3, &QNetworkAccessManager::finished,this, &MainWindow::replyFinished3);

    //整行选中的方式
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

    //禁止编辑
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setColumnWidth(0,240);
    ui->tableWidget->setColumnWidth(1,190);
    ui->tableWidget->setColumnWidth(2,210);
    ui->tableWidget->setColumnWidth(3,140);
    //ui->tableWidget->setColumnWidth(4,100);
    //去除选中虚线框
    ui->tableWidget->setFocusPolicy(Qt::NoFocus);
    //不显示网格线
    ui->tableWidget->setShowGrid(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        m_bIsWindowMoveable = true;
        m_point = event->pos();
    }
}
void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (m_bIsWindowMoveable)
    {
        move(event->pos() - m_point + pos());
    }
}
void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);

    m_bIsWindowMoveable = false;
}

void MainWindow::search(QString str)
{
   QString KGAPISTR1 = QString("http://mobilecdn.kugou.com/api/v3/search/song?format=json"
                               "&keyword=%1&page=1&pagesize=18").arg(str);
    network_request->setUrl(QUrl(KGAPISTR1));
    network_manager->get(*network_request);
}

void MainWindow::parseJson(QString json)
{
    QString songname_original; //歌曲名
    QString singername;        //歌手
    QString hashStr;           //hash
    QString album_name;        //专辑
    int duration;          //时间
    QByteArray byte_array;
    QJsonParseError json_error;
    QJsonDocument parse_doucment = QJsonDocument::fromJson(byte_array.append(json), &json_error);
    if (json_error.error == QJsonParseError::NoError)
    {
        if (parse_doucment.isObject())
        {
            QJsonObject rootObj = parse_doucment.object();
            if (rootObj.contains("data"))
            {
                QJsonValue valuedata = rootObj.value("data");
                if (valuedata.isObject())
                {
                    QJsonObject valuedataObject = valuedata.toObject();
                    if (valuedataObject.contains("info"))
                    {
                        QJsonValue valueArray = valuedataObject.value("info");
                        if (valueArray.isArray())
                        {
                            QJsonArray array = valueArray.toArray();
                            int size = array.size();
                            for (int i = 0; i < size; i++)
                            {
                                QJsonValue value = array.at(i);
                                if (value.isObject())
                                {
                                    QJsonObject object = value.toObject();
                                    if (object.contains("songname_original"))//歌曲名
                                    {
                                        QJsonValue AlbumID_value = object.take("songname_original");
                                        if (AlbumID_value.isString())
                                        {
                                            songname_original = AlbumID_value.toString();
                                        }
                                    }
                                    if (object.contains("singername"))//歌手
                                    {
                                        QJsonValue AlbumID_value = object.take("singername");
                                        if (AlbumID_value.isString())
                                        {
                                            singername = AlbumID_value.toString();
                                        }
                                    }
                                    if (object.contains("album_name"))//专辑
                                    {
                                        QJsonValue AlbumID_value = object.take("album_name");
                                        if (AlbumID_value.isString())
                                        {
                                            album_name = AlbumID_value.toString();
                                        }
                                    }
                                    if (object.contains("hash")) //hash
                                    {
                                        QJsonValue FileHash_value = object.take("hash");
                                        if (FileHash_value.isString())
                                        {
                                            hashStr = FileHash_value.toString();
                                            m_Vectorlist.append(FileHash_value.toString());
                                        }
                                    }
                                    if (object.contains("album_id"))
                                    {
                                        QJsonValue FileHash_value = object.take("album_id");
                                        if (FileHash_value.isString())
                                        {
                                            //hashStr = FileHash_value.toString();
                                            m_ID.append(FileHash_value.toString());
                                        }
                                    }
                                    if (object.contains("duration"))//时长
                                    {
                                       QJsonValue AlbumID_value = object.take("duration").toInt();
                                       duration = AlbumID_value.toInt();
                                    }
                                    //歌曲名+歌手+专辑+时间
                                    QString str = songname_original+"  "+singername+"  "+album_name+"  "+QString::number(duration);
                                    //qDebug() << str;
                                    ui->tableWidget->setItem(i,0,new QTableWidgetItem(songname_original));
                                    ui->tableWidget->item(i,0)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
                                    ui->tableWidget->setItem(i,1,new QTableWidgetItem(singername));
                                    ui->tableWidget->item(i,1)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
                                    ui->tableWidget->setItem(i,2,new QTableWidgetItem(album_name));
                                    ui->tableWidget->item(i,2)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
                                    int min = duration/60;
                                    int sesc = duration%60;
                                    QString time = QString("%1:%2").arg(min).arg(sesc);
                                    ui->tableWidget->setItem(i,4,new QTableWidgetItem(time));
                                    ui->tableWidget->item(i,4)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        qDebug() << json_error.errorString();
    }
}

void MainWindow::parseJsonSongInfo(QString json)
{
    QString audio_name;//歌手-歌名
    QString play_url;//播放地址
    QString img;
    QByteArray byte_array;
    QJsonParseError json_error;
    QJsonDocument parse_doucment = QJsonDocument::fromJson(byte_array.append(json), &json_error);
    if(json_error.error == QJsonParseError::NoError)
       {
           if(parse_doucment.isObject())
           {
               QJsonObject rootObj = parse_doucment.object();
               if(rootObj.contains("data"))
               {
                   QJsonValue valuedata = rootObj.value("data");
                   if(valuedata.isObject())
                   {
                       QJsonObject valuedataObject = valuedata.toObject();
                       QString play_urlStr("");
                       if(valuedataObject.contains("play_url"))
                       {
                           QJsonValue play_url_value = valuedataObject.take("play_url");
                           if(play_url_value.isString())
                           {
                               play_urlStr = play_url_value.toString();                    //歌曲的url
                               if(play_urlStr!="")
                               {
                                   qDebug()<<play_urlStr;
                                   player->setMedia(QUrl(play_urlStr));
                                   player->setVolume(50);
                                   player->play();
                               }
                           }
                       }
                       if(valuedataObject.contains("audio_name"))
                       {
                           QJsonValue play_name_value = valuedataObject.take("audio_name");
                           if(play_name_value.isString())
                           {
                               QString audio_name = play_name_value.toString();    //歌曲名字
                               if(audio_name!="")
                               {
                                   //显示
                                   qDebug()<<audio_name;
                                   ui->label_2->setText(audio_name);
                               }
                           }
                       }
                       if(valuedataObject.contains("lyrics")) //lrc
                       {
                           QJsonValue play_url_value = valuedataObject.take("lyrics");
                          if(play_url_value.isString())
                           {
                               QString play_lrcStr = play_url_value.toString();
                               if(play_urlStr!="")
                               {
                                   if(play_lrcStr != "")
                                   {
                                       //emit lrcAdd(play_lrcStr);
                                   }
                                   else
                                   {
                                       //emit lrcAdd("没有歌词");
                                   }
                               }
                           }
                       }
                       if(valuedataObject.contains("img"))
                       {
                           QJsonValue play_name_value = valuedataObject.take("img");
                           if(play_name_value.isString())
                           {
                               QString audio_name = play_name_value.toString();                //歌曲名字
                               if(audio_name!="")
                               {
                                   m_Jpg.append(audio_name);
                                   network_request3->setUrl(QUrl(audio_name));
                                   network_manager3->get(*network_request3);
                               }

                           }
                       }

                   }
               else
                   {
                       qDebug()<<"出错";
                   }
               }
           }
       }
}

void MainWindow::on_pushButton_clicked()
{
   QString curPash =QDir::currentPath();
   QString dlgTitle="选择音频文件";
   QString filter="音频文件(*.mp3 *.wav *.wma)mp3文件(*.mp3);;wav文件(*.wav);;wma文件(*.wma);;所有文件(*.*)";
   QStringList fileList = QFileDialog::getOpenFileNames(this,dlgTitle,curPash,filter);
   if(fileList.count()<1)
       return;
   for(int i = 0;i<fileList.count();i++)
   {
       QString aFile = fileList.at(i);
       playlist->addMedia(QUrl::fromLocalFile(aFile));
       QFileInfo fileInfo(aFile);
       ui->listWidget->addItem(fileInfo.fileName());
       ui->plainTextEdit->appendPlainText(fileList.at(i));

   }
   if(player->state()!=QMediaPlayer::PlayingState)
   {
       playlist->setCurrentIndex(M_Value);
   }
   player->play();
}

void MainWindow::onStateChanged(QMediaPlayer::State state)
{

}

void MainWindow::onPlaylistChanged(int position)
{
    ui->listWidget->setCurrentRow(position);
    QListWidgetItem * item = ui->listWidget->currentItem();
    if(item)
    {
        ui->label_2->setText(item->text());
    }
}

void MainWindow::onDurationChanged(qint64 duration)
{
    ui->horizontalSlider->setMaximum(duration);
    int secs = duration/1000;
    int mins = secs/60;
    secs = secs % 60;
    durationTime = QString::asprintf("%d:%d",mins,secs);
    ui->label->setText(positionTime+"/"+durationTime);
}

void MainWindow::onPositionChanged(qint64 position)
{
    if(ui->horizontalSlider->isSliderDown())
        return;
    ui->horizontalSlider->setSliderPosition(position);
    int secs = position/1000;
    int mins = secs/60;
    secs = secs % 60;
    positionTime = QString::asprintf("%d:%d",mins,secs);
    ui->label->setText(positionTime+"/"+durationTime);
}
void MainWindow::on_horizontalSlider_sliderReleased()
{
     player->setPosition(ui->horizontalSlider->value());
}

void MainWindow::on_pushButton_3_clicked()
{
    M_Amount = playlist->mediaCount();//总数
    if(M_Value == M_Amount)
    {
        M_Value =0;
        playlist->setCurrentIndex(M_Value);
        if(m_IsPause==true)
        {
            player->play();
        }
        return;
    }
    playlist->setCurrentIndex(++M_Value);
    if(m_IsPause==true)
    {
        player->play();
    }
}

void MainWindow::on_pushButton_1_clicked()
{
    M_Amount = playlist->mediaCount();
    if(M_Value == 0)
    {
        M_Value=M_Amount;
        playlist->setCurrentIndex(M_Value);
        if(m_IsPause==true)
        {
            player->play();
        }
        return;
    }
    playlist->setCurrentIndex(--M_Value);
    if(m_IsPause==true)
    {
        player->play();
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    if(m_IsPause==true)//false 为播放
    {
        ui->pushButton_2->setStyleSheet("border-image: url(:/lib/1bofang.png);");
        m_IsPause = false;
        player->pause();
        return;
    }
    m_IsPause = true;
    ui->pushButton_2->setStyleSheet("border-image: url(:/lib/1zantingtingzhi.png);");
    player->play();
}

void MainWindow::on_horizontalSlider_2_valueChanged(int value)
{
    player->setVolume(value);
}

void MainWindow::on_pushButton_5_clicked()
{
    if(m_Volume ==true)
    {
        m_Volume = false;
        ui->pushButton_5->setStyleSheet("border-image: url(:/lib/shengyin.png);");
        player->setVolume(ui->horizontalSlider_2->value());
        return;
    }
    m_Volume = true;
    ui->pushButton_5->setStyleSheet("border-image: url(:/lib/jingyin.png);");
    player->setVolume(0);
}

void MainWindow::on_verticalSlider_valueChanged(int value)
{
    player->setPlaybackRate(value);
}

void MainWindow::replyFinished(QNetworkReply *reply)
{
    //获取响应的信息，状态码为200表示正常
    QVariant status_code = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);

    //无错误返回
    if(reply->error() == QNetworkReply::NoError)
    {
        QByteArray bytes = reply->readAll();  //获取字节
        QString result(bytes);  //转化为字符串
        qDebug()<<result;
        parseJson(result);
    }
    else
    {
        //处理错误
        qDebug()<<"处理错误1";
    }
}

void MainWindow::replyFinished2(QNetworkReply *reply)
{
    //获取响应的信息，状态码为200表示正常
        QVariant status_code = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);

        //无错误返回
        if(reply->error() == QNetworkReply::NoError)
        {
            QByteArray bytes = reply->readAll();  //获取字节
            QString result(bytes);  //转化为字符串
            parseJsonSongInfo(result);
        }
        else
        {
            //处理错误
            qDebug()<<"处理错误2";
        }
}

void MainWindow::replyFinished3(QNetworkReply *reply)
{
    //获取响应的信息，状态码为200表示正常
    QVariant status_code = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);

        //无错误返回
        if(reply->error() == QNetworkReply::NoError)
        {
            QByteArray bytes = reply->readAll();  //获取字节
            QPixmap pixmap;
            QSize picSize(45,45);
            pixmap.loadFromData(bytes);
            //pixmap.save(".pixmap//123456.jpg");
            ui->label_10->setPixmap(pixmap.scaled(picSize));
        }
        else
        {
            //处理错误
            qDebug()<<"处理错误3";
        }
}

void MainWindow::on_pushButton_6_clicked()
{
    search(ui->lineEdit_3->text());
}

void MainWindow::on_pushButton_7_clicked()
{
    search(ui->lineEdit_2->text());
}

void MainWindow::on_tableWidget_cellDoubleClicked(int row, int column)
{
    //歌曲请求
    QString KGAPISTR1 =QString("http://www.kugou.com/yy/index.php?r=play/getdata"
    "&hash=%1&album_id=%2&_=1497972864535").arg(m_Vectorlist.at(row)).arg(m_ID.at(row));
    network_request2->setUrl(QUrl(KGAPISTR1));
    network_request2->setRawHeader("Cookie","kg_mid=2333");
    network_request2->setHeader(QNetworkRequest::CookieHeader, 2333);
    network_manager2->get(*network_request2);
}
