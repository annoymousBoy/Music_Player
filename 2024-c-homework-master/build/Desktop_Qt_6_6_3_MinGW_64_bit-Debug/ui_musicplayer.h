/********************************************************************************
** Form generated from reading UI file 'musicplayer.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICPLAYER_H
#define UI_MUSICPLAYER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusicPlayer
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSlider *playCourseSlider;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *shunxubofang;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *shangyishou;
    QPushButton *zanting;
    QPushButton *xiayishou;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *yinliang;
    QSlider *verticalSlider;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *bofangliebiao;
    QPushButton *wenjianadd;
    QPushButton *wenjian;
    QListWidget *listWidget;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pifu;
    QSpacerItem *verticalSpacer;
    QPushButton *zuixiaohua;
    QPushButton *zuidahua;
    QPushButton *close;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *curlabel;
    QSpacerItem *horizontalSpacer_6;
    QLabel *totallabel;

    void setupUi(QWidget *MusicPlayer)
    {
        if (MusicPlayer->objectName().isEmpty())
            MusicPlayer->setObjectName("MusicPlayer");
        MusicPlayer->resize(826, 531);
        MusicPlayer->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(MusicPlayer);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(21, 480, 771, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        playCourseSlider = new QSlider(layoutWidget);
        playCourseSlider->setObjectName("playCourseSlider");
        playCourseSlider->setStyleSheet(QString::fromUtf8("border-color: rgb(204, 204, 204);\n"
"color: rgb(16, 16, 16);"));
        playCourseSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(playCourseSlider);

        horizontalSpacer_5 = new QSpacerItem(48, 18, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        shunxubofang = new QPushButton(layoutWidget);
        shunxubofang->setObjectName("shunxubofang");
        shunxubofang->setMinimumSize(QSize(32, 32));
        shunxubofang->setMaximumSize(QSize(32, 32));
        shunxubofang->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image:none;\n"
"background-color:rgba(255,255,255,0);\n"
"border-radius:5px\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgba(255,255,255,0.2);\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/QTMusicPlayer/shunxubofang.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/QTMusicPlayer/danquxunhuan.png"), QSize(), QIcon::Normal, QIcon::On);
        shunxubofang->setIcon(icon);
        shunxubofang->setIconSize(QSize(18, 18));
        shunxubofang->setCheckable(true);

        horizontalLayout->addWidget(shunxubofang);

        horizontalSpacer_3 = new QSpacerItem(18, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        shangyishou = new QPushButton(layoutWidget);
        shangyishou->setObjectName("shangyishou");
        shangyishou->setMinimumSize(QSize(32, 32));
        shangyishou->setMaximumSize(QSize(32, 32));
        shangyishou->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image:none;\n"
"background-color:rgba(255,255,255,0);\n"
"border-radius:5px\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgba(255,255,255,0.2);\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/QTMusicPlayer/shangyishou.png"), QSize(), QIcon::Normal, QIcon::Off);
        shangyishou->setIcon(icon1);
        shangyishou->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(shangyishou);

        zanting = new QPushButton(layoutWidget);
        zanting->setObjectName("zanting");
        zanting->setMinimumSize(QSize(32, 32));
        zanting->setMaximumSize(QSize(32, 32));
        zanting->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image:none;\n"
"background-color:rgba(255,255,255,0);\n"
"border-radius:5px\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgba(255,255,255,0.2);\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/QTMusicPlayer/bofang.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/QTMusicPlayer/zanting.png"), QSize(), QIcon::Normal, QIcon::On);
        zanting->setIcon(icon2);
        zanting->setIconSize(QSize(36, 36));
        zanting->setCheckable(true);

        horizontalLayout->addWidget(zanting);

        xiayishou = new QPushButton(layoutWidget);
        xiayishou->setObjectName("xiayishou");
        xiayishou->setMinimumSize(QSize(32, 32));
        xiayishou->setMaximumSize(QSize(32, 32));
        xiayishou->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image:none;\n"
"background-color:rgba(255,255,255,0);\n"
"border-radius:5px\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgba(255,255,255,0.2);\n"
"}\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/QTMusicPlayer/xiayishou.png"), QSize(), QIcon::Normal, QIcon::Off);
        xiayishou->setIcon(icon3);
        xiayishou->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(xiayishou);

        horizontalSpacer_4 = new QSpacerItem(13, 36, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        yinliang = new QPushButton(layoutWidget);
        yinliang->setObjectName("yinliang");
        yinliang->setMinimumSize(QSize(32, 32));
        yinliang->setMaximumSize(QSize(32, 32));
        yinliang->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-image:none;\n"
"background-color:rgba(255,255,255,0);\n"
"border-radius:5px\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgba(255,255,255,0.2);\n"
"}\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/QTMusicPlayer/yinliang.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QString::fromUtf8(":/QTMusicPlayer/jingyin.png"), QSize(), QIcon::Normal, QIcon::On);
        yinliang->setIcon(icon4);
        yinliang->setIconSize(QSize(18, 18));
        yinliang->setCheckable(true);

        horizontalLayout->addWidget(yinliang);

        verticalSlider = new QSlider(layoutWidget);
        verticalSlider->setObjectName("verticalSlider");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(verticalSlider->sizePolicy().hasHeightForWidth());
        verticalSlider->setSizePolicy(sizePolicy);
        verticalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(verticalSlider);

        horizontalSpacer_2 = new QSpacerItem(48, 36, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        bofangliebiao = new QPushButton(layoutWidget);
        bofangliebiao->setObjectName("bofangliebiao");
        bofangliebiao->setMinimumSize(QSize(32, 32));
        bofangliebiao->setMaximumSize(QSize(32, 32));
        bofangliebiao->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image:none;\n"
"background-color:rgba(255,255,255,0);\n"
"border-radius:5px\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgba(255,255,255,0.2);\n"
"}\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/QTMusicPlayer/liebiao.png"), QSize(), QIcon::Normal, QIcon::Off);
        bofangliebiao->setIcon(icon5);
        bofangliebiao->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(bofangliebiao);

        wenjianadd = new QPushButton(layoutWidget);
        wenjianadd->setObjectName("wenjianadd");
        wenjianadd->setMinimumSize(QSize(32, 32));
        wenjianadd->setMaximumSize(QSize(32, 32));
        wenjianadd->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image:none;\n"
"background-color:rgba(255,255,255,0);\n"
"border-radius:5px\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgba(255,255,255,0.2);\n"
"}\n"
""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/QTMusicPlayer/wenjianjiaplus.png"), QSize(), QIcon::Normal, QIcon::Off);
        wenjianadd->setIcon(icon6);
        wenjianadd->setIconSize(QSize(18, 18));

        horizontalLayout->addWidget(wenjianadd);

        wenjian = new QPushButton(layoutWidget);
        wenjian->setObjectName("wenjian");
        wenjian->setMinimumSize(QSize(32, 32));
        wenjian->setMaximumSize(QSize(32, 32));
        wenjian->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image:none;\n"
"background-color:rgba(255,255,255,0);\n"
"border-radius:5px\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgba(255,255,255,0.2);\n"
"}\n"
""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/QTMusicPlayer/wenjianjia.png"), QSize(), QIcon::Normal, QIcon::Off);
        wenjian->setIcon(icon7);
        wenjian->setIconSize(QSize(18, 18));

        horizontalLayout->addWidget(wenjian);

        listWidget = new QListWidget(MusicPlayer);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(50, 40, 621, 361));
        listWidget->setTabletTracking(true);
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"background-color:rgba(255,255,255,10);\n"
"        }"));
        layoutWidget1 = new QWidget(MusicPlayer);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(660, 0, 166, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pifu = new QPushButton(layoutWidget1);
        pifu->setObjectName("pifu");
        pifu->setMinimumSize(QSize(32, 32));
        pifu->setMaximumSize(QSize(32, 32));
        pifu->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image:none;\n"
"background-color:rgba(255,255,255,0);\n"
"border-radius:5px\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgba(255,255,255,0.2);\n"
"}\n"
""));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/QTMusicPlayer/pifu.png"), QSize(), QIcon::Normal, QIcon::Off);
        pifu->setIcon(icon8);
        pifu->setIconSize(QSize(18, 18));

        horizontalLayout_2->addWidget(pifu);

        verticalSpacer = new QSpacerItem(10, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_2->addItem(verticalSpacer);

        zuixiaohua = new QPushButton(layoutWidget1);
        zuixiaohua->setObjectName("zuixiaohua");
        zuixiaohua->setMinimumSize(QSize(32, 32));
        zuixiaohua->setMaximumSize(QSize(32, 32));
        zuixiaohua->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-image:none;\n"
"background-color:rgba(255,255,255,0);\n"
"border-radius:5px\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgba(255,255,255,0.2);\n"
"}\n"
"\n"
"\n"
""));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/QTMusicPlayer/zuixiaohua.png"), QSize(), QIcon::Normal, QIcon::Off);
        zuixiaohua->setIcon(icon9);
        zuixiaohua->setIconSize(QSize(15, 15));

        horizontalLayout_2->addWidget(zuixiaohua);

        zuidahua = new QPushButton(layoutWidget1);
        zuidahua->setObjectName("zuidahua");
        zuidahua->setMinimumSize(QSize(32, 32));
        zuidahua->setMaximumSize(QSize(32, 32));
        zuidahua->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-image:none;\n"
"background-color:rgba(255,255,255,0);\n"
"border-radius:5px\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgba(255,255,255,0.2);\n"
"}\n"
"\n"
"\n"
""));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/QTMusicPlayer/chuangkouzuidahua.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon10.addFile(QString::fromUtf8(":/QTMusicPlayer/zuidahua.png"), QSize(), QIcon::Normal, QIcon::On);
        zuidahua->setIcon(icon10);
        zuidahua->setIconSize(QSize(15, 15));
        zuidahua->setCheckable(true);

        horizontalLayout_2->addWidget(zuidahua);

        close = new QPushButton(layoutWidget1);
        close->setObjectName("close");
        close->setMinimumSize(QSize(32, 32));
        close->setMaximumSize(QSize(32, 32));
        close->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-image:none;\n"
"background-color:rgba(255,255,255,0);\n"
"border-radius:5px\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"background-color:rgba(255,255,255,0.2);\n"
"}\n"
"\n"
"\n"
""));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/QTMusicPlayer/guanbi.png"), QSize(), QIcon::Normal, QIcon::Off);
        close->setIcon(icon11);
        close->setIconSize(QSize(15, 15));

        horizontalLayout_2->addWidget(close);

        layoutWidget2 = new QWidget(MusicPlayer);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(20, 470, 274, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        curlabel = new QLabel(layoutWidget2);
        curlabel->setObjectName("curlabel");

        horizontalLayout_4->addWidget(curlabel);

        horizontalSpacer_6 = new QSpacerItem(200, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        totallabel = new QLabel(layoutWidget2);
        totallabel->setObjectName("totallabel");

        horizontalLayout_4->addWidget(totallabel);

        layoutWidget2->raise();
        layoutWidget2->raise();
        listWidget->raise();
        layoutWidget2->raise();

        retranslateUi(MusicPlayer);

        QMetaObject::connectSlotsByName(MusicPlayer);
    } // setupUi

    void retranslateUi(QWidget *MusicPlayer)
    {
        MusicPlayer->setWindowTitle(QCoreApplication::translate("MusicPlayer", "MusicPlayer", nullptr));
        shunxubofang->setText(QString());
        shangyishou->setText(QString());
        zanting->setText(QString());
        xiayishou->setText(QString());
        yinliang->setText(QString());
        bofangliebiao->setText(QString());
        wenjianadd->setText(QString());
        wenjian->setText(QString());
        pifu->setText(QString());
        zuixiaohua->setText(QString());
        zuidahua->setText(QString());
        close->setText(QString());
        curlabel->setText(QCoreApplication::translate("MusicPlayer", "00:00", nullptr));
        totallabel->setText(QCoreApplication::translate("MusicPlayer", "00:00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MusicPlayer: public Ui_MusicPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICPLAYER_H
