#ifndef NEWSPAPER_H
#define NEWSPAPER_H

#include <QObject>
#include "Observer/observer.h"
class NewsPaper : public Observer
{
    Q_OBJECT
public:
    explicit NewsPaper(Observer *parent = 0);



};

#endif // NEWSPAPER_H
