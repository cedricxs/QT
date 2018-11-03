#include"widget.h"
#include<QPainter>

static const double PI = 3.14159265358979323846264338327950288419717;

Butterfly::Butterfly()
{
    setFlag(QGraphicsItem::ItemIsMovable);
    pix_up.load(":/new/prefix1/cd0307a9ca78a854602e330cbefdcb24.jpg");
    pix_down.load(":/new/prefix1/3fc91e1ed3172ae736c887ee1ada09e6.jpg");
    up = true;
    startTimer(100);
}

QRectF Butterfly::boundingRect() const
{
    qreal adjust = 8;
    return QRectF(-pix_up.width()/2-adjust,-pix_up.height()/2-adjust,
                pix_up.width()+adjust*2,pix_up.height()+2*adjust);
}

void Butterfly::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    if(up)
    {
        painter->drawPixmap(boundingRect().topLeft(),pix_up);
        up = !up;
    }
    else
    {
        painter->drawPixmap(boundingRect().topLeft(),pix_down);
        up = !up;
    }
//    painter->setPen(Qt::NoPen);
//    painter->setBrush(Qt::darkGray);
//    painter->drawEllipse(-7,-7,40,40);

//    painter->setPen(QPen(Qt::black,0));
//    painter->setBrush(flash ? (Qt::red):(Qt::yellow));
//    painter->drawEllipse(-10,-10,40,40);

}

void Butterfly::timerEvent(QTimerEvent *)
{
    // edge controll
    qreal edgex = scene()->sceneRect().right()+boundingRect().width()/2;
    qreal edgetop = scene()->sceneRect().top()+boundingRect().height()/2;
    qreal edgebottom = scene()->sceneRect().bottom()+boundingRect().height()/2;
    //qDebug() << scene()->itemsBoundingRect();
    if (pos().x() >= edgex)
        setPos(scene()->sceneRect().left(),pos().y());
    if (pos().y() <= edgetop)
        setPos(pos().x(),scene()->sceneRect().bottom());
    if (pos().y() >= edgebottom)
        setPos(pos().x(),scene()->sceneRect().top());

    angle += (qrand()%10)/20.0;
    qreal dx = fabs(sin(angle*PI)*10.0);
    qreal dy = (qrand()%20)-10.0;

    setPos(mapToParent(dx,dy));
    update();
}
