#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlRecord>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initMainWindow();
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief 初始化窗体
 */
void MainWindow::initMainWindow()
{
    ui->stackedWidget->setCurrentIndex (1);//置于商品管理主页
    ui->toolBox->setCurrentIndex (0);//新品入库页显示在前
    //商品类别模型数据
    QSqlQueryModel *categoryModel = new QSqlQueryModel(this);
    categoryModel->setQuery ("select Name from category");
    QSqlRecord rec = categoryModel->record (0);
//    qDebug() << rec.fieldName (0);
//    qDebug() <<  categoryModel->data(categoryModel->index (1,0)).toString ();
    //商品类别下拉栏中数据加载（新品入库页）
    ui->newCategoryComboBox->setModel (categoryModel);


    //商品信息视图
    commodity_model = new QSqlTableModel(this);
    commodity_model->setTable ("commodity_inf");
    //select()，用表中的数据填充模型
    commodity_model->select ();
    //库存商品记录数据网格信息加载（新品入库页）
    ui->commodityTableView->setModel (commodity_model);

    //预售订单中的类别下拉栏数据填充
    ui->preCategoryComboBox->setModel (categoryModel);
    loadPreComnodity ();//在预售订单页加载信息
    myMemberID = "luolaihua";
    myOrdered =false;
    myOrderID = 0;
    myPaySum = 0;
    QListWidgetItem *title = new QListWidgetItem;
    title->setText (QString("当前订单【编号%1】").arg (myOrderID));
    title->setTextAlignment (Qt::AlignCenter);

}

/**
 * @brief 执行表单信息的更新
 * @param row
 */
void MainWindow::onTableSelectChange(int row)
{
    int r = 1;//默认索引为1
    if(row !=0)
        r = ui->commodityTableView->currentIndex ().row ();
    QModelIndex index;
    index = commodity_model->index (r,0);//获取商品名称的index
    ui->newNameLineEdit->setText (commodity_model->data (index).toString ());
    index = commodity_model->index (r,1);//获取进价的index
    ui->newInputPriceLineEdit->setText (commodity_model->data (index).toString ());
    index = commodity_model->index (r,2);//售价
    ui->newOutputPriceLineEdit->setText (commodity_model->data (index).toString ());
    //显示商品的样照
    showCommodityPhoto ();
    QSqlQuery query;

    //查询当前商品属于哪个类别
    bool success = query.exec (QString("select Name from category where CategoryID=(select CategoryID from commodity where Name='%1')").arg (ui->newNameLineEdit->text ()));
    query.next ();
    //一开始获取的记录是表头！！！，要使用next，才会移到下一行
//    QSqlRecord rec = query.record ();
//    qDebug() << rec.isEmpty ();
//    qDebug() << rec.value (0).toString ();
    //更新类别下拉栏
    ui->newCategoryComboBox->setCurrentText (query.value (0).toString ());
    //qDebug() << query.value (0).toString ();

}

void MainWindow::showCommodityPhoto()
{
    QPixmap photo;
    QModelIndex index;
    QSqlQueryModel *pictureModel = new QSqlQueryModel(this);
    QString name = ui->newNameLineEdit->text ();
    pictureModel->setQuery ("select Picture from commodity where name='"+name+"'");
    index = pictureModel->index (0,0);
    photo.loadFromData (pictureModel->data (index).toByteArray (),"JPG");
    ui->newPictureLabel->setPixmap (photo);
}

/**
 * @brief 在预售订单页加载商品信息
 */
void MainWindow::loadPreComnodity()
{
    QSqlQueryModel *commodityNameModel = new QSqlQueryModel(this);
    //查询某个商品种类的全部商品名称
    commodityNameModel->setQuery (QString("select Name from commodity where CategoryID =(select CategoryID from category where Name = '%1')").arg (ui->preCategoryComboBox->currentText ()));
    //商品名称列表加载
    ui->preNameComboBox->setModel (commodityNameModel);
    onPreNameComboBoxChange ();
}

