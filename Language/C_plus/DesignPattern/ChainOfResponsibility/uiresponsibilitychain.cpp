#include "uiresponsibilitychain.h"
#include <QPushButton>
#include <QDebug>
#include <QEvent>
#include "ui_uiresponsibilitychain.h"
UIResponsibilityChain::UIResponsibilityChain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UIResponsibilityChain)
{
    ui->setupUi(this);


}

UIResponsibilityChain::~UIResponsibilityChain()
{
    delete ui;
}
