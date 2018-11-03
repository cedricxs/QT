#include "mylabel.h"
#include<QDebug>
#include<QMouseEvent>
#include<QPixmap>
Mylabel::Mylabel(QWidget *parent)
    :QLabel(parent)
{
this->setMouseTracking(true);
}

void Mylabel::mouseMoveEvent(QMouseEvent *ev){
    QPixmap m(":/new/prefix1/image/6eba111b6d588f8600f0dfc98578e699.jpg");
    qDebug()<<ev->pos();
this->setPixmap(m);
}
void Mylabel::mousePressEvent(QMouseEvent *ev)
{
    int i=ev->x();
    int j=ev->y();
    QString text=QString("<center>"
                         "Mouse Place: (%1,%2)</center>").arg(i).arg(j);
    this->setText(text);
}
void Mylabel::mouseReleaseEvent(QMouseEvent *ev)
{

qDebug()<<ev->button();
}
void Mylabel::leaveEvent(QEvent *event)
{
    QString text=QString("prochine");
    this->setText(text);
}
