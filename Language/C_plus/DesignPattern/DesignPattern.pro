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
    Observer/observer.cpp \
    Observer/observable.cpp \
    Observer/user.cpp \
    Observer/newspaper.cpp \
    Observer/uiobserver.cpp

HEADERS  += mainwindow.h \
    Observer/observer.h \
    Observer/observable.h \
    Observer/user.h \
    Observer/newspaper.h \
    Observer/uiobserver.h

FORMS    += mainwindow.ui \
    Observer/uiobserver.ui

OTHER_FILES += \
    设计模式.txt
