#-------------------------------------------------
#
# Project created by QtCreator 2016-11-22T22:10:35
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = teste1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    glwidget.cpp \
    cubo.cpp

HEADERS  += mainwindow.h \
    glwidget.h \
    cubo.h

FORMS    += mainwindow.ui

LIBS += -lglut -lGLU
