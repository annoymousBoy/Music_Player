#include "DownloadUrlDialog.h"
#include "ui_downloadurldialog.h"
#include <QPainter>

DownloadUrlDialog::DownloadUrlDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DownloadUrlDialog)
{
    ui->setupUi(this);

    // 设置窗口标题
    setWindowTitle("添加音乐");

    // 设置对话框的样式
    setStyleSheet("QDialog { background-color: #f0f0f0; }"
                  "QLabel { font-size: 16px;font-family:Consolas}"
                  "QLineEdit { font-size: 14px; padding: 5px; }"
                  "QPushButton { font-size: 14px; padding: 5px; border-radius:2px}");

    // 确保对话框是模态的
    setModal(true);
    setWindowIcon(QIcon(":/QTMusicPlayer/wenjianjiaplus.png"));
    connect(ui->okButton, &QPushButton::clicked, this, &QDialog::accept);
    connect(ui->cancelButton, &QPushButton::clicked, this, &QDialog::reject);
}

DownloadUrlDialog::~DownloadUrlDialog()
{
    delete ui;
}

QString DownloadUrlDialog::getUrl() const
{
    return ui->urlLineEdit->text();
}
void DownloadUrlDialog::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    // 更改背景
    painter.drawPixmap(0, 0, width(), height(), QPixmap(":/QTMusicPlayer/earphone.png"));
    QDialog::paintEvent(e); // 确保其他绘制事件也被处理
}
