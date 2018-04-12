#include "mybutton.h"
#include<QDebug>
#include<QWidget>
mybutton::mybutton(QWidget*parent)
    :QPushButton(parent)
{

}
mybutton::~mybutton()
{
qDebug()<<"destructor";
}
