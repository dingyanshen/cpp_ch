#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
//#include<Qtimer>
#include "QTimer"
#include<QLabel>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QTimer * q;
    QLabel *l;
public slots:
    void add1();
};
#endif // WIDGET_H
