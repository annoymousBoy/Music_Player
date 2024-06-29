#include "musicplayer.h"
#include "ui_musicplayer.h"
#include "DownloadUrlDialog.h"
#include <QPainter>
#include <QDebug>
#include <QFileDialog>
#include <QDir>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QUrl>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QPoint>
#include <QHBoxLayout>
#include <QToolTip>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QInputDialog>
#include <QFile>
#include <QStandardPaths>
#include <QNetworkAccessManager>
MusicPlayer::MusicPlayer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MusicPlayer)
{
    ui->setupUi(this);
    //禁止改变窗口大小
    this->setFixedSize(this->geometry().size());

    //去掉窗口标题
    this->setWindowFlag(Qt::FramelessWindowHint);

    //播放音乐
    audioOutput = new QAudioOutput(this);
    mediaPlayer = new QMediaPlayer(this);
    mediaPlayer->setAudioOutput(audioOutput);

    //获取当前媒体的时长，通过信号关联获取总音乐时长
    connect(mediaPlayer,&QMediaPlayer::durationChanged,this,[=](qint64 duration)
    {
        ui->totallabel->setText(QString("%1:%2").arg(duration/1000/60,2,10,QChar('0')).arg(duration/1000%60,2,10,QChar('0')));
        //不足10的话补0，更美观
        ui->playCourseSlider->setRange(0,duration);    //让进度滑块随时间动起来(1)
    });
    //获取当前播放时长
    connect(mediaPlayer,&QMediaPlayer::positionChanged,this,[=](qint64 pos)
    {
        ui->curlabel->setText(QString("%1:%2").arg(pos/1000/60,2,10,QChar('0')).arg(pos/1000%60,2,10,QChar('0')));
        ui->playCourseSlider->setValue(pos);          //让进度滑块随时间动起来(2)
    });
    //拖动滑块改变播放进度
    connect(ui->playCourseSlider,&QSlider::sliderMoved,mediaPlayer,&QMediaPlayer::setPosition);
    audioOutput->setVolume(0.5);

    sound=true;


    ui->wenjian->setToolTip("选择本地播放路径");
    ui->wenjianadd->setToolTip("下载文件到默认路径");

    networkManager = new QNetworkAccessManager(this);
    connect(networkManager, &QNetworkAccessManager::finished, this, &MusicPlayer::onDownloadFinished);

    connect(mediaPlayer, &QMediaPlayer::mediaStatusChanged, this, &MusicPlayer::onMediaStatusChanged);
}

MusicPlayer::~MusicPlayer()
{
    delete ui;
}

void MusicPlayer::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    //更改背景
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/QTMusicPlayer/bk0.jpg"));
}

//窗口随鼠标移动
void MusicPlayer::mousePressEvent(QMouseEvent *e)
{
    last=e->globalPosition();
}
void MusicPlayer::mouseMoveEvent(QMouseEvent *e)
{
    int dx = e->globalPosition().x() - last.x();
    int dy = e->globalPosition().y() - last.y();
    last = e->globalPosition();
    move(x()+dx,y()+dy);
}
void MusicPlayer::mouseReleaseEvent(QMouseEvent *e)
{
    int dx = e->globalPosition().x() - last.x();
    int dy = e->globalPosition().y() - last.y();
    move(x()+dx,y()+dy);
}

void MusicPlayer::on_close_clicked()
{
    //关闭窗口
    close();
}


void MusicPlayer::on_wenjian_clicked()
{
    QDir dirtemp(QDir::currentPath());
    dirtemp.cdUp();
    dirtemp.cdUp();
    QString initialPath = dirtemp.path();
    initialPath += "/QTMusicPlayer/音乐";

    // 打开文件对话框，让用户选择音乐所在的目录
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::Directory); // 选择目录
    dialog.setOption(QFileDialog::ReadOnly, false);  // 允许选择路径和文件
    dialog.setDirectory(initialPath);
    dialog.setWindowTitle("请选择音乐所在的目录");

    // 显示文件对话框
    if (dialog.exec()) {
        QStringList selectedFiles = dialog.selectedFiles();
        QString selectedPath = selectedFiles.first();
        qInfo() << selectedPath;

        // 根据路径，获取目录下的所有 mp3、wav、ogg 等音乐文件
        QDir dir(selectedPath);
        auto musicList = dir.entryList(QStringList() << "*.mp3" << "*.wav" << "*.ogg", QDir::Files);
        qInfo() << musicList;

        // 如果目录中有文件
        if (!musicList.isEmpty()) {
            // 展示音乐名字
            ui->listWidget->clear();
            ui->listWidget->addItems(musicList);

            // 默认选中目录中第一首
            ui->listWidget->setCurrentRow(0);

            // 保存音乐完整路径
            for(const auto &file : musicList)
                playList.append(QUrl::fromLocalFile(selectedPath + "/" + file));
        } else {
            qInfo() << "目录中没有音频文件";
        }
    }
}

