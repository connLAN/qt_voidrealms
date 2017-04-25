#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QString* str;
    MyClass cClass;
    str = cClass.badPointer();
    qDebug() << &str;
    str->append("opps");
}

void Dialog::on_pushButton_2_clicked()
{
    MyClass cClass;
    cClass.customDebug();
}

void Dialog::on_pushButton_3_clicked()
{
    MyClass cClass;
    cClass.variables();
}

void Dialog::on_pushButton_4_clicked()
{
    MyClass cClass;
    cClass.badMath();
}
