#include "listwidget.h"
#include<QDebug>
listwidget::listwidget(QWidget*parent)
    :QListWidget(parent)
{
   close=new  QListWidgetItem("yifu",this);
   this->addItem(close);
   add=new QListWidgetItem("shiwu",this);
   this->addItem(add);
   add1=new QListWidgetItem("huazhuangpin",this);
   this->addItem(add1);
   add2=new QListWidgetItem("jiaju",this);
   this->addItem(add2);
}
void listwidget::mousePressEvent(QMouseEvent *event)
{
   QListWidget::mousePressEvent(event);
  emit item(this->currentItem()->text());
}
