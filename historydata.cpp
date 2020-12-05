#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include    <QDebug>
#include<QTableWidget>
#include "historydata.h"
HistoryData::HistoryData()
{

}

HistoryData::~HistoryData()
{
    this->database.close();
}
QSqlQuery HistoryData::createData()
{
    //建立并打开数据库
    this->database;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("MusicDataBase.db");
    if (!database.open())
    {
        qDebug() << "创建失败" << database.lastError();
    }
    else
    {
        qDebug() << "创建成功" ;
    }
    //创建表格
    QSqlQuery sql_query;
    if(!sql_query.exec("create table music(album_id int primary key, songname text, authorname text, albumname text,time int, playnumber int)"))
    {
        qDebug() << "表格成功创建"<< sql_query.lastError();
    }
    else
    {
        qDebug() << "表格创建失败";
    }
    return sql_query;
}

void HistoryData::getData(QSqlQuery sql_query)
{
    //查询数据
    sql_query.exec("select * from music");
    if(!sql_query.exec())
    {
        qDebug()<<sql_query.lastError();
    }
    else
    {
        while(sql_query.next())
        {
            QString albumid_d =sql_query.value(0).toString();
            QString songname_d = sql_query.value(1).toString();
            QString singname_d = sql_query.value(2).toString();
            QString albumname_d = sql_query.value(3).toString();
            QString time_d = sql_query.value(4).toString();
            //歌曲
            qDebug()<<QString("album_id:%1    song_name:%2    sing_name:%3    album_name:%4   time:%5   playnumber:%6").arg(albumid_d,songname_d,singname_d,albumname_d,time_d,"2");
        }
    }
}
