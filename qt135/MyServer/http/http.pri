QT += network
INCLUDEPATH += $$PWD
DEPENDPATH += $$PWD

include(../tcp/tcp.pri)

HEADERS += \
    $$PWD/httpserver.h \
    $$PWD/httpconnection.h

SOURCES += \
    $$PWD/httpserver.cpp \
    $$PWD/httpconnection.cpp
