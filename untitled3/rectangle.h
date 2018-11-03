#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<QGraphicsItem>

class RectItem : public QGraphicsItem
{
public:
    RectItem();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget);
protected:
     void dragEnterEvent(QGraphicsSceneDragDropEvent *event);
     void dragLeaveEvent(QGraphicsSceneDragDropEvent *event);
     void dropEvent(QGraphicsSceneDragDropEvent *event);
     void keyPressEvent(QKeyEvent *event);
private:
     QColor color;
     bool dragOver;  //标志是否有拖动进入
};
#endif // RECTITEM_H
