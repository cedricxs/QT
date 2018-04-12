#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QPushButton> 

class mybutton : public QPushButton
{
    Q_OBJECT

public:
    mybutton(QWidget *parent = 0);
    ~mybutton();
};

#endif
