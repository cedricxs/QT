#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPixmap>
#include<QPushButton>
#include<QIcon>
#include<QDebug>
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("开心农场");
    QPixmap m(":/new/prefix1/image/18d7fa7385da43916c0b8024947be3d8.jpg");
    this->setWindowIcon(QIcon(m));
ui->widget->setStyleSheet("QWidget{background-color: white;border: 3px solid #FF00FF; border-style: outset; border-radius: 5px;border-width: 2px;}");
connect(this,&MainWindow::isname,this,&MainWindow::setname);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{


}


void MainWindow::on_pushButton_clicked()
{
ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_3_clicked()
{
    QString name=ui->lineEdit->text();
    if(name!="")
 {emit isname(name);
ui->stackedWidget->setCurrentIndex(2);
    }
if(name=="")
{
    QMessageBox::warning(this,"Waring","Your Name can't be empty! \nPlease input again!", QMessageBox::Ok);
}}
void MainWindow::setname(QString name)
{
    ui->label_3->setText(name);
    ui->label_5->setText("500");
}
