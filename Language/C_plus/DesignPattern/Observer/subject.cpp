#include "subject.h"
#include <QDateTime>
#include "observer.h"
#include <QDebug>
Subject::Subject(QObject *parent) :
    QObject(parent)
{
    observeres = new QList<Observer *>;
    changed =false;

}
Subject::~Subject(){
    for(int i=0;i<observeres->size();i++){
         observeres->at(i)->subject=NULL;
    }
    observeres->clear();
    delete observeres;
    qDebug()<<"delete Subject:"<<title;
}

void Subject::attachObserver(Observer *obs){
    if(obs != NULL){
        obs->subject=this;
        observeres->append(obs);

        for(int i=0;i<observeres->size();i++){
            observeres->at(i)->update(QString("%1 加入了 %3").arg(obs->getName(),title));
        }
    }

}
void Subject::detachObserver(Observer *obs){
    if(obs != NULL){
        int findIndex=-1;
        for(int i=0;i<observeres->size();i++){
            if(observeres->at(i) == obs){
                observeres->at(i)->subject = NULL;
                findIndex=i;
            }
            observeres->at(i)->update(QString("%1 退出了 %3").arg(obs->getName(),title));
        }
        if(findIndex!=-1){
            qDebug()<<QString("%1 退出了 %3").arg(obs->getName(),title);
            observeres->removeAt(findIndex);
        }
    }
}

void Subject::notifyAll(const QString &msg){
    if(!changed){
       return;
    }
    for(int i=0;i<observeres->size();i++){
        Observer *obs=observeres->at(i);
        obs->update(QString("%1 [%3]").arg(msg,QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss")));
    }
    changed=false;
}
bool Subject::isExistObserver(){
    bool b_existObserver=(observeres!=NULL)&&(observeres->size()>0);
    return  b_existObserver;
}
