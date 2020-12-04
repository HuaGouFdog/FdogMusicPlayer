#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>                                                                                                                                                                                                                                                                                                                                             #include "historydata.h"
HistoryData::HistoryData()
{

}
//void createData()
//{
//    //建立并打开数据库
//    QSqlDatabase database;
//    database = QSqlDatabase::addDatabase("QSQLITE");
//    database.setDatabaseName("MusicDataBase.db");
//    if (!database.open())
//    {
//        qDebug() << "创建失败" << database.lastError();
//    }
//    else
//    {
//        qDebug() << "创建成功" ;
//    }
//    //创建表格
//    QSqlQuery sql_query;
//    if(!sql_query.exec("create table music(album_id int primary key, songname text, authorname text, albumname text,time int, playnumber int)"))
//    {
//        qDebug() << "表格成功创建"<< sql_query.lastError();
//    }
//    else
//    {
//        qDebug() << "表格创建失败";
//    }
//    QString strdb = QString("INSERT INTO music VALUES(\"%1\", \"%2\", \"%3\", \"%4\", \"%5\", \"%6\")").arg(albumid,songname,authorname,albumname,time,"0");
//    if(!sql_query.exec(strdb))
//    {
//        qDebug() << sql_query.lastError();
//    }
//    else
//    {
//        qDebug() << "inserted Wang!";
//    }

//    sql_query.exec("select * from music");
//    if(!sql_query.exec())
//    {
//        qDebug()<<sql_query.lastError();
//    }
//    else
//    {
//        while(sql_query.next())
//        {
//            QString albumid =sql_query.value(0).toString();
//            QString songname = sql_query.value(1).toString();
//            QString singname = sql_query.value(2).toString();
//            QString albumname = sql_query.value(3).toString();
//            QString time = sql_query.value(4).toString();
//            qDebug()<<QString("album_id:%1    song_name:%2    sing_name:%3    album_name:%4   time:%5   playnumber:%6").arg(albumid,songname,authorname,albumname,time,"2");
//        }
//    }
//    //关闭数据库
//    database.close();
//}
