#include "mainwindow.h"

#include <QApplication>
#include<QSqlDatabase>
#include<QSqlError>
#include<QSqlQuery>
#include<QSqlDriver>
#include<QSqlRecord>
#include<QTextCodec>
#include<QDebug>
#include<QTime>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //以QSQLITE为数据库类型，在本进程地址空间内创建一个SQLite数据库，
    QSqlDatabase db = QSqlDatabase::addDatabase ("QMYSQL");
    db.setHostName ("localhost");//设置数据库主机名
    db.setDatabaseName ("test");//设置数据库主机名
    db.setUserName ("root");//设置数据库用户名
    db.setPassword ("123456");//设置数据库密码
    if(!db.open ())
    {
        qDebug() << "数据库打开失败！";
    }else{
        qDebug() << "数据库打开成功！";
    }
    //db.open ();//打开连接5
    //创建数据库表
    QSqlQuery query;
    bool success;
    //查询
   success =  query.exec ("select * from category");
   if(success)
       qDebug() << "查询成功！";
   else
       qDebug() << "查询失败";
   // record（）返回的是当前query的字段信息，也就是表头，
   //如果query指向一个有效行，将返回那一行的数据
   QSqlRecord rec = query.record ();
   //打印表头
   qDebug() << "打印表头:";
   int index=0;
   QStringList fieldList;
   while(!rec.fieldName (index).isEmpty ())
   {
       fieldList << rec.fieldName (index++);
   }
   qDebug() << fieldList;
    MainWindow w;
    w.show();
    return a.exec();
}
