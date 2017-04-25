#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <QScopedPointer>
#include <QDebug>
class MyClass : public QObject
{
    Q_OBJECT
public:
    explicit MyClass(QObject *parent = 0);

    QString* badPointer();

    void customDebug();

    void variables();

    void badMath();

signals:

public slots:

};

#endif // MYCLASS_H
