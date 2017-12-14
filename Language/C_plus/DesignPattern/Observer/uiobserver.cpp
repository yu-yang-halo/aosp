#include "uiobserver.h"
#include "ui_uiobserver.h"
#include <QFont>

UIObserver::UIObserver(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UIObserver)
{
    ui->setupUi(this);

    //设置字号
    QFont ft;
    ft.setPointSize(18);
    ft.setBold(true);
    ui->label->setFont(ft);
    //设置颜色
    QPalette pa;
    pa.setColor(QPalette::WindowText,Qt::black);
    ui->label->setPalette(pa);



    subject=new Subject;

    subject->setTitle("研发群");



    user1=new User;
    user1->setName("黄虎");
    user1->attachView(ui->plainTextEdit_1);

    user2=new User;
    user2->setName("吴云龙");
    user2->attachView(ui->plainTextEdit_2);

    user3=new User;
    user3->setName("邹阳");
    user3->attachView(ui->plainTextEdit_3);

    ui->label->setText(QString().sprintf("研发群 人数：%d",subject->total()));

}

UIObserver::~UIObserver()
{
    delete ui;


    delete user1;
    delete user2;
    delete user3;

    delete subject;

}

void UIObserver::on_btn_11_clicked()
{
    if(!user1->isAttached()){
        subject->attachObserver(user1);
    }else{
        subject->detachObserver(user1);
    }

    if(user1->isAttached()){
        ui->btn_11->setText("退出");
    }else{
        ui->btn_11->setText("加入");
    }


    ui->label->setText(QString().sprintf("研发群 人数：%d",subject->total()));

}

void UIObserver::on_btn_22_clicked()
{
    if(!user2->isAttached()){
        subject->attachObserver(user2);
    }else{
        subject->detachObserver(user2);
    }

    if(user2->isAttached()){
        ui->btn_22->setText("退出");
    }else{
        ui->btn_22->setText("加入");
    }
    ui->label->setText(QString().sprintf("研发群 人数：%d",subject->total()));

}

void UIObserver::on_btn_33_clicked()
{
    if(!user3->isAttached()){
        subject->attachObserver(user3);
    }else{
        subject->detachObserver(user3);
    }

    if(user3->isAttached()){
        ui->btn_33->setText("退出");
    }else{
        ui->btn_33->setText("加入");
    }
    ui->label->setText(QString().sprintf("研发群 人数：%d",subject->total()));

}



void UIObserver::on_btn_111_clicked()
{

    user1->send(ui->lineEdit_111->text());

    ui->lineEdit_111->clear();

}

void UIObserver::on_btn_222_clicked()
{
    user2->send(ui->lineEdit_222->text());

    ui->lineEdit_222->clear();
}

void UIObserver::on_btn_333_clicked()
{
    user3->send(ui->lineEdit_333->text());

    ui->lineEdit_333->clear();
}

void UIObserver::on_btn_1_clicked()
{
    ui->plainTextEdit_1->clear();

}

void UIObserver::on_btn_2_clicked()
{
     ui->plainTextEdit_2->clear();
}

void UIObserver::on_btn_3_clicked()
{
     ui->plainTextEdit_3->clear();
}
