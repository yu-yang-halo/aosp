#ifndef OBSERVABLE_H
#define OBSERVABLE_H
#include <QString>
#include <QObject>
/**
 * @brief The Observable class 可观测类接口
 * 接口类
 */

class Observable : public QObject
{
    Q_OBJECT
public:
    explicit Observable(QObject *parent = 0);

    virtual void update(const QString &msg) = 0;

};

#endif // OBSERVABLE_H
