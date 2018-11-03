#include "widget.h"
#include <QApplication>
#include<QIcon>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setWindowTitle("hello");
     QPixmap m(":/new/prefix1/image/6eba111b6d588f8600f0dfc98578e699.jpg");
     QIcon n(m);
    w.setWindowIcon(n);
    w.show();
    return a.exec();
}
