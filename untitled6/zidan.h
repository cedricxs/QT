#ifndef ZIDAN_H
#define ZIDAN_H
#include<QLabel>
#include<QTimerEvent>
class zidan:public QLabel
{
public:
    zidan(QWidget*parent,QPoint _zidan);
    QPoint p;
    ~zidan(){}
protected:
    void timerEvent(QTimerEvent *event);
};

#endif // ZIDAN_H
