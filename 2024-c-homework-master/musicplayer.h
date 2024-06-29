#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H

#include <QWidget>
#include <QUrl>
#include <QMouseEvent>
#include <dialog.h>
#include <QMediaPlayer>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QInputDialog>
#include <QFile>
#include <QStandardPaths>
#include <QNetworkAccessManager>
QT_BEGIN_NAMESPACE
namespace Ui {
class MusicPlayer;
}
QT_END_NAMESPACE
class QAudioOutput;
class QMediaPlayer;

class MusicPlayer : public QWidget
{
    Q_OBJECT

public:
    MusicPlayer(QWidget *parent = nullptr);
     ~MusicPlayer();

    //处理背景图片
    void paintEvent(QPaintEvent *e);

protected:
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);

private slots:
    void on_close_clicked();
    void on_wenjian_clicked();
    void on_wenjianadd_clicked();
    void on_zanting_clicked();
    void on_shangyishou_clicked();
    void on_xiayishou_clicked();
    void on_listWidget_doubleClicked(const QModelIndex &index);
    void on_verticalSlider_valueChanged(int value);
    void on_zuidahua_clicked();
    void on_zuixiaohua_clicked();
    void on_yinliang_clicked();
    void on_pifu_clicked();
    void onMediaStatusChanged(QMediaPlayer::MediaStatus);
    void on_shunxubofang_clicked();
    void onDownloadFinished(QNetworkReply *reply);

private:
    Ui::MusicPlayer *ui;
    QList<QUrl> playList;//播放列表
    int curPlayIndex = 0;
    QAudioOutput* audioOutput;
    QMediaPlayer* mediaPlayer;
    QMediaPlayer* player;
    QPointF last;
    bool ispause;
    bool sound;
    bool youshengyin = true;
    int circleplay=1;
    QNetworkAccessManager *networkManager;

};
#endif // MUSICPLAYER_H

