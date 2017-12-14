#include "myapplication.h"
#include <QDebug>
#include "global.h"
MyApplication::MyApplication(int &argc, char **argv):QApplication(argc, argv){

}

bool MyApplication::notify(QObject *receiver, QEvent *e){


    return QApplication::notify(receiver,e);
}
