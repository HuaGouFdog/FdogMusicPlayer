#ifndef HISTORYDATA_H
#define HISTORYDATA_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include<QTableWidget>
class HistoryData
{
public:
    QSqlDatabase database;
    QString albumid;
    QString songname;
    QString authorname;
    QString albumname;
    QString time;
    HistoryData();
    ~HistoryData();
    QSqlQuery createData();
    void getData(QSqlQuery sql_query);
};

#endif // HISTORYDATA_H
