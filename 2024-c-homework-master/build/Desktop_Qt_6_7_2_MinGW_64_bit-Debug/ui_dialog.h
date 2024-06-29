/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *close;
    QListWidget *listWidget;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(597, 380);
        close = new QPushButton(Dialog);
        close->setObjectName("close");
        close->setGeometry(QRect(560, 0, 31, 31));
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
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/QTMusicPlayer/guanbi.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        close->setIcon(icon);
        listWidget = new QListWidget(Dialog);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(0, 30, 601, 351));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
