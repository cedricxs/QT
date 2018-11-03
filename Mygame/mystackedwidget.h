#ifndef MYSTACKEDWIDGET_H
#define MYSTACKEDWIDGET_H

#include <QWidget>
#include<QStackedWidget>

class MystackedWidget:public QStackedWidget
{
public:
    MystackedWidget(QWidget*parent=0);
    bool init;
protected:
    void paintEvent(QPaintEvent *);
 signals:

public slots:
    void deal();
};

#endif // MYSTACKEDWIDGET_H
