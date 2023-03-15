#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}
class pointData{
public:
    int type;
    int x;
    int y;
    int w;
    int h;
    pointData(int x1,int y1,int w1,int h1){x=x1;y=y1;w=w1;h=h1;}
};
class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();


    void drawRect();


protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private slots:
    void save();
    void read();
    void clear();

private:
    Ui::Dialog *ui;
    QPixmap _pix;
    QPoint _lastPoint;
    QPoint _endPoint;

    QPushButton *save_button;
    QPushButton *read_button;
    QPushButton *clear_button;


    bool _isDrawing;
    bool _isClear;
    QPixmap tempPix;
    QVector<pointData> data;
};



#endif // DIALOG_H
