#include "observer.h"

Observer::Observer(QObject *parent) :
    QObject(parent)
{
    subject = NULL;


}
Observer::~Observer(){

}

QString Observer::getName() const
{
    return name;
}

void Observer::setName(const QString &value)
{
    name = value;
}



