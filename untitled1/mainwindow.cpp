#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include<QLabel>
#include<QPixmap>
#include<QSize>
#include<QMouseEvent>
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    have=false;
    QPixmap m(":/new/prefix1/image/693ca63bf53dfb8ba6bffa607ba7ae04.jpg");
    QPixmap n(":/new/prefix1/image/109febde07325bf6787af0ee9b4152b1.jpg");
    QPixmap e(":/new/prefix1/image/7197bb761c08058d1632dddddff3c578.png");
    ui->label->setPixmap(m);
    ui->label_2->setPixmap(n);
    ui->label_3->setPixmap(e);
ui->stackedWidget->setCurrentIndex(0);
num=0;
for(int i=0;i<100;i++){
connect(&t[i],&Mylabel::signal,this,&MainWindow::deal);
connect(&t[i],&Mylabel::hhh,[=](){this->have=false;});
connect(this,&MainWindow::mysignal,&t[i],&Mylabel::deal);
connect(this,&MainWindow::sss,&t[i],&Mylabel::yy);
}}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_4_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_5_clicked()
{
   QPixmap u(":/new/prefix1/image/c20b8650d01b4e2d7a71d77df3150ee8.jpg");
   t[num].setPixmap(u);
   t[num].setParent(this);
   t[num].setScaledContents(true);
   QSize m(50,70);
   t[num].setFixedSize(m);
   t[num].show();
    num++;
    qDebug()<<num;

}

void MainWindow::mousePressEvent(QMouseEvent *ev)
{

    if(this->have==true)
    {int i=ev->x();
    int j=ev->y();
   emit mysignal(i,j);
}}
void MainWindow::closeEvent(QCloseEvent *event)
{
    int r=QMessageBox::question(this,"Hello","Insure to close?");
    if(r==QMessageBox::Yes){
        event->accept();
    }
    else{
        event->ignore();
    }
}
void MainWindow::keyPressEvent(QKeyEvent *event)
{
    emit sss(event->key());
}
