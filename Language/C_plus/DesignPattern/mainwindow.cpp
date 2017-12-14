#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QString>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui_observer = new UIObserver;
    ui_responsibilityChain    = new UIResponsibilityChain;

    ui->stackedWidget->addWidget(ui_observer);
    ui->stackedWidget->addWidget(ui_responsibilityChain);

    ui->stackedWidget->setCurrentIndex(0);

}

MainWindow::~MainWindow()
{
    delete ui;

    delete ui_observer;
    delete ui_responsibilityChain;
}
