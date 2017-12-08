#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui_Observer=new UIObserver;

    ui->stackedWidget->addWidget(ui_Observer);



}

MainWindow::~MainWindow()
{
    delete ui;
}
