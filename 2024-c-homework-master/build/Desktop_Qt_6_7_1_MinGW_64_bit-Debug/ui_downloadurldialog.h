/********************************************************************************
** Form generated from reading UI file 'downloadurldialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADURLDIALOG_H
#define UI_DOWNLOADURLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DownloadUrlDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *urlLineEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *DownloadUrlDialog)
    {
        if (DownloadUrlDialog->objectName().isEmpty())
            DownloadUrlDialog->setObjectName("DownloadUrlDialog");
        DownloadUrlDialog->resize(400, 216);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        DownloadUrlDialog->setPalette(palette);
        verticalLayout = new QVBoxLayout(DownloadUrlDialog);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(DownloadUrlDialog);
        label->setObjectName("label");
        QPalette palette1;
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        label->setPalette(palette1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font.setPointSize(12);
        font.setBold(false);
        label->setFont(font);

        verticalLayout->addWidget(label, 0, Qt::AlignTop);

        urlLineEdit = new QLineEdit(DownloadUrlDialog);
        urlLineEdit->setObjectName("urlLineEdit");
        urlLineEdit->setStyleSheet("QWidget { background-color: rgba(255,255,255,80); }");

        verticalLayout->addWidget(urlLineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(DownloadUrlDialog);
        okButton->setObjectName("okButton");
        okButton->setStyleSheet("QWidget { background-color: rgba(204,153,51,50); }");
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        okButton->setPalette(palette2);
        QFont font1;
        font1.setBold(false);
        okButton->setFont(font1);

        horizontalLayout->addWidget(okButton);

        cancelButton = new QPushButton(DownloadUrlDialog);
        cancelButton->setObjectName("cancelButton");
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        cancelButton->setPalette(palette3);
        cancelButton->setFont(font1);
        cancelButton->setStyleSheet("QWidget { background-color: rgba(204,153,51,50); }");

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DownloadUrlDialog);

        QMetaObject::connectSlotsByName(DownloadUrlDialog);
    } // setupUi

    void retranslateUi(QDialog *DownloadUrlDialog)
    {
        DownloadUrlDialog->setWindowTitle(QCoreApplication::translate("DownloadUrlDialog", "\346\267\273\345\212\240\351\237\263\344\271\220", nullptr));
        label->setText(QCoreApplication::translate("DownloadUrlDialog", "\350\257\267\350\276\223\345\205\245\346\255\214\346\233\262\346\226\207\344\273\266\347\232\204URL:", nullptr));
        okButton->setText(QCoreApplication::translate("DownloadUrlDialog", "\347\241\256\345\256\232", nullptr));
        cancelButton->setText(QCoreApplication::translate("DownloadUrlDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DownloadUrlDialog: public Ui_DownloadUrlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADURLDIALOG_H
