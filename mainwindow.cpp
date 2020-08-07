#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QtMultimedia/QMediaPlayer>
#include<QtMultimedia/QMediaPlaylist>
#include<QFileDialog>
#include<QDir>
#include<QPoint>
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
bool m_bIsWindowMoveable = false;
QPoint m_point;
int sum=0;
int sum_=0;
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
       playlist->setCurrentIndex(sum_);
   }
   player->play();
}

void MainWindow::onStateChanged(QMediaPlayer::State state)
{

}

void MainWindow::onPlaylistChanged(int position)
{

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
    sum = playlist->mediaCount();//总数
    if(sum_ == sum)
    {
        sum_ =0;
        playlist->setCurrentIndex(sum_);
        player->play();
        return;
    }
    playlist->setCurrentIndex(++sum_);
    player->play();
}

void MainWindow::on_pushButton_1_clicked()
{
    sum = playlist->mediaCount();
    if(sum_ == 0)
    {
        sum_=sum;
        playlist->setCurrentIndex(sum_);
        player->play();
        return;
    }
    playlist->setCurrentIndex(--sum_);
    player->play();
}
