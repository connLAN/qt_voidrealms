#-------------------------------------------------
#
# Project created by QtCreator 2011-12-12T12:12:32
#
#-------------------------------------------------

QT       -= gui

TARGET = StatLib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += statlib.cpp

HEADERS += statlib.h
unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
