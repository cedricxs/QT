#include "mainwidget.h"
#include<QPushButton>
#include<QDebug>
MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowTitle("BOSS");
    this->resize(300,450);
    b1.setParent(this);
    b1.setText("^_^");
    b1.move(100,100);
    b2.setParent(this);
    b2.setText("TnT");
    b3=new QPushButton;
    b3->setParent(this);
    b3->setText("333");
    b3->move(200,200);
    //sub.show();                    //sub is not the child of MainWidget,so if not sub.show(),sub will not visiable;
                                     //although sub is a member of MainWidget;
    void(subwidget::*p)()=&subwidget::mysignal;
    void(subwidget::*q)(int,QString)=&subwidget::mysignal;
    connect(b3,&QPushButton::clicked,this,&MainWidget::change1);
    connect(&sub,p,this,&MainWidget::change2);
    connect(&sub,q,this,&MainWidget::dealslot);
   // connect(&sub,SIGNAL(mysignal(int,QString))),this,SLOT(dealslot(int,QString));
    connect(&b1,&QPushButton::clicked,this,&MainWidget::close);
    connect(&b2,&QPushButton::clicked,this,&MainWidget::myslot);
    connect(&b2,&QPushButton::clicked,&b1,&QPushButton::hide);
}

void MainWidget::myslot()
{
    b2.setText("T_T");
}
void MainWidget::change1()
{
    sub.show();
    this->hide();
}
void MainWidget::change2()
{
    this->show();
    sub.hide();
}
void MainWidget::dealslot(int a,QString str)
{
    qDebug()<<a<<str;
}
MainWidget::~MainWidget()
{

}
