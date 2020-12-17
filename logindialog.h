#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include<QSqlQuery>
#include<QMessageBox>
#include<QCryptographicHash>


namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();
    /**
     * @brief 将密码转换为MD5加密
     * @param str
     * @return
     */
    QString strToMd5(QString str);


private slots:
    void on_loginPushButton_clicked();

    void on_exitPushButton_clicked();

private:
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H
