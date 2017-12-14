/********************************************************************************
** Form generated from reading UI file 'uiobserver.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIOBSERVER_H
#define UI_UIOBSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIObserver
{
public:
    QPushButton *btn_3;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPlainTextEdit *plainTextEdit_1;
    QPushButton *btn_11;
    QPushButton *btn_22;
    QPushButton *btn_33;
    QLabel *label;
    QPlainTextEdit *plainTextEdit_2;
    QPlainTextEdit *plainTextEdit_3;
    QLineEdit *lineEdit_111;
    QPushButton *btn_111;
    QPushButton *btn_222;
    QLineEdit *lineEdit_222;
    QPushButton *btn_333;
    QLineEdit *lineEdit_333;

    void setupUi(QWidget *UIObserver)
    {
        if (UIObserver->objectName().isEmpty())
            UIObserver->setObjectName(QStringLiteral("UIObserver"));
        UIObserver->resize(1021, 653);
        btn_3 = new QPushButton(UIObserver);
        btn_3->setObjectName(QStringLiteral("btn_3"));
        btn_3->setGeometry(QRect(540, 70, 211, 51));
        btn_1 = new QPushButton(UIObserver);
        btn_1->setObjectName(QStringLiteral("btn_1"));
        btn_1->setGeometry(QRect(0, 70, 211, 51));
        btn_2 = new QPushButton(UIObserver);
        btn_2->setObjectName(QStringLiteral("btn_2"));
        btn_2->setGeometry(QRect(270, 70, 211, 51));
        plainTextEdit_1 = new QPlainTextEdit(UIObserver);
        plainTextEdit_1->setObjectName(QStringLiteral("plainTextEdit_1"));
        plainTextEdit_1->setGeometry(QRect(0, 130, 261, 341));
        btn_11 = new QPushButton(UIObserver);
        btn_11->setObjectName(QStringLiteral("btn_11"));
        btn_11->setGeometry(QRect(210, 70, 51, 51));
        btn_22 = new QPushButton(UIObserver);
        btn_22->setObjectName(QStringLiteral("btn_22"));
        btn_22->setGeometry(QRect(480, 70, 51, 51));
        btn_33 = new QPushButton(UIObserver);
        btn_33->setObjectName(QStringLiteral("btn_33"));
        btn_33->setGeometry(QRect(750, 70, 51, 51));
        label = new QLabel(UIObserver);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(280, 10, 391, 51));
        plainTextEdit_2 = new QPlainTextEdit(UIObserver);
        plainTextEdit_2->setObjectName(QStringLiteral("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(270, 130, 261, 341));
        plainTextEdit_3 = new QPlainTextEdit(UIObserver);
        plainTextEdit_3->setObjectName(QStringLiteral("plainTextEdit_3"));
        plainTextEdit_3->setGeometry(QRect(540, 130, 261, 341));
        lineEdit_111 = new QLineEdit(UIObserver);
        lineEdit_111->setObjectName(QStringLiteral("lineEdit_111"));
        lineEdit_111->setGeometry(QRect(0, 480, 201, 31));
        btn_111 = new QPushButton(UIObserver);
        btn_111->setObjectName(QStringLiteral("btn_111"));
        btn_111->setGeometry(QRect(210, 480, 51, 31));
        btn_222 = new QPushButton(UIObserver);
        btn_222->setObjectName(QStringLiteral("btn_222"));
        btn_222->setGeometry(QRect(480, 480, 51, 31));
        lineEdit_222 = new QLineEdit(UIObserver);
        lineEdit_222->setObjectName(QStringLiteral("lineEdit_222"));
        lineEdit_222->setGeometry(QRect(270, 480, 201, 31));
        btn_333 = new QPushButton(UIObserver);
        btn_333->setObjectName(QStringLiteral("btn_333"));
        btn_333->setGeometry(QRect(750, 480, 51, 31));
        lineEdit_333 = new QLineEdit(UIObserver);
        lineEdit_333->setObjectName(QStringLiteral("lineEdit_333"));
        lineEdit_333->setGeometry(QRect(560, 480, 181, 31));

        retranslateUi(UIObserver);

        QMetaObject::connectSlotsByName(UIObserver);
    } // setupUi

    void retranslateUi(QWidget *UIObserver)
    {
        UIObserver->setWindowTitle(QApplication::translate("UIObserver", "Form", 0));
        btn_3->setText(QApplication::translate("UIObserver", "\351\202\271\351\230\263", 0));
        btn_1->setText(QApplication::translate("UIObserver", "\351\273\204\350\231\216", 0));
        btn_2->setText(QApplication::translate("UIObserver", "\345\220\264\344\272\221\351\276\231", 0));
        btn_11->setText(QApplication::translate("UIObserver", "\345\212\240\345\205\245", 0));
        btn_22->setText(QApplication::translate("UIObserver", "\345\212\240\345\205\245", 0));
        btn_33->setText(QApplication::translate("UIObserver", "\345\212\240\345\205\245", 0));
        label->setText(QApplication::translate("UIObserver", "\347\240\224\345\217\221\347\276\244", 0));
        btn_111->setText(QApplication::translate("UIObserver", "\345\217\221\351\200\201", 0));
        btn_222->setText(QApplication::translate("UIObserver", "\345\217\221\351\200\201", 0));
        btn_333->setText(QApplication::translate("UIObserver", "\345\217\221\351\200\201", 0));
    } // retranslateUi

};

namespace Ui {
    class UIObserver: public Ui_UIObserver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIOBSERVER_H
