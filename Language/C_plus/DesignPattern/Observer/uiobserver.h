#ifndef UIOBSERVER_H
#define UIOBSERVER_H

#include <QWidget>
#include "newspaper.h"
#include "user.h"
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
    void on_btn_subscribe1_clicked();

    void on_btn_subscribe2_clicked();

    void on_btn_subscribe3_clicked();

    void on_btn_send_clicked();

    void on_btn_clear_clicked();

    void on_edit_message1_textChanged();

    void on_ck_auto_stateChanged(int arg1);

private:
    Ui::UIObserver *ui;
    User* user1;
    User* user2;
    User* user3;
    NewsPaper *newsPaper;

};

#endif // UIOBSERVER_H
