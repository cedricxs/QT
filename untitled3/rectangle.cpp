#include "rectangle.h"
#include<QPainter>
#include<QGraphicsSceneDragDropEvent>
#include<QMimeData>

RectItem::RectItem()
{
    setAcceptDrops(true);  //设置接收拖放
    color = QColor(Qt::lightGray);
    dragOver=false;
    setFlag(QGraphicsItem::ItemIsFocusable);
}

QRectF RectItem::boundingRect() const
{
     return QRectF(0, 0, 50, 50);
}

void RectItem::paint(QPainter *painter,
                     const QStyleOptionGraphicsItem *,
                     QWidget *)
{
    //如果其上有拖动，颜色变亮
    painter->setBrush(dragOver ? color.light(130) : color);
    painter->drawRect(0,0,50,50);
}

void RectItem::dragEnterEvent(QGraphicsSceneDragDropEvent *event)
{
    if(event->mimeData()->hasColor()) //如果拖动的数据中有颜色数据，便接收
    {
        event->setAccepted(true);
        dragOver = true;
        update();
    }
    else event->setAccepted(false);
}

void RectItem::dragLeaveEvent(QGraphicsSceneDragDropEvent *event)
{
    Q_UNUSED(event);
    dragOver = false;
    update();
}

void RectItem::dropEvent(QGraphicsSceneDragDropEvent *event)
{

    if (event->mimeData()->hasColor())
       //我们通过类型转换来获得颜色
        color = qvariant_cast<QColor>(event->mimeData()->colorData());
    dragOver = false;
     update();
}
void RectItem::keyPressEvent(QKeyEvent *event)
{
     moveBy(0, 10);  //相对现在的位置移动
}
