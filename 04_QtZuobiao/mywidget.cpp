#include "mywidget.h"
#include"mybutton.h"
#include <QPushButton>
MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{//(0,0)is the (0,0)of the parent widget;
    move(100,100);
    resize(400,300);
QPushButton *b1=new QPushButton(this);
b1->setText("^_^");
b1->move(100,100);
b1->resize(200,100);
QPushButton *b2=new QPushButton(b1);
b2->setText("@_@");
b2->move(10,10);
mybutton *b3=new mybutton(this);
connect(b3,&mybutton::clicked,this,&MyWidget::close);
b3->setText("b3");
b3->move(50,50);
}

MyWidget::~MyWidget()
{

}
