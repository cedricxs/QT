#include "mlabel.h"
#include"mainwindow.h"
#include<QDebug>
#include<QMouseEvent>
#include<QPixmap>
#include<QTimerEvent>
#include<QPoint>
Mylabel::Mylabel(QWidget *parent)
    :QLabel(parent)
{
this->setMouseTracking(true);
    this->selected=false;
 }

void Mylabel::mouseMoveEvent(QMouseEvent *ev)
{

}
void Mylabel::mousePressEvent(QMouseEvent *ev)
{
    if(this->selected==false){
this->setStyleSheet("QLabel{border:2px outset red;}");
     this->selected=true;
emit signal();}
    else if(this->selected==true)
    {
        this->setStyleSheet("QLabel{border:0px outset red;}");
        this->selected=false;
    }

}
void Mylabel::mouseReleaseEvent(QMouseEvent *ev)
{

}
void Mylabel::leaveEvent(QEvent *event)
{

}
void Mylabel::deal(int m, int n)
{
    if(this->selected==true)
    {
        tar=QPoint(m,n);
        int x=m-this->x();
        int y=n-this->y();
        this->tid=this->startTimer(30);
        this->setStyleSheet("QLabel{border:0px outset red;}");this->selected=false;emit hhh();}
}
void Mylabel::timerEvent(QTimerEvent*ev)
{

   this->move(this->x()+1,this->y()+1);
if((this->x()>this->tar.x())||(this->y()>this->tar.y()))
    killTimer(tid);
}
void Mylabel::yy(int m)
{
    if(this->selected==true){
    if(m==Qt::Key_A)
    this->move(this->x()-3,this->y());
    if(m==Qt::Key_S)
    this->move(this->x(),this->y()+3);
    if(m==Qt::Key_D)
    this->move(this->x()+3,this->y());
    if(m==Qt::Key_W)
    this->move(this->x(),this->y()-3);
    }
}
