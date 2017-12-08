#include "observer.h"

Observer::Observer(QObject *parent) :
    QObject(parent)
{
    observables = new QVector<Observable *>;
    changed =false;

}
Observer::~Observer(){
    delete observables;
}

void Observer::addObservable(Observable *obs){
    if(obs != NULL){
        observables->append(obs);
        obs->update(QString("(%1) 订阅成功！！！").arg(title));
    }
}

void Observer::removeObservable(Observable *obs){
    if(obs != NULL){

       QVector<Observable *>::iterator  iter;
       for(iter = observables->begin();iter < observables->end(); iter++){
           if(*iter == obs){
                observables->erase(iter);
                obs->update(QString("(%1) 取消订阅！！！").arg(title));
           }
       }

    }
}

void Observer::notifyAll(const QString &msg){
    if(!changed){
       return;
    }
    for(int i=0;i<observables->size();i++){
        Observable *subject=observables->at(i);
        subject->update(QString("(%1) %2").arg(title,msg));
    }
}
bool Observer::isExistObservable(){
    bool b_existObservable=(observables!=NULL)&&(observables->size()>0);
    return  b_existObservable;
}
