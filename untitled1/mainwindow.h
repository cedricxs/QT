#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"mlabel.h"
#include<QMouseEvent>
#include <QMainWindow>
#include<QLabel>
#include<QKeyEvent>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
 bool have;
protected:
 void mousePressEvent(QMouseEvent *ev);
 void closeEvent(QCloseEvent *event);
 void keyPressEvent(QKeyEvent *event);
  signals:
    void sss(int m);
    void mysignal(int,int);
private slots:
    void deal(){this->have=true;}


    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();


private:
    Ui::MainWindow *ui;
    Mylabel t[100];
    int num;
};

#endif // MAINWINDOW_H
