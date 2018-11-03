#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QLabel>
#include<QMovie>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   m=new QMovie(":/new/prefix1/image/96603c676a46c773170a3cabefc18894.gif");
    ui->label->setMovie(m);
ui->label->setScaledContents(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionbegin_triggered()
{
    m->start();
}
