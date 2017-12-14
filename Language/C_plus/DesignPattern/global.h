#ifndef GLOABL_H
#define GLOABL_H
#include <QString>
#include <QMap>
class Global{
public:
    Global();
    QString valueOfKey(const int key) const;
    void init();
private:
    QMap<int,QString> map;
};

extern Global g_Global;


#endif // GLOABL_H
