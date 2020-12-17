#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QSqlDatabase>
#include<QSqlError>
#include<QSqlQuery>
#include<QSqlDriver>
#include<QSqlRecord>
#include<QTextCodec>
#include<QDebug>
#include<QTime>
#include <QFile>
#include<QMessageBox>
#include<QPixmap>
#include<QFileDialog>
#include<QBuffer>
#include <QSqlTableModel>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void initMainWindow(); //界面初始化方法
    void onTableSelectChange(int row);//商品信息数据网格与表单联动
    void showCommodityPhoto();//显示商品样照
    void loadPreComnodity(); //加载预售页面商品名称列表
    void onPreNameComboBoxChange(); //预售订单页商品名与表单联动



private slots:
    void on_commodityTableView_clicked(const QModelIndex &index);

    void on_preCategoryComboBox_currentIndexChanged(int index);

    void on_preNameComboBox_currentIndexChanged(int index);

    void on_preCountSpinBox_valueChanged(int arg1);

    void on_prePlaceOrderPushButton_clicked();

    void on_preSellPushButton_clicked();

    void on_newUploadPushButton_clicked();

    void on_newPutinStorePushButton_clicked();

    void on_newClearancePushButton_clicked();

private:
    Ui::MainWindow *ui;
    QImage myPicImg;                          //保存商品样照（界面显示）
    QSqlTableModel *commodity_model;          //访问数据库商品信息视图的模型
    QString myMemberID;                       //会员帐号
    bool myOrdered;                           //是否正在购买(订单已写入数据库)
    int myOrderID;                            //订单编号
    float myPaySum;                           //当前订单累计需要付款的总金额
};
static bool createMySqlConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase ("QMYSQL");
    db.setHostName ("localhost");//设置数据库主机名
    db.setDatabaseName ("emarket");//设置数据库主机名
    db.setUserName ("root");//设置数据库用户名
    db.setPassword ("123456");//设置数据库密码
    if(!db.open ())
    {
        qDebug() << "数据库打开失败！";
        QMessageBox::critical(0,QObject::tr ("后台数据库连接失败"),"无法创建连接",QMessageBox::Cancel);
        return false;
    }else{
        qDebug() << "数据库打开成功！";
    }
//    //db.open ();//打开连接5
//    //创建数据库表
//    QSqlQuery query(db);
//    bool success;
//    //查询
//   success =  query.exec ("select * from category");
//   if(success)
//       qDebug() << "查询成功！";
//   else
//       qDebug() << "查询失败";
//   QSqlRecord rec = query.record ();
//   //打印表头
//   qDebug() << "打印表头:";
//   int index=0;
//   QStringList fieldList;
//   while(!rec.fieldName (index).isEmpty ())
//   {
//       fieldList << rec.fieldName (index++);
//   }
//   qDebug() << fieldList;
   return true;

//   //向数据库中插入照片
//   QString photoPath = "C:\\Users\\LUO\\Desktop\\WeChat\\pig.jpg";
//   QFile photoFile (photoPath);
//   if(photoFile.exists ())
//   {
//       //存入数据库
//       QByteArray picData;
//       photoFile.open (QIODevice::ReadOnly);
//       //QByteArray readAll()
//       picData = photoFile.readAll ();
//       photoFile.close ();
//       QVariant var(picData);
//       QString sqlstr = "insert into commodity values(1,1,'粉红小猪',?,100.0,263.3,300)";
//       query.prepare (sqlstr);
//       query.addBindValue (var);
//       if(query.exec ())
//       {
//           qDebug() << "写入成功";
//       }else{
//           qDebug() << "写入失败";
//       }
//   }

}
#endif // MAINWINDOW_H
