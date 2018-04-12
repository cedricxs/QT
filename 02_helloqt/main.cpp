#include<QApplication>
#include<QWidget>
#include<QPushButton>

int main(int argc,char **argv)
{
    QApplication app(argc,argv);

    QWidget w;
    w.setWindowTitle("cedricxs!");

    QPushButton b;
    b.setParent(&w);
    b.move(100,200);
    b.setText("^_^");

    w.show();

    app.exec();
    return 0;
}

