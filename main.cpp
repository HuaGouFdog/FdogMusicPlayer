#include "mainwindow.h"
#include <QApplication>
#include"lenon.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    Lenon L;
    w.show();



    return a.exec();
}
