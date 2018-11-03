#include "widget.h"
#include "ui_widget.h"
#include<QIcon>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label->setStyleSheet("QLabel{color:red;"
                             "background:gray;"
       "border:2px outset blue;}");
    QPixmap t(":/new/prefix1/image/6eba111b6d588f8600f0dfc98578e699.jpg");
                             QIcon m(t);
}

Widget::~Widget()
{
    delete ui;
}
