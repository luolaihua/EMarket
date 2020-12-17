/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *adminLineEdit;
    QLabel *label_3;
    QLineEdit *pwdLineEdit;
    QSplitter *splitter;
    QPushButton *loginPushButton;
    QPushButton *exitPushButton;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(483, 353);
        label = new QLabel(LoginDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 40, 291, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        widget = new QWidget(LoginDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 120, 271, 111));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        adminLineEdit = new QLineEdit(widget);
        adminLineEdit->setObjectName(QString::fromUtf8("adminLineEdit"));
        QFont font2;
        font2.setPointSize(14);
        adminLineEdit->setFont(font2);

        gridLayout->addWidget(adminLineEdit, 0, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setTextFormat(Qt::AutoText);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        pwdLineEdit = new QLineEdit(widget);
        pwdLineEdit->setObjectName(QString::fromUtf8("pwdLineEdit"));
        pwdLineEdit->setFont(font2);

        gridLayout->addWidget(pwdLineEdit, 1, 1, 1, 1);

        splitter = new QSplitter(LoginDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(90, 250, 231, 41));
        splitter->setOrientation(Qt::Horizontal);
        loginPushButton = new QPushButton(splitter);
        loginPushButton->setObjectName(QString::fromUtf8("loginPushButton"));
        splitter->addWidget(loginPushButton);
        exitPushButton = new QPushButton(splitter);
        exitPushButton->setObjectName(QString::fromUtf8("exitPushButton"));
        splitter->addWidget(exitPushButton);

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("LoginDialog", "\346\254\242\350\277\216\350\277\233\345\205\245\347\224\265\345\255\220\345\225\206\345\237\216", nullptr));
        label_2->setText(QCoreApplication::translate("LoginDialog", "\347\256\241\347\220\206\345\221\230\357\274\232", nullptr));
        adminLineEdit->setText(QCoreApplication::translate("LoginDialog", "luolaihua", nullptr));
        label_3->setText(QCoreApplication::translate("LoginDialog", "\345\217\243\343\200\200\344\273\244\357\274\232", nullptr));
        pwdLineEdit->setText(QCoreApplication::translate("LoginDialog", "123456", nullptr));
        loginPushButton->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        exitPushButton->setText(QCoreApplication::translate("LoginDialog", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