void MusicPlayer::on_wenjianadd_clicked()
{
    // 创建并显示自定义对话框
    DownloadUrlDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted)
    {
        // 获取 URL
        QString url = dialog.getUrl();
        if (!url.isEmpty())
        {

            // 构造下载请求
            QUrl qUrl(url);
            if (!qUrl.isValid()) {
                qDebug() << "Invalid URL:" << url;
                return;
            }
            QNetworkRequest request(qUrl);  // 确保这里传递的是 QUrl 对象
            networkManager->get(request);  // 正确传递 QNetworkRequest 对象
        }
    }
}


void MusicPlayer::onDownloadFinished(QNetworkReply *reply)
{
    if (reply->error() == QNetworkReply::NoError)
    {
        // 获取下载内容
        QByteArray data = reply->readAll();

        // 获取文件名
        QUrl url = reply->url();
        QString fileName = url.fileName();
        if (fileName.isEmpty())
        {
            fileName = "downloaded_file.mp3";  // 默认文件名
        }

        // 获取默认下载目录
        QDir dirtemp(QDir::currentPath());
        dirtemp.cdUp();
        dirtemp.cdUp();
        QString defaultPath = dirtemp.path();
        defaultPath += "/QTMusicPlayer/音乐";
        QString filePath = defaultPath + "/" + fileName;

        // 保存文件
        QFile file(filePath);
        if (file.open(QIODevice::WriteOnly))
        {
            file.write(data);
            file.close();
            qInfo() << "文件已下载到:" << filePath;

        }
        else
        {
            qWarning() << "无法保存文件:" << filePath;
        }
    }
    else
    {
        qWarning() << "下载失败:" << reply->errorString();
    }

    reply->deleteLater();
}

void MusicPlayer::on_zanting_clicked()
{
    QIcon playIcon=QIcon(":/QTMusicPlayer/bofang.png");
    QIcon pauseIcon=QIcon(":/QTMusicPlayer/zanting.png");
    if (playList.empty())
    {
        return;
    }
    switch (mediaPlayer->playbackState())
    {
    case QMediaPlayer::StoppedState: // 停止状态
    {
        // 如果没有播放，播放当前选中的音乐
        // 获取选中的行号
        curPlayIndex = ui->listWidget->currentRow();

        // 播放对应下标音乐
        mediaPlayer->setSource(playList[curPlayIndex]);
        mediaPlayer->play();
        ui->zanting->setIcon(pauseIcon); // 设置为暂停图标
        break;
    }
    case QMediaPlayer::PlayingState: // 播放状态
        // 如果正在播放，暂停音乐
        mediaPlayer->pause();
        ui->zanting->setIcon(playIcon); // 设置为播放图标
        break;
    case QMediaPlayer::PausedState: // 暂停状态
        // 如果正在暂停，继续播放
        mediaPlayer->play();
        ui->zanting->setIcon(pauseIcon); // 设置为暂停图标
        break;
    }
}

//上一首
void MusicPlayer::on_shangyishou_clicked()
{
    curPlayIndex=(curPlayIndex-1) % playList.size();

    ui->listWidget->setCurrentRow(curPlayIndex);
    mediaPlayer->setSource(playList[curPlayIndex]);
    mediaPlayer->play();
}

//下一首
void MusicPlayer::on_xiayishou_clicked()
{
    curPlayIndex=(curPlayIndex+1)%playList.size();

    ui->listWidget->setCurrentRow(curPlayIndex);
    mediaPlayer->setSource(playList[curPlayIndex]);
    mediaPlayer->play();
}
//选歌
void MusicPlayer::on_listWidget_doubleClicked(const QModelIndex &index)
{
    curPlayIndex=index.row();
    mediaPlayer->setSource(playList[curPlayIndex]);
    mediaPlayer->play();
    QIcon playIcon = QIcon(":/QTMusicPlayer/zanting.png");
    ui->zanting->setIcon(playIcon);
}

//调节音量
void MusicPlayer::on_verticalSlider_valueChanged(int value)
{
    audioOutput->setVolume(float(value)/100);
}
//静音
void MusicPlayer::on_yinliang_clicked()
{   if(youshengyin)
    {
        audioOutput->setVolume(0);
    }
    else
    {
        audioOutput->setVolume(20);
    }
}


void MusicPlayer::on_zuixiaohua_clicked()
{
    // 最小化窗口
    showMinimized();
}

void MusicPlayer::on_shunxubofang_clicked()
{
    circleplay=-1-circleplay;
    mediaPlayer->setLoops(circleplay);
}

void MusicPlayer::onMediaStatusChanged(QMediaPlayer::MediaStatus status)
{
    if (status == QMediaPlayer::EndOfMedia) {
        // 切换到播放列表中的下一首
        curPlayIndex = (curPlayIndex + 1) % playList.size();
        ui->listWidget->setCurrentRow(curPlayIndex);
        mediaPlayer->setSource(playList[curPlayIndex]);
        mediaPlayer->play();
    }
}

