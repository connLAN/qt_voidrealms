#-------------------------------------------------
#
# Project created by QtCreator 2011-12-12T12:13:47
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = StatTest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app
SOURCES += main.cpp

INCLUDEPATH += "E:/Test/StatLib"
LIBS += "E:/Test/StatLib-build-desktop-4_7_0_Release/release/libStatLib.a"

HEADERS += \
    ../StatLib/statlib.h

