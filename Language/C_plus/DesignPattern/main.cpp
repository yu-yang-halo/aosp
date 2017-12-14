#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QVector>
#include "myapplication.h"
int main(int argc, char *argv[])
{
    MyApplication a(argc, argv);
    MainWindow w;
    w.show();




    return a.exec();
}