void MainWindow::onPreNameComboBoxChange()
{
    QSqlQueryModel *preCommodityModel = new QSqlQueryModel(this);
    QString name = ui->preNameComboBox->currentText ();//当前选中的商品名称
    //查询当前选中商品的单价，库存和照片等信息
    preCommodityModel->setQuery ("select OutputPrice,Amount,Picture from commodity where Name='"+name+"'");
    QModelIndex index ;
    index = preCommodityModel->index (0,0); //单价--第0行第0列--第0条记录的第二列
    ui->preOutputPriceLabel->setText (preCommodityModel->data(index).toString ());
    index = preCommodityModel->index (0,1); //库存
    ui->preAmountLabel->setText (preCommodityModel->data(index).toString ());
    ui->preCountSpinBox->setMaximum (ui->preAmountLabel->text ().toInt ());
    //下面开始获取和展示照片
    QPixmap photo;
    index = preCommodityModel->index (0,2);//第三列就是照片数据
    photo.loadFromData (preCommodityModel->data (index).toByteArray (),"JPG");
    ui->prePictureLabel->setPixmap (photo);
    //计算总价
    ui->preTotalLabel->setText (QString::number (ui->preOutputPriceLabel->text ().toFloat ()*ui->preCountSpinBox->value ()));

}

/**
 * @brief tableView中的item被点击
 * @param index
 */
void MainWindow::on_commodityTableView_clicked(const QModelIndex &index)
{
    onTableSelectChange (1);
}

void MainWindow::on_preCategoryComboBox_currentIndexChanged(int index)
{

}

void MainWindow::on_preNameComboBox_currentIndexChanged(int index)
{

}

void MainWindow::on_preCountSpinBox_valueChanged(int arg1)
{

}

void MainWindow::on_prePlaceOrderPushButton_clicked()
{
    QSqlQuery query ;
    QString otime = QDateTime::currentDateTime ().toString ("yyyy-MM-dd hh:mm:ss");
    QSqlDatabase::database ().transaction ();
    bool ordOk = query.exec (QString("update orders set PaySum=%1,OTime='%2' where OrderID=%3").arg (myPaySum).arg (otime).arg (myOrderID));
    bool uptOk = query.exec (QString("update orderitems set Affirm=1,SendGoods=1 where OrderID=%1").arg (myOrderID));
    if(ordOk&& uptOk)
    {
        QSqlDatabase::database ().commit ();
        ui->prePlaceOrderPushButton->setEnabled (false);
        //显示下单记录
        QString order_record = "日期："+otime +"\r\n订单号："+QString("%1").arg (myOrderID)+"\r\n应付款总额："+QString(" %1¥").arg (myPaySum)+"\r\n下单成功！";
        QListWidgetItem *split = new QListWidgetItem;
        split->setText ("***.***.***.***.***.***.***.***.***.***.***.***.");
        split->setTextAlignment (Qt::AlignCenter);
        ui->sellListWidget->addItem (split);
        ui->sellListWidget->addItem (order_record);
        myPaySum = 0;
        QMessageBox::information (0,QObject::tr ("提示"),"下单成功！");
        commodity_model->setTable ("commodity_inf");
        commodity_model->select ();
        ui->commodityTableView->setModel (commodity_model);

    }else{
        QSqlDatabase::database ().rollback ();
    }
}

/**
 * @brief 用户可以选择不同类别的不同商品，指定数量后出售，这里准确地说只是预售，在未下单之前，用户还可以添加新的商品进行订单。
 */
