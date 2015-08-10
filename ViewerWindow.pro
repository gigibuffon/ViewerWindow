#-------------------------------------------------
#
# Project created by QtCreator 2015-05-29T12:17:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ViewerWindow
TEMPLATE = app


SOURCES += main.cpp\
        viewerwindow.cpp \
    txtviewer.cpp \
    vlist.cpp

HEADERS  += viewerwindow.h \
    txtviewer.h \
    vlist.h

FORMS    += viewerwindow.ui \
    txtviewer.ui
