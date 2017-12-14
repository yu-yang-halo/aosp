#include "user.h"
#include <QDebug>
User::User(QObject *parent) :
    Observer(parent)
{
}
User::~User(){
    if(subject!=NULL){
        subject->detachObserver(this);
    }
    qDebug()<<"delete User:"<<name;
}
void User::update(const QString &msg){
    if(view!=NULL){
        view->appendPlainText(msg);
    }
}
void User::send(const QString &str){

    if(subject!=NULL&&!str.isEmpty()){
        subject->setChanged(true);
        subject->notifyAll(QString("%1: %2").arg(name,str));
    }
}

