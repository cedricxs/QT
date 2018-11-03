#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPixmap>
#include<QRect>
#include<QSize>
#include<QDebug>
#include <QtGlobal>
#include<QTimer>
#include"zidan.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->resize(1024,768);
    this->setWindowIcon(QIcon(QPixmap(":/new/prefix2/77282532b52658c96fdc16ba437953ff.png")));
      srand((unsigned)time(0));
    for(int i=0;i<8;i++)
 {tar*temp=new tar(this,rand()%(8-1+1)+1);
           _tar.push_back(temp);}
   key_1=0;key_2=0;
    id2=this->startTimer(1);
    feiji.setX(485);feiji.setY(650);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter p(this);
    p.drawPixmap(this->rect(),QPixmap(":/new/prefix1/0dc4c97b66fc5b35aea9e6b2b425b144.jpg"));
  p.drawPixmap(QRect(feiji,QSize(100,100)),QPixmap(":/new/prefix1/myimage.png"));


}

void MainWindow::moving(int j)
{
    switch (j) {
    case Qt::Key_A:
        feiji.setX(feiji.x()-5);
        break;
    case Qt::Key_S:
        feiji.setY(feiji.y()+5);
        break;
    case Qt::Key_D:
        feiji.setX(feiji.x()+5);
        break;
    case Qt::Key_W:
        feiji.setY(feiji.y()-5);
        break;
    default:
        break;
    }

}
void MainWindow::timerEvent(QTimerEvent *event)
{

if(event->timerId()==id2)
{
   moving(key_1);
   moving(key_2);
   if(feiji.x()>=1024)feiji.setX(0);
   else if(feiji.x()<=-100)feiji.setX(1024);
   if(feiji.y()>=768)feiji.setY(0);

   else if(feiji.y()<=-80)feiji.setY(768);
}
    update();
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_A:
        if(key_1==0)key_1=event->key();
        else if(key_1!=event->key()&&key_2!=event->key())key_2=event->key();
        break;
    case Qt::Key_S:
        if(key_1==0)key_1=event->key();
        else if(key_1!=event->key()&&key_2!=event->key())key_2=event->key();
        break;
    case Qt::Key_D:
        if(key_1==0)key_1=event->key();
        else if(key_1!=event->key()&&key_2!=event->key())key_2=event->key();
        break;
    case Qt::Key_W:
        if(key_1==0)key_1=event->key();
        else if(key_1!=event->key()&&key_2!=event->key())key_2=event->key();
        break;
    case Qt::Key_J:
        zidan*temp1=new zidan(this,QPoint(feiji.x()+33,feiji.y()));

        _zidan.push_back(temp1);

        break;
}
}
void MainWindow::keyReleaseEvent(QKeyEvent *event)
{
    if(key_2==event->key())key_2=0;
    if(key_1==event->key())key_1=0;
}

