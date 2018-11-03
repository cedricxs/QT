#ifndef MYLABEL_H
#define MYLABEL_H

#include <QLabel>

class Mylabel:public QLabel
{
    Q_OBJECT

protected:
    void mouseMoveEvent(QMouseEvent *ev);
    void mousePressEvent(QMouseEvent *ev);
    void mouseReleaseEvent(QMouseEvent *ev);
    void leaveEvent(QEvent *event);
public:
    explicit Mylabel(QWidget *parent = 0);


};

#endif // MYLABEL_H
