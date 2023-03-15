#include "widget.h"
#include "ui_widget.h"
#include<QTimer>
#include<QLabel>
#include<iostream>
#include<QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    q=new QTimer(this);
    l= new QLabel("a");
    l->show();
    QVBoxLayout* b=new QVBoxLayout;
    b->addWidget(l);
    this->setLayout(b);
    q->start(1000);
    this->resize(300,200);

    connect(q,SIGNAL(timeout()),this,SLOT(add1()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::add1(){
    static int i=0;
    i++;
    std::cout<<i<<std::endl;
    l->setText(QString::number(i));
    l->show();

}
