#include "mainwindow.h"
#include<QMenuBar>
#include<QMenu>
#include<QAction>
#include<QDebug>
#include<QToolBar>
#include<QPushButton>
#include<QStatusBar>
#include<QLabel>
#include<QTextEdit>
#include<QDockWidget>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //menu
    QMenuBar *mbar=this->menuBar();
    QMenu*pfile=mbar->addMenu("File");
    QAction*pnew =pfile->addAction("new file");
    connect(pnew,&QAction::triggered,[=](){qDebug()<<"is triggered";});
    pfile->addSeparator();
    QAction*popen=pfile->addAction("open");
    connect(popen,&QAction::triggered,this,&MainWindow::close);
    //tools
    QToolBar *toolbar=this->addToolBar("tools");
    toolbar->addAction(pnew);
    QPushButton *b=new QPushButton(this);
    b->setText("^_^");
    connect(b,&QPushButton::clicked,[=](){b->setText("^v^");});
    toolbar->addWidget(b);
    //zhuangtai
    QStatusBar*statu=this->statusBar();
    QLabel*label=new QLabel(this);
    label->setText("normal text file");
    statu->addWidget(label);
    statu->addWidget(new QLabel("2",this));
    statu->addPermanentWidget(new QLabel("3",this));
    //hexinkongjian
QTextEdit*text=new QTextEdit(this);
this->setCentralWidget(text);
//fudongchuangkou
QDockWidget*dock=new QDockWidget(this);
this->addDockWidget(Qt::RightDockWidgetArea,dock);
QTextEdit*text1=new QTextEdit(this);
dock->setWidget(text1);
}

MainWindow::~MainWindow()
{

}
