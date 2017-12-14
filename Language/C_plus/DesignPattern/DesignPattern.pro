#-------------------------------------------------
#
# Project created by QtCreator 2017-12-07T12:58:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DesignPattern
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Observer/uiobserver.cpp \
    myapplication.cpp \
    ChainOfResponsibility/uiresponsibilitychain.cpp \
    global.cpp \
    Observer/subject.cpp \
    Observer/observer.cpp \
    Observer/user.cpp

HEADERS  += mainwindow.h \
    Observer/uiobserver.h \
    myapplication.h \
    ChainOfResponsibility/uiresponsibilitychain.h \
    global.h \
    Observer/subject.h \
    Observer/observer.h \
    Observer/user.h

FORMS    += mainwindow.ui \
    Observer/uiobserver.ui \
    ChainOfResponsibility/uiresponsibilitychain.ui

OTHER_FILES += \
    设计模式.txt
