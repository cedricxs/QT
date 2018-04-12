#include "mainwindow.h"
#include<QMenuBar>
#include<QMenu>
#include<QAction>
#include<QDialog>
#include<QDebug>
#include<QMessageBox>
#include<QFileDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QMenuBar *mbar=this->menuBar();
    QMenu*menu=mbar->addMenu("dialog");
    QAction *p1=menu->addAction("motai");
    connect(p1,&QAction::triggered,[=](){ dlg.exec();qDebug()<<"motai";});
    QAction *p2=menu->addAction("feimotai");
    connect(p2,&QAction::triggered,[=](){ dlg.show();qDebug()<<"feimotai";
        /*QDialog*p=new QDialog;
         * p->setAttribute(Qt::WA DeleteOnClose);
         p->show();*/});
    QAction *p3=menu->addAction("about");
    connect(p3,&QAction::triggered,[=](){QMessageBox::about(this,"about","about qt");});
        QAction *p4=menu->addAction("question");
        connect(p4,&QAction::triggered,[=]()
        {
            int ret=QMessageBox::question(this,"question","Are you ok?",
                                          QMessageBox::Ok|QMessageBox::Cancel);
            switch(ret){
            case QMessageBox::Ok:
                qDebug()<<"I am ok";break;
            case QMessageBox::Cancel:
                qDebug()<<"I am bad";break;
               default:
                break;
            }
});
        QAction *p5=menu->addAction("file");
        connect(p5,&QAction::triggered,[=](){
           QString path=QFileDialog::getOpenFileName(this,"open","../","souce(*.cpp *.h);;Text(*.txt);;all(*.*)");
           qDebug()<<path;
        });
}
MainWindow::~MainWindow()
{

}
