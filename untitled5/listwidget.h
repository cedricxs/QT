#ifndef LISTWIDGET_H
#define LISTWIDGET_H
#include<QListWidget>
#include<QString>
class listwidget : public QListWidget
{
     Q_OBJECT
public:
    explicit listwidget(QWidget*parent=nullptr);
    QListWidgetItem* close;
    QListWidgetItem* add;
    QListWidgetItem* add1;
    QListWidgetItem* add2;
protected:
    void mousePressEvent(QMouseEvent *event);
signals:
    void item(QString content);
};

#endif // LISTWIDGET_H
