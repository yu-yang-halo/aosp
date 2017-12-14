#ifndef OBSERVER_H
#define OBSERVER_H

#include <QObject>
#include <QList>
#include <QString>

/**
 * @brief The Subject class
 *
 * Subject 目标类
 *
 *
 */
class Observer;
class Subject : public QObject
{
    Q_OBJECT
public:
    explicit Subject(QObject *parent = 0);
    virtual ~Subject();

    void attachObserver(Observer *obs);
    void detachObserver(Observer *obs);


    void setChanged(bool _changed){ changed = _changed ;}
    void notifyAll(const QString &msg);
    void setTitle(const QString &_title){title = _title;}

    bool isExistObserver();
    int  total() const{ if(observeres!=NULL){return observeres->size();}else { return 0;}}

private:
    QList<Observer *> *observeres;
    bool  changed;
    QString title;


};

#endif // OBSERVER_H
