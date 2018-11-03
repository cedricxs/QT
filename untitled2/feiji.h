#ifndef FEIJI_H
#define FEIJI_H
#include<QGraphicsItem>
#include<QRectF>

class feiji:public QGraphicsItem
{

public:
    feiji();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget);
protected:
    // void keyPressEvent(QKeyEvent* event);

#endif // FEIJI_H
