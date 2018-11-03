#include "zidan.h"
#include<QPoint>
#include<iterator>
#include<iostream>
#include<QDebug>
zidan::zidan(QWidget*parent,QPoint _zidan)
    :QLabel(parent),p(_zidan)
{
this->setPixmap(QPixmap(":/new/prefix1/zidan.png"));
    this->move(_zidan);
    this->resize(32,32);

    startTimer(1);
    this->show();
}

void zidan::timerEvent(QTimerEvent *event)
{
    this->move(this->x(),this->y()-8);
    if(this->y()<=-10) this->destroyed();
}
