#include <QtCore/QCoreApplication>
#include "statlib.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    StatLib cLIb;
    cLIb.Test();

    return a.exec();
}
