#-------------------------------------------------
#
# Project created by QtCreator 2011-04-19T18:05:38
#
#-------------------------------------------------

QT       += core
QT       += network
QT       -= gui

TARGET = PoolSvr
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    myserver.cpp \
    myrunnable.cpp

HEADERS += \
    myserver.h \
    myrunnable.h
