#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPixmap>
#include<QKeyEvent>
#include<QMouseEvent>
#include<QPoint>
#include<QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->setWindowIcon(QIcon(QPixmap(":/new/prefix1/image/a85bd04c761196a2f9135d7310d43946.jpg")));
}

MainWindow::~MainWindow()
{
    delete ui;
}


