#ifndef USER_H
#define USER_H

#include <QObject>
#include <QString>
#include <QTextBrowser>
#include "Observer/observer.h"
#include "Observer/observable.h"
class User : public Observable
{
    Q_OBJECT
public:
    explicit User(Observable *parent = 0);
    void subscribe(Observer *const observer);
    void cancelSubcribe(Observer *const observer);
    void setName(const QString _name){name = _name;}
    QString getName() const{ return name;}
    virtual void update(const QString &msg);

    void attachShowLabel(QTextBrowser* _textBrowser){ textBrowser = _textBrowser; }
    bool hasSubscribe() const{ return b_hasSubscribe;}

private:
    QString name;
    QTextBrowser* textBrowser;
    bool    b_hasSubscribe;

};

#endif // USER_H
