#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMouseEvent>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

    //处理背景图片
    void paintEvent(QPaintEvent *e);

protected:
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);

private slots:
    void on_close_clicked();

private:
    Ui::Dialog *ui;
    QList<QUrl> playList;//播放列表
    QPointF last;
};

#endif // DIALOG_H
