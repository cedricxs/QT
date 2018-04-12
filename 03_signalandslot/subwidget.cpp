#include "subwidget.h"

subwidget::subwidget(QWidget *parent) : QWidget(parent)
{this->setWindowTitle("sub");
    this->resize(300,450);
b4.setParent(this);
b4.setText("change to BOSS");
b4.move(100,200);
connect(&b4,&QPushButton::clicked,this,&subwidget::sentsignal);
i=0;
}
void subwidget::sentsignal()
{i++;
    emit mysignal();//when b4 is clicked,subwidget will emit a signal;
    emit mysignal(i,"cedricxs");
}

