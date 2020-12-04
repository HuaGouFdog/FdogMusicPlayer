#ifndef HISTORYDATA_H
#define HISTORYDATA_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include<QTableWidget>
class HistoryData
{
public:
    QString albumid;
    QString songname;
    QString authorname;
    QString albumname;
    QString time;
    HistoryData();
    ~HistoryData();
    QSqlQuery createData();
    void getData(QSqlQuery sql_query, QTableWidget *Table);
};

#endif // HISTORYDATA_H
