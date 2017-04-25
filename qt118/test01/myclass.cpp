#include "myclass.h"

MyClass::MyClass(QObject *parent) :
    QObject(parent)
{
}

QString* MyClass::badPointer()
{
    QScopedPointer<QString> p(new QString());

    return p.data();
}

void MyClass::customDebug()
{
    for(int i = 0; i < 10; i++)
    {
        qDebug() << i;
    }
}

void MyClass::variables()
{
    int i = 10;
    QString name = "Bryan";

    name.append(" Cairns");

    qDebug() << name;
}

void MyClass::badMath()
{
    int i = 12;
    int c = i / 0;
}

