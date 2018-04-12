#ifndef SUBWIDGET_H
#define SUBWIDGET_H

#include <QWidget>
#include<QPushButton>
class subwidget : public QWidget
{
    Q_OBJECT
public:
    explicit subwidget(QWidget *parent = nullptr);
void sentsignal();
private:
    QPushButton b4;int i;
signals:             //signal is for envoyer les variable to slot!!!
void mysignal();
void mysignal(int ,QString);
public slots:
};

#endif // SUBWIDGET_H
