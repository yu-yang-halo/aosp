#ifndef OBSERVER_H
#define OBSERVER_H

#include <QObject>
#include <QVector>
#include <Observer/observable.h>
#include <QString>
/**
 * @brief The Observer class
 *
 * 观察者类
 *
 *
 *
 */

class Observer : public QObject
{
    Q_OBJECT
public:
    explicit Observer(QObject *parent = 0);
    virtual ~Observer();

    void addObservable(Observable *obs);
    void removeObservable(Observable *obs);


    void setChanged(bool _changed){ changed = _changed ;}
    void notifyAll(const QString &msg);
    void setTitle(const QString &_title){title = _title;}

    bool isExistObservable();

private:
    QVector<Observable *> *observables;
    bool  changed;
    QString title;


};

#endif // OBSERVER_H
