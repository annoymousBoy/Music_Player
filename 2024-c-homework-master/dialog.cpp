#include "dialog.h"
#include "qpainter.h"
#include "ui_dialog.h"
#include <QPainter>
#include <QDebug>
#include <QFileDialog>
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);


    //禁止改变窗口大小
    this->setFixedSize(this->geometry().size());

    //去掉窗口标题
    this->setWindowFlag(Qt::FramelessWindowHint);

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::mousePressEvent(QMouseEvent *e)
{
    last=e->globalPosition();
}
void Dialog::mouseMoveEvent(QMouseEvent *e)
{
    int dx = e->globalPosition().x() - last.x();
    int dy = e->globalPosition().y() - last.y();
    last = e->globalPosition();
    move(x()+dx,y()+dy);
}
void Dialog::mouseReleaseEvent(QMouseEvent *e)
{
    int dx = e->globalPosition().x() - last.x();
    int dy = e->globalPosition().y() - last.y();
    move(x()+dx,y()+dy);
}


void Dialog::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    //更改背景
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/QTMusicPlayer/bk6.jpg"));
}


void Dialog::on_close_clicked()
{
    //关闭窗口
    close();
}

