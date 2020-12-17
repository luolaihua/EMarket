#include "mainwindow.h"

#include <QApplication>
#include<QProcess>
#include"logindialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    if(!createMySqlConnection ())
    {
        qDebug() << "初次连接不成功";
        //初次尝试不成功，就用代码的方式启动MySQL服务进程
        QProcess process;
        process.start ("D:/mysql-8.0.22-winx64/bin/mysqld.exe");
        //第二次尝试连接
        if(!createMySqlConnection ()){
            qDebug() << "第二次尝试连接,不成功";
            return 1;
        }
    }

    LoginDialog logindlg;
    if(logindlg.exec () == QDialog::Accepted)
    {
        MainWindow w;
        w.show();
        return a.exec();
    }else{
        return 0;
    }
//    MainWindow w;
//    w.show();
    //return a.exec();
}
