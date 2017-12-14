/********************************************************************************
** Form generated from reading UI file 'uiresponsibilitychain.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIRESPONSIBILITYCHAIN_H
#define UI_UIRESPONSIBILITYCHAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIResponsibilityChain
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *UIResponsibilityChain)
    {
        if (UIResponsibilityChain->objectName().isEmpty())
            UIResponsibilityChain->setObjectName(QStringLiteral("UIResponsibilityChain"));
        UIResponsibilityChain->resize(626, 493);
        pushButton = new QPushButton(UIResponsibilityChain);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 70, 151, 51));

        retranslateUi(UIResponsibilityChain);

        QMetaObject::connectSlotsByName(UIResponsibilityChain);
    } // setupUi

    void retranslateUi(QWidget *UIResponsibilityChain)
    {
        UIResponsibilityChain->setWindowTitle(QApplication::translate("UIResponsibilityChain", "Form", 0));
        pushButton->setText(QApplication::translate("UIResponsibilityChain", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class UIResponsibilityChain: public Ui_UIResponsibilityChain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIRESPONSIBILITYCHAIN_H
