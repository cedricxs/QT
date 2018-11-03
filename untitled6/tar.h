#ifndef TAR_H
#define TAR_H
#include<QLabel>
#include<QTimerEvent>
class tar:public QLabel
{
public:
    tar(QWidget*parent,int i);
    QSize _size;
    int count;int t;
    int speed;
int p;
    ~tar(){}
protected:
    void timerEvent(QTimerEvent *event);
};

#endif // TAR_H
