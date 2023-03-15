#include "textfinder.h"
#include "ui_textfinder.h"
#include <QFile>
#include <QTextStream>
TextFinder::TextFinder(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TextFinder)
{
    ui->setupUi(this);
    LoadTextFile();
}

TextFinder::~TextFinder()
{
    delete ui;
}


void TextFinder::on_pushButton_clicked()
{
    QString str = ui->lineEdit->text();
    ui->textEdit->find(str,QTextDocument::FindWholeWords);
}
void TextFinder::LoadTextFile()
{
    QFile inputFile(":/input.txt");
    inputFile.open(QIODevice::ReadOnly);

    QTextStream in(&inputFile);
    QString line=in.readAll();
    inputFile.close();

    ui->textEdit->setPlainText(line);
    QTextCursor cursor=ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::Start,QTextCursor::MoveAnchor,1);


}
