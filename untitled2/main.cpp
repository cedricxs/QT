#include"feiji.h"
#include <QApplication>
#include<QGraphicsScene>
#include<QGraphicsView>
int main(int argc,char* argv[ ])
{
    QApplication app(argc,argv);
    QGraphicsScene *scene = new QGraphicsScene;
   feiji *ji;
    ji->setPos(100,380);
    scene->addItem(ji);
    QGraphicsView *view = new QGraphicsView;
    view->setScene(scene);
    view->resize(300, 500); //设置视图大小
    view->move(500,100);
    view->show();
    return app.exec();
}
