#include "uiobserver.h"
#include "ui_uiobserver.h"
#include <QFont>
UIObserver::UIObserver(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UIObserver)
{
    ui->setupUi(this);

    user1=new User;
    user1->setName("张三");
    user1->attachShowLabel(ui->textBrowser_message);

    user2=new User;
    user2->setName("李四");
    user2->attachShowLabel(ui->textBrowser_message);

    user3=new User;
    user3->setName("王二");
    user3->attachShowLabel(ui->textBrowser_message);

    newsPaper=new NewsPaper;
    newsPaper->setTitle("华尔街日报");


    QFont font;
    font.setPixelSize(20);
    font.setBold(true);
    ui->label_paper->setFont(font);


    ui->edit_message1->setPlainText("【经济】 欧盟扩大汽车监管权力 车企可能面临巨额罚款");
    //ui->edit_message1->setStyleSheet("background-color:yellow;");
    QPalette p=ui->edit_message1->palette();
    QBrush myBrush = QBrush(Qt::red,Qt::SolidPattern);
    p.setBrush( QPalette::Text,  myBrush);
    ui->edit_message1->setPalette(p);



}

UIObserver::~UIObserver()
{
    delete ui;
    delete user1;
    delete user2;
    delete user3;
    delete newsPaper;

}

void UIObserver::on_btn_subscribe1_clicked()
{
    if(user1->hasSubscribe()){
        user1->cancelSubcribe(newsPaper);
        ui->btn_subscribe1->setText("订阅");
    } else{
        user1->subscribe(newsPaper);
        ui->btn_subscribe1->setText("取消订阅");
    }


}

void UIObserver::on_btn_subscribe2_clicked()
{
    if(user2->hasSubscribe()){
        user2->cancelSubcribe(newsPaper);
        ui->btn_subscribe2->setText("订阅");
    } else{
        user2->subscribe(newsPaper);
        ui->btn_subscribe2->setText("取消订阅");
    }

}

void UIObserver::on_btn_subscribe3_clicked()
{
    if(user3->hasSubscribe()){
        user3->cancelSubcribe(newsPaper);
        ui->btn_subscribe3->setText("订阅");
    } else{
        user3->subscribe(newsPaper);
        ui->btn_subscribe3->setText("取消订阅");
    }

}

void UIObserver::on_btn_send_clicked()
{

    if(newsPaper->isExistObservable()){
        newsPaper->setChanged(true);
        newsPaper->notifyAll(ui->edit_message1->toPlainText());
    }else{
        ui->textBrowser_message->append("很遗憾！还没有任何订阅者。");
    }

}
void UIObserver::on_edit_message1_textChanged()
{
    if(!ui->ck_auto->isChecked()){
        return ;
    }
    ui->textBrowser_message->clear();
    if(newsPaper->isExistObservable()){
        newsPaper->setChanged(true);
        newsPaper->notifyAll(ui->edit_message1->toPlainText());
    }else{
        ui->textBrowser_message->append("很遗憾！还没有任何订阅者。");
    }
}


void UIObserver::on_btn_clear_clicked()
{
    ui->textBrowser_message->clear();
}


void UIObserver::on_ck_auto_stateChanged(int arg1)
{
    ui->btn_send->setEnabled(arg1==0);
}
