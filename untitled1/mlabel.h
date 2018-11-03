#ifndef MYLABEL_H
#define MYLABEL_H

#include <QLabel>
#include<QTimerEvent>

class Mylabel:public QLabel
{
    Q_OBJECT

protected:
    void mouseMoveEvent(QMouseEvent *ev);
    void mousePressEvent(QMouseEvent *ev);
    void mouseReleaseEvent(QMouseEvent *ev);
    void leaveEvent(QEvent *event);
public:
    int tid;
    QPoint tar;
    void timerEvent(QTimerEvent *ev);
    explicit Mylabel(QWidget *parent = 0);
bool selected;
signals:
void signal();
void hhh();
public slots:
void yy(int m);

void deal(int m,int n);
};

#endif // MYLABEL_H
