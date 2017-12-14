#ifndef USER_H
#define USER_H
#include "observer.h"
#include <QPlainTextEdit>
class User : public Observer
{
    Q_OBJECT
public:
    explicit User(QObject *parent = 0);
    ~User();
    void update(const QString &msg);

    void attachView(QPlainTextEdit* _view){view=_view;}
    void detachView(){ if(view!=NULL){ view =NULL; };}


    void send(const QString &str);

private:
    QPlainTextEdit* view;

};

#endif // USER_H
