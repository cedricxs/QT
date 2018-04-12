#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include<QPushButton>
#include"subwidget.h"
class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = 0);
    ~MainWidget();
public slots:
void myslot();
void change1();
void change2();
void dealslot(int ,QString);

private:
    subwidget sub;
    QPushButton b1;
    QPushButton b2;
    QPushButton *b3;
};

#endif // MAINWIDGET_H
