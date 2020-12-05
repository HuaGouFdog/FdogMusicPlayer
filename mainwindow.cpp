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
#include<QMapIterator>
#include<QRegExp>
#include <qdebug.h>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include"jsoninfo.h"
#include"lenon.h"
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //music.createData();
    player = new QMediaPlayer(this);
    playlist = new QMediaPlaylist(this);
    //播放模式 循环，单曲等等
    playlist->setPlaybackMode(QMediaPlaylist::Sequential);
    //播放音量 默认50
    player->setVolume(50);
    player->setPlaylist(playlist);
    //设置positionChanged信号发送频率，毫秒级别
    player->setNotifyInterval(500);
    //信号绑定
    connect(player,SIGNAL(positionChanged(qint64)),this,SLOT(onPositionChanged(qint64)));
    connect(player,SIGNAL(durationChanged(qint64)),this,SLOT(onDurationChanged(qint64)));
    connect(playlist,SIGNAL(currentIndexChanged(int)),this,SLOT(onPlaylistChanged(int)));
    //访问 信号绑定不可指定数组类型
    network_manager = new QNetworkAccessManager();
    network_request = new QNetworkRequest();
    network_manager2 = new QNetworkAccessManager();
    network_request2 = new QNetworkRequest();
    network_manager3 = new QNetworkAccessManager();
    network_request3 = new QNetworkRequest();
    connect(network_manager, &QNetworkAccessManager::finished, this, &MainWindow::replyFinished,Qt::DirectConnection);
    connect(network_manager2, &QNetworkAccessManager::finished, this, &MainWindow::replyFinished2);
    connect(network_manager3, &QNetworkAccessManager::finished,this, &MainWindow::replyFinished3);
    myMapper = new QSignalMapper(this);
    QPushButton * button[8]={ui->pushButton_9,ui->pushButton_10,ui->pushButton_11,ui->pushButton_16,ui->pushButton_12,
                          ui->pushButton_13,ui->pushButton_14,ui->pushButton_15};
   for(int i = 0,j = 2;i<8;i++)
   {
        connect(button[i], SIGNAL(clicked(bool)), myMapper, SLOT(map()));
        myMapper->setMapping(button[i], i);
        j++;
    }
    connect(myMapper, SIGNAL(mapped(int)), this, SLOT(setPushButton(int)));
    //去掉窗口标题栏
    this->setWindowFlags(Qt::FramelessWindowHint);
    //搜索表格整行选中的方式
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
    //搜索表格禁止编辑
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //搜索表格每列宽度
    ui->tableWidget->setColumnWidth(0,240);
    ui->tableWidget->setColumnWidth(1,190);
    ui->tableWidget->setColumnWidth(2,210);
    ui->tableWidget->setColumnWidth(3,140);
    ui->tableWidget_2->setColumnWidth(0,210);
    ui->tableWidget_2->setColumnWidth(1,150);
    ui->tableWidget_2->setColumnWidth(2,210);
    ui->tableWidget_2->setColumnWidth(3,140);
    //ui->tableWidget->setColumnWidth(4,100);由于设置了自动填充，所以最后一列设置没有意义
    //搜索表格去除选中虚线框
    ui->tableWidget->setFocusPolicy(Qt::NoFocus);
    ui->tableWidget_2->setFocusPolicy(Qt::NoFocus);
    //搜索表格不显示网格线
    ui->tableWidget->setShowGrid(false);
    ui->tableWidget_2->setShowGrid(false);
    //加载动态图
    m_movie = new QMovie(":/lib/036428b265240e27035db396a284521a.gif");
    //设置动态图大小
    m_si.setWidth(140);
    m_si.setHeight(100);
    m_movie->setScaledSize(m_si);
    //标签加载动态图
    ui->label_17->setMovie(m_movie);
    //动态图开始
    m_movie->start();
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        m_point = event->pos();
    }
}
void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    move(event->pos() - m_point + pos());
}
void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
}
void MainWindow::search(QString str,int page = 1,int pagesize=30)
{
   QString KGAPISTR1 = QString("http://mobilecdn.kugou.com/api/v3/search/song?format=json"
                               "&keyword=%1&page=%2&pagesize=%3").arg(str).arg(page).arg(pagesize);
    network_request->setUrl(QUrl(KGAPISTR1));
    network_manager->get(*network_request);
}

