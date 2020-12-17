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
    qDebug() << rec.fieldName (0);
    qDebug() <<  categoryModel->data(categoryModel->index (1,0)).toString ();
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
    query.exec (QString("select Name from category where CategoryID=(select"
                        " CategoryID from commodity where Name='%1'").arg (ui->newNameLineEdit->text ()));
    query.next ();
    //更新类别下拉栏
    ui->newCategoryComboBox->setCurrentText (query.value (0).toString ());


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

}

void MainWindow::on_preSellPushButton_clicked()
{

}

void MainWindow::on_newUploadPushButton_clicked()
{

}

void MainWindow::on_newPutinStorePushButton_clicked()
{

}

void MainWindow::on_newClearancePushButton_clicked()
{

}
