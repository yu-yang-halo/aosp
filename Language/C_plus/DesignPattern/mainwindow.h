#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Observer/uiobserver.h"
#include "ChainOfResponsibility/uiresponsibilitychain.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    UIObserver *ui_observer;
    UIResponsibilityChain *ui_responsibilityChain;
};

#endif // MAINWINDOW_H
