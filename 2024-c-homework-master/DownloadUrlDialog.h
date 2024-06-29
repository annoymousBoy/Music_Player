#ifndef DOWNLOADURLDIALOG_H
#define DOWNLOADURLDIALOG_H

#include <QDialog>

namespace Ui {
class DownloadUrlDialog;
}

class DownloadUrlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DownloadUrlDialog(QWidget *parent = nullptr);
    ~DownloadUrlDialog();

    QString getUrl() const;
    void paintEvent(QPaintEvent *e);

private:
    Ui::DownloadUrlDialog *ui;
};

#endif // DOWNLOADURLDIALOG_H
