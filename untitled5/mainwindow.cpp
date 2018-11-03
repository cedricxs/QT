#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPainter>
#include<QPaintEvent>
#include<QPixmap>
#include<QDockWidget>
#include<QAction>
#include <QListWidget>
#include<QDebug>
#include<vector>
#include<QFileDialog>
#include<QVBoxLayout>
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);  
QAction*add=new QAction("add");
ui->Menu->addAction(add);
connect(add,&QAction::triggered,[=](){ui->stackedWidget->setCurrentIndex(0);});
    ui->dockWidget_2->setWidget(ui->listWidget_2);
connect(ui->listWidget_2,&listwidget::item,this,&MainWindow::jiazai);
ui->comboBox->setCurrentIndex(0);
ui->comboBox_2->setCurrentIndex(0);
p=new QVBoxLayout;
p1=new QVBoxLayout;
p2=new QVBoxLayout;
p3=new QVBoxLayout;
connect(this,&MainWindow::create,this,&MainWindow::add);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::paintEvent(QPaintEvent *event)
{
    if(ui->stackedWidget->currentIndex()==0)
    {
       QPainter p(this);
       p.drawPixmap(0,0,400,400,QPixmap(":/new/prefix1/7483d6ba0ad749da9f587ccfb9bf0d23.jpg"));
    }
}

void MainWindow::jiazai(QString content)
{
    if(content=="yifu")
        ui->stackedWidget_2->setCurrentIndex(0);
    if(content=="shiwu")
    {
        ui->stackedWidget_2->setCurrentIndex(1);
    }
    if(content=="huazhuangpin")
    {
        ui->stackedWidget_2->setCurrentIndex(2);
    }
    if(content=="jiaju")
    {
        ui->stackedWidget_2->setCurrentIndex(3);
    }
}


void MainWindow::on_pushButton_2_clicked()
{
      path=QFileDialog::getOpenFileName(this,"open","../","souce(*.png);;Text(*.gpg)");
      ui->pushButton_2->setText("");
ui->pushButton_2->setIcon(QPixmap(path));
}

void MainWindow::on_pushButton_clicked()
{
    qDebug()<<ui->comboBox->currentText()<<ui->comboBox_2->currentText()<<ui->lineEdit->text()<<path;
    if(ui->comboBox->currentText()=="<NONE>"||ui->comboBox_2->currentText()=="<NONE>"||ui->lineEdit->text()=="<NONE>")
        QMessageBox::warning(this,"xinxibuzu","please buquanxinxi");
else{
        emit create(ui->comboBox->currentText(),ui->comboBox_2->currentText(),ui->lineEdit->text(),path);
    path="";
    ui->pushButton_2->setIcon(QIcon());
    ui->pushButton_2->setText("+");
    ui->comboBox->setCurrentIndex(0);
    ui->comboBox_2->setCurrentIndex(0);
    ui->lineEdit->setText("<NONE>");
    ui->stackedWidget->setCurrentIndex(1);
}}
void MainWindow::add(QString a,QString b,QString c,QString d)
{
    if(a=="衣服")
    {
   delete p;p=new QVBoxLayout;
QPushButton*temp=new QPushButton;
temp->setIcon(QPixmap(path));
button.push_back(temp);
for(std::vector<QPushButton*>::iterator it=button.begin();it!=button.end();it++)
p->addWidget(*it);
p->addStretch();
p->setSpacing(0);
ui->stackedWidget_2->widget(0)->setLayout(p);}
    if(a=="食品")
    {
   delete p1;p1=new QVBoxLayout;
QPushButton*temp=new QPushButton;
temp->setIcon(QPixmap(path));
button1.push_back(temp);
for(std::vector<QPushButton*>::iterator it=button1.begin();it!=button1.end();it++)
p1->addWidget(*it);
p1->addStretch();
p1->setSpacing(0);
ui->stackedWidget_2->widget(1)->setLayout(p1);}
    if(a=="化妆品")
    {
   delete p2;p2=new QVBoxLayout;
QPushButton*temp=new QPushButton;
temp->setIcon(QPixmap(path));
button2.push_back(temp);
for(std::vector<QPushButton*>::iterator it=button2.begin();it!=button2.end();it++)
p2->addWidget(*it);
p2->addStretch();
p2->setSpacing(0);
ui->stackedWidget_2->widget(2)->setLayout(p2);}
    if(a=="家具")
    {
   delete p3;p3=new QVBoxLayout;
QPushButton*temp=new QPushButton;
temp->setIcon(QPixmap(path));
button3.push_back(temp);
for(std::vector<QPushButton*>::iterator it=button3.begin();it!=button3.end();it++)
p3->addWidget(*it);
p3->addStretch();
p3->setSpacing(0);
ui->stackedWidget_2->widget(3)->setLayout(p3);}
}

