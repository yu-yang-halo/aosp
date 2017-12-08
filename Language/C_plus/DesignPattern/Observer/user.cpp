#include "user.h"
#include <QDebug>
User::User(Observable *parent) :
    Observable(parent)
{
    b_hasSubscribe = false;
}

void User::subscribe(Observer *const observer){
    if(observer != NULL){
        observer->addObservable(this);
        b_hasSubscribe = true;
    }
}
void User::cancelSubcribe(Observer *const observer){
    if(observer != NULL){
        observer->removeObservable(this);
        b_hasSubscribe = false;
    }
}

void User::update(const QString &msg){
    qDebug()<<name<<" - 收到消息： [ "<<msg<<" ]";


    if(textBrowser != NULL){
        textBrowser->append(QString("%1 - 收到消息： [ %2 ]").arg(name,msg));
    }
}