void MainWindow::on_preSellPushButton_clicked()
{
    QSqlQuery query;
    //是否处于预售状态
    if(!myOrdered)
    {
        qDebug() << "插入用户名操作："<<query.exec (QString("insert into orders(MemberID,PaySum,PayWay,OTime) values('%1',NULL,NULL,NULL)").arg (myMemberID));
        myOrdered = true;
        query.exec (QString("select OrderID from orders where OTime IS NULL"));
        query.next ();
        myOrderID = query.value (0).toInt ();
    }
    //下面开始预售,由商品的名字查询商品的类别ID
    qDebug() << "由商品的名字查询商品的类别ID："<<query.exec (QString("select CommodityID from commodity where Name='%1'").arg (ui->preNameComboBox->currentText ()));
    query.next ();//下移到数据行
    int commodityid = query.value (0).toInt ();
    int count = ui->preCountSpinBox->value ();
    int amount = ui->preCountSpinBox->maximum ()-count;

    //开始下一个事务，事务是不可分割的，具有原子性
    //-------------------------------------------
    QSqlDatabase::database ().transaction ();
    //新增订单项
    bool insOk = query.exec (QString("insert into orderitems(OrderID,CommodityID,Count) values(%1,%2,%3)").arg (myOrderID).arg (commodityid).arg (count));
    qDebug() << "插入数据到orderitems："<<insOk;
    bool uptOk = query.exec (QString("update commodity set Amount=%1 where CommodityID=%2").arg (amount).arg (commodityid));
    qDebug() << "更新商品数量："<<uptOk;
    if(insOk && uptOk)
    {
        //事务提交
        //-----------------------------------------
        QSqlDatabase::database ().commit ();
        onPreNameComboBoxChange ();
        //显示预售清单
        QString curtime = QTime::currentTime ().toString ("hh::mm:ss");
        QString curname = ui->preNameComboBox->currentText ();
        QString curcount = QString::number (count,10);
        QString curoutprice = ui->preOutputPriceLabel->text ();
        QString curtotal = ui->preTotalLabel->text ();
        myPaySum += curtotal.toFloat ();
        QString sell_record = curtime+" "+"售出: "+curname+"\r\n"+
                "数量："+curcount+"; 单价："+curoutprice+"¥；总价："+
                curtotal+"¥";
        QListWidgetItem *split = new QListWidgetItem;
        split->setText ("—.—.—.—.—.—.—.—.—.—.—.—.—.—.—.—.");
        split->setTextAlignment (Qt::AlignCenter);
        ui->sellListWidget->addItem (split);
        ui->sellListWidget->addItem (sell_record);
        ui->prePlaceOrderPushButton->setEnabled (true);
        QMessageBox::information (0,QObject::tr ("提示"),"已加入订单！");
    }else{
        //事务回滚：回滚只是针对于还没有commit提交之前，一但进行提交，那就不能进行回滚了
        //-----------------------------------------
        QSqlDatabase::database ().rollback ();
    }

}

/**
 * @brief 上传图片
 */
void MainWindow::on_newUploadPushButton_clicked()
{
    QString pictureName = QFileDialog::getOpenFileName (this,"选择商品图片",".","Image File(*.png *.jpg)");
    if(pictureName.isEmpty ()) return;
    myPicImg.load (pictureName);
    ui->newPictureLabel->setPixmap (QPixmap::fromImage (myPicImg));
}

void MainWindow::on_newPutinStorePushButton_clicked()
{
    QSqlQuery query;
    //商品的种类只能选现有的，不能自己添加
    query.exec (QString("select CategoryID from category where Name='%1'").arg (ui->newCategoryComboBox->currentText ()));
    query.next ();//移到数据行
    int categoryid = query.value (0).toInt ();
    QString name = ui->newNameLineEdit->text ();
    float inputprice = ui->newInputPriceLineEdit->text ().toFloat ();
    float outputprice = ui->newOutputPriceLineEdit->text ().toFloat ();
    int count = ui->newCountSpinBox->value ();
    query.exec (QString("insert into commodity(CategoryID,Name,Picture,InputPrice,OutputPrice,Amount) values(%1,'%2',NULL,%3,%4,%5)").arg (categoryid).arg (name).arg (inputprice).arg (outputprice).arg (count));
    //插入图片
    QByteArray picdata;
    QBuffer buffer(&picdata);
    buffer.open (QIODevice::WriteOnly);
    myPicImg.save (&buffer,"JPG");
    QVariant var(picdata);
    QString sqlstr = "update commodity set Picture=? where Name='"+name+"'";
    query.prepare (sqlstr);
    query.addBindValue (var);
    if(!query.exec ())
    {
        QMessageBox::information (0,QObject::tr ("提示"),"照片写入失败");
    }
    //刷新网格信息
    commodity_model->setTable ("commodity_inf");
    commodity_model->select ();
    ui->commodityTableView->setModel (commodity_model);

}

/**
 * @brief 清仓操作，当某件商品不再需要时，将其消息记录从数据库删除
 */
void MainWindow::on_newClearancePushButton_clicked()
{
    QSqlQuery query;
    //从数据库中删除记录
    bool success = query.exec (QString("delete from commodity where Name='%1'").arg (ui->newNameLineEdit->text()));

    //刷新界面
    ui->newNameLineEdit->setText ("");
    ui->newInputPriceLineEdit->setText ("");
    ui->newOutputPriceLineEdit->setText ("");
    ui->newCountSpinBox->setValue (1);
    ui->newPictureLabel->clear ();
    commodity_model->setTable ("commodity_inf");
    commodity_model->select ();
    ui->commodityTableView->setModel (commodity_model);
}
