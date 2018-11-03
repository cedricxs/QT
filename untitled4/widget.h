#include <QGraphicsItem>
#include <QObject>
#include<QGraphicsScene>
class Butterfly : public QObject, public QGraphicsItem
{
    //Q_OBJECT
public:
    Butterfly();
    void timerEvent(QTimerEvent *);
    QRectF boundingRect() const;

protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


private:
    bool up;
    QPixmap pix_up;
    QPixmap pix_down;

    qreal angle;

};
