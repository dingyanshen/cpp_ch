#include "dialog.h"
#include "ui_dialog.h"
#include <QPainter>
#include <QPixmap>
#include <QMouseEvent>
#include <QPushButton>
#include <QDebug>
#include <QPoint>
#include <QFile>
#include <QTextStream>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    resize(800,600);    //设置窗口大小
    _pix = QPixmap(800,600);
    _pix.fill(Qt::white);


    _isDrawing = false; //是否正在绘制图形，用于处理绘制矩形时重影
    _isClear = false;



    save_button = new QPushButton(this);
    save_button->setText(QString::fromLocal8Bit("save"));
    save_button->move(500,450);
    read_button = new QPushButton(this);
    read_button->setText(QString::fromLocal8Bit("read"));
    read_button->move(400,450);
    clear_button = new QPushButton(this);
    clear_button->setText(QString::fromLocal8Bit("clear"));
    clear_button->move(300,450);
    connect(save_button,SIGNAL(clicked()),this,SLOT(save()));
    connect(read_button,SIGNAL(clicked()),this,SLOT(read()));
    connect(clear_button,SIGNAL(clicked()),this,SLOT(clear()));
}

Dialog::~Dialog()
{
    delete ui;
}

/**
 * @brief Dialog::drawRect
 * 鼠标拖动，绘制矩形。使用双缓冲绘图
 */
void Dialog::drawRect()
{
    if(_isClear){
        _isClear=false;
        QPainter pp(&_pix);
        QPainter painter(this);
        //pp.drawRect(x,y,w,h);
        painter.drawPixmap(0,0,_pix);
        _lastPoint=QPoint(0,0);
        _endPoint=QPoint(0,0);
        return;
    }
    int x,y,w,h;
    x = _lastPoint.x();
    y = _lastPoint.y();
    w = _endPoint.x()-x;
    h = _endPoint.y()-y;

    QPainter painter(this);

    if (_isDrawing)
    {
        tempPix = _pix;
        QPainter pp(&tempPix);
        pp.drawRect(x,y,w,h);
        painter.drawPixmap(0,0,tempPix);
    }
    else {
        QPainter pp(&_pix);
        pp.drawRect(x,y,w,h);
        painter.drawPixmap(0,0,_pix);

    }
}

void Dialog::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    drawRect();
}

void Dialog::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)  //鼠标左键按下
    {
        _lastPoint = event->pos();
        _isDrawing = true;
    }
}

void Dialog::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()==Qt::LeftButton)  //鼠标左键按下的同时移动
    {
        _endPoint = event->pos();
        update();
    }
}

void Dialog::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        _endPoint = event->pos();
        _isDrawing = false;


        int x,y,w,h;
        x = _lastPoint.x();
        y = _lastPoint.y();
        w = _endPoint.x()-x;
        h = _endPoint.y()-y;

        data.push_back( pointData(x,y,w,h));

        update();
    }
}


void Dialog::save()
{
    QFile outFile(QString("out.txt"));
    outFile.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&outFile);

    for(auto i :data){
        out<<i.x<<" "<<i.y<<" "<<i.w<<" "<<i.h<<" ";
    }

    outFile.close();


    update();
}


void Dialog::read()
{
    QFile inFile(QString("out.txt"));
    inFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream in(&inFile);

    int x,y,w,h;
    data.clear();
    while(!in.atEnd()){
        in >>x>>y>>w>>h;
        data.push_back(pointData(x,y,w,h));
    }

    clear();
    QPainter pp(&_pix);


    for(auto i:data){
        pp.drawRect(i.x,i.y,i.w,i.h);
    }
    QPainter painter(this);
    painter.drawPixmap(0,0,_pix);
    update();
}

void Dialog::clear()
{

    _pix = QPixmap(800,600);
    _pix.fill(Qt::white);
    tempPix = _pix;

    QPainter painter(this);
    painter.drawPixmap(0,0,_pix);
    painter.drawPixmap(0,0,tempPix);
    _isClear=true;
    update();



}
