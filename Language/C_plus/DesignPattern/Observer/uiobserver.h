#ifndef UIOBSERVER_H
#define UIOBSERVER_H

#include <QWidget>
#include "user.h"
#include "subject.h"
namespace Ui {
class UIObserver;
}

class UIObserver : public QWidget
{
    Q_OBJECT

public:
    explicit UIObserver(QWidget *parent = 0);
    ~UIObserver();

private slots:


    void on_btn_11_clicked();

    void on_btn_22_clicked();

    void on_btn_33_clicked();

    void on_btn_111_clicked();

    void on_btn_222_clicked();

    void on_btn_333_clicked();

    void on_btn_1_clicked();

    void on_btn_2_clicked();

    void on_btn_3_clicked();

private:
    Ui::UIObserver *ui;
    Subject *subject;
    User    *user1;
    User    *user2;
    User    *user3;

};

#endif // UIOBSERVER_H
