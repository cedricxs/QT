#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"listwidget.h"
#include <QMainWindow>
#include<QListWidget>
#include<QVBoxLayout>
#include<QPushButton>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString path;
    QVBoxLayout*p;
    QVBoxLayout*p1;
    QVBoxLayout*p2;
    QVBoxLayout*p3;
    std::vector<QPushButton*> button;
     std::vector<QPushButton*> button1;
      std::vector<QPushButton*> button2;
       std::vector<QPushButton*> button3;
protected:
    void paintEvent(QPaintEvent *event);
public slots:
 void jiazai(QString content);
void add(QString a,QString b,QString c,QString d);
signals:
 void create(QString a,QString b,QString c,QString d);
private slots:
 void on_pushButton_2_clicked();

 void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
