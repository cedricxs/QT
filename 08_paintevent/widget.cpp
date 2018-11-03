#include "widget.h"
#include "ui_widget.h"
#include<QPainter>
#include<QPixmap>
#include<QPen>
#include<QBrush>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    x=0;
}

Widget::~Widget()
{
    delete ui;
}
void Widget::paintEvent(QPaintEvent *event)     //is will used whenever the widget change;
{
    //QPainter p(this);
    QPainter p;
    p.begin(this);
    //p.drawPixmap(0,0,width(),height(),QPixmap(":/new/prefix1/image/693ca63bf53dfb8ba6bffa607ba7ae04.jpg"));
    p.drawPixmap(this->rect(),QPixmap(":/new/prefix1/image/693ca63bf53dfb8ba6bffa607ba7ae04.jpg"));
    QPen pen;
    //pen.setColor(Qt::red);
    pen.setColor(QColor(10,244,88));
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(5);
    p.setPen(pen);
    p.drawLine(50,50,150,50);
    p.drawLine(50,50,50,150);
    QLinearGradient linearGradient(150,150,200,250);
    linearGradient.setColorAt(0.2, Qt::white);
    linearGradient.setColorAt(0.6, Qt::green);
    linearGradient.setColorAt(1.0, Qt::red);
    p.setBrush(QBrush(linearGradient));
    p.drawRect(150,150,50,100);
    p.drawEllipse(QPoint(150,150),25,25);
    p.drawPixmap(x,100,50,50,QPixmap(":/new/prefix1/image/c20b8650d01b4e2d7a71d77df3150ee8.jpg"));
    p.end();
}

void Widget::on_pushButton_clicked()
{
    x+=20;
    if(x>this->width())
    {
        x=0;
    }
   update();
}
