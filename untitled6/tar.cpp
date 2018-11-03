#include "tar.h"
#include<QLabel>
#include<QPainter>
#include<QSize>
#include<QDebug>

tar::tar(QWidget*parent,int i)
    :QLabel(parent)
{
    this->setPixmap(QPixmap(":/new/prefix2/77282532b52658c96fdc16ba437953ff.png"));
    qsrand((unsigned)time(0));
    count =0;t=0;
this->setScaledContents(true);
    speed=i;
    this->resize(80,80);
    this->move(rand()%1024-1,0);
    this->show();
    this->startTimer(30);
    p=80;

}
void tar::timerEvent(QTimerEvent *event)
{
        if(count==25)t=1;
        else if(count==10)t=0;
        if(count<25&&t==0)count++;
        else if(count>10&&t==1)count--;
       _size.setWidth(p-count);
       _size.setHeight(p-count);
       this->resize(_size);
       this->move(this->pos().x(),this->pos().y()+speed);
        if(pos().y()>=768)
        {this->move(qrand()%1024-1,0);
            speed=qrand()%(8-1+1)+1;
        p=qrand()%(30-1+1)+80; }

}