JsonInfo MainWindow::parseJson(QString json)
{
    JsonInfo JI;
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
                            ui->tableWidget->setRowCount(size);//设置列数
                            for (int i = 0; i < size; i++)
                            {
                                QJsonValue value = array.at(i);
                                if (value.isObject())
                                {
                                    QJsonObject object = value.toObject();
                                    //收集数据
                                    JI.m_Songname_original.append(getcontains(object,"songname_original"));
                                    JI.m_Singername.append(getcontains(object,"singername"));
                                    JI.m_Album_name.append(getcontains(object,"album_name"));
                                    JI.m_Hash.append(getcontains(object,"hash"));
                                    JI.m_Album_id.append(getcontains(object,"album_id"));
                                    if (object.contains("duration"))//时长
                                    {
                                       QJsonValue AlbumID_value = object.take("duration").toInt();
                                       JI.m_Duration.append(AlbumID_value.toInt());
                                    }
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
    for(int i =0;i<JI.m_Songname_original.size();i++)
    {
            //歌曲
            ui->tableWidget->setItem(i,0,new QTableWidgetItem(JI.m_Songname_original.at(i)));
            ui->tableWidget->item(i,0)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
            //歌手
            ui->tableWidget->setItem(i,1,new QTableWidgetItem(JI.m_Singername.at(i)));
            ui->tableWidget->item(i,1)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
            //专辑
            ui->tableWidget->setItem(i,2,new QTableWidgetItem(JI.m_Album_name.at(i)));
            ui->tableWidget->item(i,2)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
            //时长
            QString time = QString("%1:%2").arg(JI.m_Duration.at(i)/60).arg(JI.m_Duration.at(i)%60);
            ui->tableWidget->setItem(i,4,new QTableWidgetItem(time));
            ui->tableWidget->item(i,4)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    }
    ui->label_17->hide();
    ui->label_28->hide();
    //qDebug()<<"老大先出来";
    return JI;
}

void MainWindow::parseJsonSongInfo(QString json)
{
    qDebug()<<"数据:"<<json;
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
                       //播放
                       QString url = getcontains(valuedataObject,"play_url");
                       playlist->addMedia(QUrl::fromLocalFile(url));
                       ui->plainTextEdit->appendPlainText(url);
                       playlist->setCurrentIndex(playlist->mediaCount()-1);
                       m_IsPause = true;
                       ui->pushButton_2->setStyleSheet("border-image: url(:/lib/1zantingtingzhi.png);");
                       player->play();
                       //qDebug()<<"地址"<<url;
                       //歌名显示
                       music.albumid = getcontains(valuedataObject,"album_id");
                       music.songname = getcontains(valuedataObject,"song_name");
                       music.authorname = getcontains(valuedataObject,"author_name");
                       music.albumname = getcontains(valuedataObject,"album_name");
                       //music.time = getcontains(valuedataObject,"timelength").toInt();
                       if (valuedataObject.contains("timelength"))//时长
                       {
                          QJsonValue timejson = valuedataObject.take("timelength").toInt()/1000;
                          music.time = QString("%1:%2").arg(timejson.toInt()/60).arg(timejson.toInt()%60);
                          //qDebug()<<"时间"<<timestr;
                       }
                       ui->label_2->setText(music.songname);
                       //QFileInfo fileInfo(name);
                       ui->listWidget->addItem(music.songname);
                       //歌词获取
                       QString lrc = getcontains(valuedataObject,"lyrics");
                       QStringList lrclist = lrc.split("\n");
                       for(int i =3;i<lrclist.size()-1;i++)
                       {
                           QString ss1 = lrclist.at(i);
                           QRegExp ipRegExp = QRegExp("\\[\\d\\d\\S\\d\\d\\S\\d\\d\\]");
                           bool match = ipRegExp.indexIn(lrclist.at(i));
                           if(match == false)
                           {
                           //时间解析格式(分*60+秒)*100+厘秒
                           int s_1 = ss1.mid(1,2).toInt();      //分
                           int s_2 = ss1.mid(4,2).toInt();      //秒
                           int s_3 = ss1.mid(7,2).toInt();      //厘秒
                           int lrctime = (s_1*60+s_2)*100+s_3;   //规定写法
                           QString lrcstr = ss1.mid(10);
                           lrcMap.insert(lrctime,lrcstr);
                           }
                       }
                       //图片显示
                       network_request3->setUrl(QUrl(getcontains(valuedataObject,"img")));
                       network_manager3->get(*network_request3);
                       //将播放记录添加到历史记录
                       //如果无，则创建数据库，如果有，则追加。
                       //建立并打开数据库
                       QSqlQuery sql_query = music.createData();//创建数据库，数据表
                       //将播放写入记录
                       //导入数据
                       QString strdb = QString("INSERT INTO music VALUES(\"%1\", \"%2\", \"%3\", \"%4\", \"%5\", \"%6\")").arg(music.albumid,music.songname,music.authorname,music.albumname,music.time,"0");
                       if(!sql_query.exec(strdb))
                       {
                           qDebug() << sql_query.lastError();
                       }
                       else
                       {
                           qDebug() << "inserted Wang!";
                       }
                       //读取数据
                       //查询数据
                       sql_query.exec("select * from music");
                       if(!sql_query.exec())
                       {
                           qDebug()<<sql_query.lastError();
                       }
                       else
                       {
                           int i = 0;
                           ui->tableWidget_2->setRowCount(10);
                           while(sql_query.next())
                           {
                               QString albumid_d =sql_query.value(0).toString();
                               QString songname_d = sql_query.value(1).toString();
                               QString singname_d = sql_query.value(2).toString();
                               QString albumname_d = sql_query.value(3).toString();
                               QString time_d = sql_query.value(4).toString();
                               //歌曲
                               qDebug()<<QString("album_id:%1    song_name:%2    sing_name:%3    album_name:%4   time:%5   playnumber:%6").arg(albumid_d,songname_d,singname_d,albumname_d,time_d,"2");
                               //歌曲
                               ui->tableWidget_2->setItem(i,0,new QTableWidgetItem(sql_query.value(1).toString()));
                               ui->tableWidget_2->item(i,0)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
                               //歌手
                               ui->tableWidget_2->setItem(i,1,new QTableWidgetItem(sql_query.value(2).toString()));
                               ui->tableWidget_2->item(i,1)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
                               //专辑
                               ui->tableWidget_2->setItem(i,2,new QTableWidgetItem(sql_query.value(3).toString()));
                               ui->tableWidget_2->item(i,2)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
                               //时长
                               ui->tableWidget_2->setItem(i,4,new QTableWidgetItem(sql_query.value(4).toString()));
                               ui->tableWidget_2->item(i,4)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
                               i++;
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

void MainWindow::hideAll()
{
    QPushButton * button[8]={ui->pushButton_9,ui->pushButton_10,ui->pushButton_11,ui->pushButton_16,ui->pushButton_12,
                          ui->pushButton_13,ui->pushButton_14,ui->pushButton_15};
    for(int i = 0;i<8;i++)
    {
    button[i]->setStyleSheet("text-align:left;color: rgb(255, 255, 255);border-radius:5px;");
    }
}

void MainWindow::setPushButton(int index)
{
    //qDebug()<<"  序号："<<index+2;
    hideAll();
    ui->stackedWidget->setCurrentIndex(index+2);
    QPushButton * button[8]={ui->pushButton_9,ui->pushButton_10,ui->pushButton_11,ui->pushButton_16,ui->pushButton_12,
                          ui->pushButton_13,ui->pushButton_14,ui->pushButton_15};
    button[index]->setStyleSheet("text-align:left;color: rgb(255, 255, 255);border-radius:5px;border-width:1px;border-style:solid;border-color: rgba(232, 232, 232, 10);background-color: rgba(232, 232, 232, 100);");
}

QString MainWindow::getcontains(QJsonObject Object, QString strInfo)
{
    if (Object.contains(strInfo))
    {
        QJsonValue value = Object.take(strInfo);
        if (value.isString())
        {
            return value.toString();
        }
    }
    return "";
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
       qDebug()<<aFile;
       playlist->addMedia(QUrl::fromLocalFile(aFile));
       QFileInfo fileInfo(aFile);
       ui->listWidget->addItem(fileInfo.fileName());
       ui->plainTextEdit->appendPlainText(fileList.at(i));

   }
   if(player->state()!=QMediaPlayer::PlayingState)
   {
       playlist->setCurrentIndex(m_Value);
   }
   player->play();
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
    //(分*60+秒)*100+厘秒
    int pos = position/10;
    QMap<int, QString>::iterator iter = lrcMap.begin();
        while (iter != lrcMap.end())
        {
            if(pos-50<=iter.key()&& pos+50>=iter.key())
            {
                    int j=0;
                    if(iter != lrcMap.begin())
                    {
                        iter--;
                        ui->label_20->setText(iter.value());
                        j++;
                    }
                    if(iter != lrcMap.begin())
                    {
                        iter--;
                        ui->label_19->setText(iter.value());
                        j++;
                    }

                    if(iter != lrcMap.begin())
                    {
                        iter--;
                        ui->label_6->setText(iter.value());
                        j++;
                    }
                    for(;j>0;j--)
                    {
                        iter++;
                    }
               //中间
               ui->label_21->setText(iter.value());
               iter++;
               if(iter != lrcMap.end())
               {
                   ui->label_22->setText(iter.value());
               }
               else
               {
                   ui->label_22->setText("");
                   return;
               }
               iter++;
               if(iter != lrcMap.end())
               {
                   ui->label_23->setText(iter.value());
               }
               else
               {
                   ui->label_23->setText("");
                   return;
               }
               iter++;
               if(iter != lrcMap.end())
               {
                   ui->label_24->setText(iter.value());
               }
               else
               {
                   ui->label_24->setText("");
                   return;
               }
               iter++;
               if(iter != lrcMap.end())
               {
                   ui->label_25->setText(iter.value());
               }
               else
               {
                   ui->label_25->setText("");
                   return;
               }
               iter++;
               if(iter != lrcMap.end())
               {
                   ui->label_26->setText(iter.value());
               }
               else
               {
                   ui->label_26->setText("");
                   return;
               }
               iter++;
               if(iter != lrcMap.end())
               {
                   ui->label_27->setText(iter.value());
               }
               else
               {
                   ui->label_27->setText("");
                   return;
               }
            }
            iter++;
        }
}
void MainWindow::on_horizontalSlider_sliderReleased()
{
     player->setPosition(ui->horizontalSlider->value());
}

void MainWindow::on_pushButton_3_clicked()
{
    qDebug()<<"m_Amount "<<playlist->mediaCount();
    m_Amount = playlist->mediaCount();//总数
    if(m_Value == m_Amount)
    {
        m_Value =0;
        playlist->setCurrentIndex(m_Value);
        if(m_IsPause==true)
        {
            player->play();
        }
        return;
    }
    playlist->setCurrentIndex(++m_Value);
    if(m_IsPause==true)
    {
        player->play();
    }
}

void MainWindow::on_pushButton_1_clicked()
{
    m_Amount = playlist->mediaCount();
    if(m_Value == 0)
    {
        m_Value=m_Amount;
        playlist->setCurrentIndex(m_Value);
        if(m_IsPause==true)
        {
            player->play();
        }
        return;
    }
    playlist->setCurrentIndex(--m_Value);
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

void MainWindow::on_pushButton_4_clicked()
{
    if(m_IsMode == 0)//单曲
    {
        ui->pushButton_4->setStyleSheet("border-image: url(:/lib/danqu.png);");
        m_IsMode++;
        return;
    }
    if(m_IsMode == 1)//循环
    {
        ui->pushButton_4->setStyleSheet("border-image: url(:/lib/xunhuan.png);");
        m_IsMode++;
        return;
    }
    if(m_IsMode == 2)//单曲循环
    {
        ui->pushButton_4->setStyleSheet("border-image: url(:/lib/danquxunhuan.png);");
        m_IsMode++;
        return;
    }
    if(m_IsMode == 3)//随机
    {
        ui->pushButton_4->setStyleSheet("border-image: url(:/lib/suiji.png);");
        m_IsMode =0;
        return;
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    if(m_IsVolume ==true)
    {
        m_IsVolume = false;
        ui->pushButton_5->setStyleSheet("border-image: url(:/lib/shengyin.png);");
        player->setVolume(ui->horizontalSlider_2->value());
        return;
    }
    m_IsVolume = true;
    ui->pushButton_5->setStyleSheet("border-image: url(:/lib/jingyin.png);");
    player->setVolume(0);
}

void MainWindow::on_horizontalSlider_2_valueChanged(int value)
{
    player->setVolume(value);
}

void MainWindow::on_verticalSlider_valueChanged(int value)
{
    player->setPlaybackRate(value);
}

void MainWindow::replyFinished(QNetworkReply *reply)
{
    //qDebug()<<"老二1先出来";
    //获取响应的信息，状态码为200表示正常
    QVariant status_code = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);

    if(reply->error() == QNetworkReply::NoError)
    {
        QByteArray bytes = reply->readAll();  //获取字节
        QString result(bytes);                //转化为字符串
        JI = parseJson(result);
    }
    else
    {
        qDebug()<<"搜索信息处理错误";
    }
    //qDebug()<<"老二2先出来";
    IsExecute = 0;
}

void MainWindow::replyFinished2(QNetworkReply *reply)
{
    //清空缓存
    lrcMap.clear();
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
            //处理错误
        {
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

void MainWindow::on_pushButton_7_clicked()
{
    //清理缓存
    JI.m_Album_id.clear();
    JI.m_Album_name.clear();
    JI.m_Duration.clear();
    JI.m_Hash.clear();
    JI.m_Singername.clear();
    JI.m_Songname_original.clear();
    ui->label_17->show();
    ui->label_28->show();
    hideAll();
    ui->stackedWidget->setCurrentIndex(1);
    //得到数据，然后再进行操作
    search(ui->lineEdit_2->text());
    //列表显示在这里进行
    //qDebug()<<"老四先出来";
}

void MainWindow::on_tableWidget_cellDoubleClicked(int row, int column)
{
    //歌曲请求
    QString KGAPISTR1 =QString("https://www.kugou.com/yy/index.php?r=play/getdata"
    "&hash=%1&album_id=%2&_=1497972864535").arg(JI.m_Hash.at(row)).arg(JI.m_Album_id.at(row));
    //QString KGAPISTR1 =QString("https://www.kugou.com/yy/index.php?r=play/getdata&hash=1112A64F5B265256186A306753951217&album_id=522097&_=1497972864535");
    network_request2->setUrl(QUrl(KGAPISTR1));
    //qDebug()<<"歌曲详细列表"<<KGAPISTR1;
    //不加头无法得到json，可能是为了防止机器爬取
    network_request2->setRawHeader("Cookie","kg_mid=233");
    network_request2->setHeader(QNetworkRequest::CookieHeader, 2333);
    network_manager2->get(*network_request2);
}
void MainWindow::on_pushButton_17_clicked()
{
    hideAll();
    if(m_IsLyricsShow == false)
    {
        //获取当前页面的索引
        m_StackedIndex = ui->stackedWidget->currentIndex();
        ui->pushButton_17->setStyleSheet("border-radius:5px;border-image: url(:/lib/zhankai.png);background-color: rgba(225, 225, 225, 10);");
        ui->stackedWidget->setCurrentIndex(0);
        m_IsLyricsShow = true;
    }
    else
    {
        ui->stackedWidget->setCurrentIndex(m_StackedIndex);
        ui->pushButton_17->setStyleSheet("border-radius:5px;border-image: url(:/lib/zedian.png);background-color: rgba(225, 225, 225, 10);");
        m_IsLyricsShow = false;
    }
}
