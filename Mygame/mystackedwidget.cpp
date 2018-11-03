#include "mystackedwidget.h"
#include<QPainter>
#include<QDebug>
#include<QMessageBox>
MystackedWidget::MystackedWidget(QWidget*parent)
    :QStackedWidget(parent)
{
this->setCurrentIndex(0);
    init=false;
}

void MystackedWidget::paintEvent(QPaintEvent *)
{
    if(this->currentIndex()==0)
    {QPainter p(this);
    p.drawPixmap(0,0,this->width(),this->height(),QPixmap(":/new/prefix1/image/d8f6f11a849d59fd3f18ffa32c4c1c6e.jpg"));
}
    if(this->currentIndex()==1)
    {
        QPainter p(this);
        p.drawPixmap(0,0,this->width(),this->height(),QPixmap(":/new/prefix1/image/8fbd3ba40735487dfc84eece9299632f.jpg"));
    }
    if(this->currentIndex()==2&&init==false)
    {
        QPainter p(this);
        p.drawPixmap(0,0,this->width(),this->height(),QPixmap(":/new/prefix1/image/6e223b8705b1ffd11a5ab3881f1c25b5.jpg"));
    init=true;}
}
void MystackedWidget::deal()
{

}

