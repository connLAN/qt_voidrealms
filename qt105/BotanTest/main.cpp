#include <QtCore/QCoreApplication>
#include "botanwrapper.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    BotanWrapper cWrapper;

    cWrapper.setPassword("!@#$%^&*()_kjnklawh!@ucoi9293");
    cWrapper.setSalt("#$%^&!*@y9sg08dfsdfs");
    QString cEnc = cWrapper.Encrypt("This is my secret :)");

    qDebug() << cEnc;
    qDebug() << cWrapper.Decrypt(cEnc);
    


    return a.exec();
}
