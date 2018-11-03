#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QPainter>
#include<QPoint>
#include<QTimerEvent>
#include<QKeyEvent>
#include"zidan.h"
#include"tar.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
void moving(int j);
private:
    Ui::MainWindow *ui;
    std::vector<tar*> _tar;
    std::vector<zidan*> _zidan;

    QSize size;
    int key_1;
    int key_2;
    int id1;
    int id2;
    QPoint feiji;
 protected:
    void keyPressEvent(QKeyEvent *event);
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
    signals:
    void lancer();

 // void deal(int i);
};

#endif // MAINWINDOW_H
