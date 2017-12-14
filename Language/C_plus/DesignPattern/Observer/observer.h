#ifndef OBSERVABLE_H
#define OBSERVABLE_H
#include <QString>
#include <QObject>
#include "subject.h"
/**
 * @brief The Observer class
 * 接口类
 */

class Observer : public QObject
{
    Q_OBJECT
public:
    friend class Subject;
    explicit Observer(QObject *parent = 0);
    virtual ~Observer();


    virtual void update(const QString &msg) = 0;


    QString getName() const;
    void setName(const QString &value);
    bool isAttached() const{ return subject != NULL;}



protected:
    QString name;
    Subject* subject;



};

#endif // OBSERVABLE_H
