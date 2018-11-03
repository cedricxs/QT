#include "feiji.h"
#include<QRect>
#include<QPainter>
#include<QPixmap>
#include<QKeyEvent>
feiji::feiji()
{
this->setFlag(QGraphicsItem::ItemIsFocusable);
}
QRectF feiji::boundingRect()const
{
    qreal penWidth = 1;
    return QRectF(0 - penWidth / 2, 0 - penWidth / 2,
                  20 + penWidth, 20 + penWidth);
}
void feiji::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);  //标明该参数没有使用
    Q_UNUSED(widget);
    painter->setBrush(color);
    painter->drawPixmap(0,0,30,30,QPixmap(":/new/prefix1/image/a85bd04c761196a2f9135d7310d43946.jpg"));
}

