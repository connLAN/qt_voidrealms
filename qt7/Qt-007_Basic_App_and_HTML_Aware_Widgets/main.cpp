// QT Tutorial
// http://www.voidrealms.com
// https://www.youtube.com/watch?v=6KtOzh0StTc&list=PL7C604D492F9E0E0B

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{

    // Note: for Qt5, you need to add in the *.pro file
    //          QT += widgets
    //       right-click on the project folder and select "Run qmake"
    //          after any changes

    QApplication app(argc, argv);
    QLabel *label = new QLabel(
        "<h2>Hello</h2>"
        "<b>Hello</b> <font color=red><i>World</i></font>"
        "<h2>Hello <font color=red><i>World</i></font></h2>");

    label->show();

    return app.exec();
}
