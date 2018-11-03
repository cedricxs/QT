#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QPainter>
#include<QPaintEvent>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
protected:
    void paintEvent(QPaintEvent *event);
private slots:


    void on_pushButton_clicked();

    void on_pushButton_3_clicked();
    void setname(QString name);
signals:
    void isname(QString name);
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
