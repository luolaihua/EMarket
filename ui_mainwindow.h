/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QLabel *label;
    QToolBox *toolBox;
    QWidget *page_1;
    QLabel *label_2;
    QComboBox *newCategoryComboBox;
    QLabel *label_3;
    QLineEdit *newNameLineEdit;
    QLabel *label_4;
    QLineEdit *newInputPriceLineEdit;
    QLineEdit *newOutputPriceLineEdit;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *newPictureLabel;
    QPushButton *newUploadPushButton;
    QTableView *commodityTableView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QSpinBox *newCountSpinBox;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QPushButton *newPutinStorePushButton;
    QPushButton *newClearancePushButton;
    QWidget *page_21;
    QLabel *label_11;
    QComboBox *preCategoryComboBox;
    QLabel *newPictureLabel_2;
    QLabel *label_14;
    QComboBox *preNameComboBox;
    QLabel *prePictureLabel;
    QListWidget *sellListWidget;
    QSplitter *splitter_3;
    QPushButton *preSellPushButton;
    QPushButton *prePlaceOrderPushButton;
    QWidget *widget2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_12;
    QLabel *preOutputPriceLabel;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout;
    QLabel *label_17;
    QLabel *preAmountLabel;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_13;
    QSpinBox *preCountSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_20;
    QLabel *preTotalLabel;
    QLabel *label_22;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(850, 499);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 20, 800, 410));
        stackedWidget->setMinimumSize(QSize(781, 381));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 781, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font.setPointSize(18);
        label->setFont(font);
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Sunken);
        label->setAlignment(Qt::AlignCenter);
        toolBox = new QToolBox(page_2);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(0, 30, 790, 381));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolBox->sizePolicy().hasHeightForWidth());
        toolBox->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setBold(true);
        font1.setWeight(75);
        toolBox->setFont(font1);
        toolBox->setFrameShape(QFrame::WinPanel);
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        page_1->setGeometry(QRect(0, 0, 786, 317));
        label_2 = new QLabel(page_1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(22, 2, 51, 16));
        newCategoryComboBox = new QComboBox(page_1);
        newCategoryComboBox->setObjectName(QString::fromUtf8("newCategoryComboBox"));
        newCategoryComboBox->setGeometry(QRect(80, 2, 96, 23));
        label_3 = new QLabel(page_1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(22, 34, 51, 16));
        newNameLineEdit = new QLineEdit(page_1);
        newNameLineEdit->setObjectName(QString::fromUtf8("newNameLineEdit"));
        newNameLineEdit->setGeometry(QRect(80, 34, 142, 23));
        label_4 = new QLabel(page_1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(22, 66, 51, 16));
        newInputPriceLineEdit = new QLineEdit(page_1);
        newInputPriceLineEdit->setObjectName(QString::fromUtf8("newInputPriceLineEdit"));
        newInputPriceLineEdit->setGeometry(QRect(80, 66, 159, 23));
        newOutputPriceLineEdit = new QLineEdit(page_1);
        newOutputPriceLineEdit->setObjectName(QString::fromUtf8("newOutputPriceLineEdit"));
        newOutputPriceLineEdit->setGeometry(QRect(80, 100, 159, 23));
        label_5 = new QLabel(page_1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 100, 51, 16));
        label_6 = new QLabel(page_1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(246, 66, 16, 18));
        label_7 = new QLabel(page_1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(250, 100, 16, 18));
        label_9 = new QLabel(page_1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(60, 200, 72, 15));
        newPictureLabel = new QLabel(page_1);
        newPictureLabel->setObjectName(QString::fromUtf8("newPictureLabel"));
        newPictureLabel->setGeometry(QRect(220, 150, 151, 161));
        newPictureLabel->setFrameShape(QFrame::Box);
        newPictureLabel->setFrameShadow(QFrame::Sunken);
        newPictureLabel->setScaledContents(true);
        newUploadPushButton = new QPushButton(page_1);
        newUploadPushButton->setObjectName(QString::fromUtf8("newUploadPushButton"));
        newUploadPushButton->setGeometry(QRect(280, 120, 89, 24));
        commodityTableView = new QTableView(page_1);
        commodityTableView->setObjectName(QString::fromUtf8("commodityTableView"));
        commodityTableView->setGeometry(QRect(390, 0, 381, 321));
        commodityTableView->horizontalHeader()->setMinimumSectionSize(25);
        commodityTableView->horizontalHeader()->setDefaultSectionSize(120);
        commodityTableView->horizontalHeader()->setStretchLastSection(true);
        commodityTableView->verticalHeader()->setVisible(false);
        widget = new QWidget(page_1);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 150, 115, 26));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_4->addWidget(label_8);

        newCountSpinBox = new QSpinBox(widget);
        newCountSpinBox->setObjectName(QString::fromUtf8("newCountSpinBox"));

        horizontalLayout_4->addWidget(newCountSpinBox);

        widget1 = new QWidget(page_1);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(60, 240, 82, 57));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        newPutinStorePushButton = new QPushButton(widget1);
        newPutinStorePushButton->setObjectName(QString::fromUtf8("newPutinStorePushButton"));

        verticalLayout->addWidget(newPutinStorePushButton);

        newClearancePushButton = new QPushButton(widget1);
        newClearancePushButton->setObjectName(QString::fromUtf8("newClearancePushButton"));

        verticalLayout->addWidget(newClearancePushButton);

        toolBox->addItem(page_1, QString::fromUtf8("\346\226\260\345\223\201\345\205\245\345\272\223"));
        page_21 = new QWidget();
        page_21->setObjectName(QString::fromUtf8("page_21"));
        page_21->setGeometry(QRect(0, 0, 786, 317));
        label_11 = new QLabel(page_21);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 0, 72, 15));
        preCategoryComboBox = new QComboBox(page_21);
        preCategoryComboBox->setObjectName(QString::fromUtf8("preCategoryComboBox"));
        preCategoryComboBox->setGeometry(QRect(110, 0, 89, 23));
        newPictureLabel_2 = new QLabel(page_21);
        newPictureLabel_2->setObjectName(QString::fromUtf8("newPictureLabel_2"));
        newPictureLabel_2->setGeometry(QRect(419, 359, 151, 151));
        newPictureLabel_2->setFrameShape(QFrame::Box);
        newPictureLabel_2->setFrameShadow(QFrame::Sunken);
        newPictureLabel_2->setScaledContents(true);
        label_14 = new QLabel(page_21);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 30, 51, 16));
        preNameComboBox = new QComboBox(page_21);
        preNameComboBox->setObjectName(QString::fromUtf8("preNameComboBox"));
        preNameComboBox->setGeometry(QRect(80, 30, 201, 23));
        prePictureLabel = new QLabel(page_21);
        prePictureLabel->setObjectName(QString::fromUtf8("prePictureLabel"));
        prePictureLabel->setGeometry(QRect(10, 130, 151, 151));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(prePictureLabel->sizePolicy().hasHeightForWidth());
        prePictureLabel->setSizePolicy(sizePolicy1);
        prePictureLabel->setFrameShape(QFrame::Box);
        prePictureLabel->setFrameShadow(QFrame::Sunken);
        prePictureLabel->setScaledContents(true);
        sellListWidget = new QListWidget(page_21);
        sellListWidget->setObjectName(QString::fromUtf8("sellListWidget"));
        sellListWidget->setGeometry(QRect(310, -10, 441, 311));
        splitter_3 = new QSplitter(page_21);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setGeometry(QRect(220, 220, 80, 48));
        splitter_3->setOrientation(Qt::Vertical);
        preSellPushButton = new QPushButton(splitter_3);
        preSellPushButton->setObjectName(QString::fromUtf8("preSellPushButton"));
        splitter_3->addWidget(preSellPushButton);
        prePlaceOrderPushButton = new QPushButton(splitter_3);
        prePlaceOrderPushButton->setObjectName(QString::fromUtf8("prePlaceOrderPushButton"));
        splitter_3->addWidget(prePlaceOrderPushButton);
        widget2 = new QWidget(page_21);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(10, 60, 241, 55));
        gridLayout = new QGridLayout(widget2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_12 = new QLabel(widget2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_2->addWidget(label_12);

        preOutputPriceLabel = new QLabel(widget2);
        preOutputPriceLabel->setObjectName(QString::fromUtf8("preOutputPriceLabel"));
        preOutputPriceLabel->setMinimumSize(QSize(40, 0));

        horizontalLayout_2->addWidget(preOutputPriceLabel);

        label_16 = new QLabel(widget2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_2->addWidget(label_16);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_17 = new QLabel(widget2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout->addWidget(label_17);

        preAmountLabel = new QLabel(widget2);
        preAmountLabel->setObjectName(QString::fromUtf8("preAmountLabel"));
        preAmountLabel->setMinimumSize(QSize(40, 0));

        horizontalLayout->addWidget(preAmountLabel);

        label_19 = new QLabel(widget2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout->addWidget(label_19);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_13 = new QLabel(widget2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_5->addWidget(label_13);

        preCountSpinBox = new QSpinBox(widget2);
        preCountSpinBox->setObjectName(QString::fromUtf8("preCountSpinBox"));

        horizontalLayout_5->addWidget(preCountSpinBox);


        gridLayout->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_20 = new QLabel(widget2);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_3->addWidget(label_20);

        preTotalLabel = new QLabel(widget2);
        preTotalLabel->setObjectName(QString::fromUtf8("preTotalLabel"));
        preTotalLabel->setMinimumSize(QSize(40, 0));

        horizontalLayout_3->addWidget(preTotalLabel);

        label_22 = new QLabel(widget2);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_3->addWidget(label_22);


        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        toolBox->addItem(page_21, QString::fromUtf8("\351\242\204\345\224\256\350\256\242\345\215\225"));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 850, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\347\256\241\347\220\206", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\261\273\345\210\253\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\220\215\347\247\260\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\350\277\233\344\273\267\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\224\256\344\273\267\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\302\245", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\302\245", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\346\240\267\347\205\247", nullptr));
        newPictureLabel->setText(QString());
        newUploadPushButton->setText(QCoreApplication::translate("MainWindow", "\344\270\212\344\274\240", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\346\225\260\351\207\217\357\274\232", nullptr));
        newPutinStorePushButton->setText(QCoreApplication::translate("MainWindow", "\345\205\245\345\272\223", nullptr));
        newClearancePushButton->setText(QCoreApplication::translate("MainWindow", "\346\270\205\344\273\223", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_1), QCoreApplication::translate("MainWindow", "\346\226\260\345\223\201\345\205\245\345\272\223", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\347\261\273\345\210\253\357\274\232", nullptr));
        newPictureLabel_2->setText(QString());
        label_14->setText(QCoreApplication::translate("MainWindow", "\345\220\215\347\247\260\357\274\232", nullptr));
        prePictureLabel->setText(QString());
        preSellPushButton->setText(QCoreApplication::translate("MainWindow", "\345\207\272\345\224\256", nullptr));
        prePlaceOrderPushButton->setText(QCoreApplication::translate("MainWindow", "\344\270\213\345\215\225", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\345\215\225\344\273\267\357\274\232", nullptr));
        preOutputPriceLabel->setText(QString());
        label_16->setText(QCoreApplication::translate("MainWindow", "\302\245", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\345\272\223\345\255\230\357\274\232", nullptr));
        preAmountLabel->setText(QString());
        label_19->setText(QCoreApplication::translate("MainWindow", "\302\245", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\346\225\260\351\207\217\357\274\232", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "\350\277\233\344\273\267\357\274\232", nullptr));
        preTotalLabel->setText(QString());
        label_22->setText(QCoreApplication::translate("MainWindow", "\302\245", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_21), QCoreApplication::translate("MainWindow", "\351\242\204\345\224\256\350\256\242\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
