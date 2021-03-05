/********************************************************************************
** Form generated from reading UI file 'datastatistics_win.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATASTATISTICS_WIN_H
#define UI_DATASTATISTICS_WIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_datastatistics_win
{
public:
    QAction *Save_action;
    QAction *Show_action;
    QAction *Setting_action;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_15;
    QHBoxLayout *horizontalLayout_14;
    QDockWidget *Settting_dockWidget;
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *VariableGrouping_comboBox;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *Statistics_comboBox;
    QGroupBox *Boundary_groupBox;
    QHBoxLayout *horizontalLayout_3;
    QToolBox *StatisticSetting_toolBox;
    QWidget *page;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *SelectAll_radioButton1;
    QTableView *SelectDate_tableView;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *SelectAll_radioButton2;
    QTableView *SelectBatch_tableView;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *SelectAll_radioButton3;
    QTableView *SelectProductModel_tableView;
    QWidget *page_4;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *SelectAll_radioButton4;
    QTableView *SelectScreenType_tableView;
    QWidget *page_5;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *SelectAll_radioButton5;
    QTableView *SelectDefectType_tableView;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_7;
    QComboBox *Pattern_comboBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_13;
    QSplitter *splitter;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_8;
    QTableView *Data_tableView;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *datastatistics_win)
    {
        if (datastatistics_win->objectName().isEmpty())
            datastatistics_win->setObjectName(QString::fromUtf8("datastatistics_win"));
        datastatistics_win->resize(1104, 710);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resourse/tongjitu.png"), QSize(), QIcon::Normal, QIcon::Off);
        datastatistics_win->setWindowIcon(icon);
        Save_action = new QAction(datastatistics_win);
        Save_action->setObjectName(QString::fromUtf8("Save_action"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resourse/baocun.png"), QSize(), QIcon::Normal, QIcon::Off);
        Save_action->setIcon(icon1);
        Show_action = new QAction(datastatistics_win);
        Show_action->setObjectName(QString::fromUtf8("Show_action"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resourse/zhishuxianshi.png"), QSize(), QIcon::Normal, QIcon::Off);
        Show_action->setIcon(icon2);
        Setting_action = new QAction(datastatistics_win);
        Setting_action->setObjectName(QString::fromUtf8("Setting_action"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resourse/ziyuan.png"), QSize(), QIcon::Normal, QIcon::Off);
        Setting_action->setIcon(icon3);
        centralwidget = new QWidget(datastatistics_win);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_15 = new QHBoxLayout(centralwidget);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        Settting_dockWidget = new QDockWidget(centralwidget);
        Settting_dockWidget->setObjectName(QString::fromUtf8("Settting_dockWidget"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/image/zhishuxianshi.png"), QSize(), QIcon::Normal, QIcon::Off);
        Settting_dockWidget->setWindowIcon(icon4);
        Settting_dockWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(235, 235, 235);"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        horizontalLayout_2 = new QHBoxLayout(dockWidgetContents);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_4 = new QGroupBox(dockWidgetContents);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        groupBox_4->setFont(font);
        horizontalLayout_4 = new QHBoxLayout(groupBox_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        VariableGrouping_comboBox = new QComboBox(groupBox_4);
        VariableGrouping_comboBox->setObjectName(QString::fromUtf8("VariableGrouping_comboBox"));
        VariableGrouping_comboBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(VariableGrouping_comboBox);


        verticalLayout->addWidget(groupBox_4);

        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_6 = new QHBoxLayout(groupBox);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        Statistics_comboBox = new QComboBox(groupBox);
        Statistics_comboBox->setObjectName(QString::fromUtf8("Statistics_comboBox"));

        horizontalLayout_6->addWidget(Statistics_comboBox);


        verticalLayout->addWidget(groupBox);

        Boundary_groupBox = new QGroupBox(dockWidgetContents);
        Boundary_groupBox->setObjectName(QString::fromUtf8("Boundary_groupBox"));
        Boundary_groupBox->setFont(font);
        horizontalLayout_3 = new QHBoxLayout(Boundary_groupBox);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        StatisticSetting_toolBox = new QToolBox(Boundary_groupBox);
        StatisticSetting_toolBox->setObjectName(QString::fromUtf8("StatisticSetting_toolBox"));
        StatisticSetting_toolBox->setAcceptDrops(false);
        StatisticSetting_toolBox->setAutoFillBackground(false);
        StatisticSetting_toolBox->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 220, 172));
        horizontalLayout_8 = new QHBoxLayout(page);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        SelectAll_radioButton1 = new QRadioButton(page);
        SelectAll_radioButton1->setObjectName(QString::fromUtf8("SelectAll_radioButton1"));

        verticalLayout_3->addWidget(SelectAll_radioButton1);

        SelectDate_tableView = new QTableView(page);
        SelectDate_tableView->setObjectName(QString::fromUtf8("SelectDate_tableView"));

        verticalLayout_3->addWidget(SelectDate_tableView);


        horizontalLayout_8->addLayout(verticalLayout_3);

        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resourse/riqi.png"), QSize(), QIcon::Normal, QIcon::Off);
        StatisticSetting_toolBox->addItem(page, icon5, QString::fromUtf8("\346\227\245\346\234\237"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 220, 172));
        horizontalLayout_9 = new QHBoxLayout(page_2);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        SelectAll_radioButton2 = new QRadioButton(page_2);
        SelectAll_radioButton2->setObjectName(QString::fromUtf8("SelectAll_radioButton2"));

        verticalLayout_4->addWidget(SelectAll_radioButton2);

        SelectBatch_tableView = new QTableView(page_2);
        SelectBatch_tableView->setObjectName(QString::fromUtf8("SelectBatch_tableView"));

        verticalLayout_4->addWidget(SelectBatch_tableView);


        horizontalLayout_9->addLayout(verticalLayout_4);

        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resourse/picixian.png"), QSize(), QIcon::Normal, QIcon::Off);
        StatisticSetting_toolBox->addItem(page_2, icon6, QString::fromUtf8("\346\211\271\346\254\241"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 220, 172));
        horizontalLayout_10 = new QHBoxLayout(page_3);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        SelectAll_radioButton3 = new QRadioButton(page_3);
        SelectAll_radioButton3->setObjectName(QString::fromUtf8("SelectAll_radioButton3"));

        verticalLayout_5->addWidget(SelectAll_radioButton3);

        SelectProductModel_tableView = new QTableView(page_3);
        SelectProductModel_tableView->setObjectName(QString::fromUtf8("SelectProductModel_tableView"));

        verticalLayout_5->addWidget(SelectProductModel_tableView);


        horizontalLayout_10->addLayout(verticalLayout_5);

        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/resourse/chanpinxinghao.png"), QSize(), QIcon::Normal, QIcon::Off);
        StatisticSetting_toolBox->addItem(page_3, icon7, QString::fromUtf8("\344\272\247\345\223\201\345\236\213\345\217\267"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        page_4->setGeometry(QRect(0, 0, 220, 172));
        horizontalLayout_11 = new QHBoxLayout(page_4);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        SelectAll_radioButton4 = new QRadioButton(page_4);
        SelectAll_radioButton4->setObjectName(QString::fromUtf8("SelectAll_radioButton4"));

        verticalLayout_6->addWidget(SelectAll_radioButton4);

        SelectScreenType_tableView = new QTableView(page_4);
        SelectScreenType_tableView->setObjectName(QString::fromUtf8("SelectScreenType_tableView"));

        verticalLayout_6->addWidget(SelectScreenType_tableView);


        horizontalLayout_11->addLayout(verticalLayout_6);

        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/resourse/pingmu.png"), QSize(), QIcon::Normal, QIcon::Off);
        StatisticSetting_toolBox->addItem(page_4, icon8, QString::fromUtf8("\345\261\217\345\271\225\347\261\273\345\236\213"));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        page_5->setGeometry(QRect(0, 0, 220, 172));
        horizontalLayout_12 = new QHBoxLayout(page_5);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        SelectAll_radioButton5 = new QRadioButton(page_5);
        SelectAll_radioButton5->setObjectName(QString::fromUtf8("SelectAll_radioButton5"));

        verticalLayout_7->addWidget(SelectAll_radioButton5);

        SelectDefectType_tableView = new QTableView(page_5);
        SelectDefectType_tableView->setObjectName(QString::fromUtf8("SelectDefectType_tableView"));

        verticalLayout_7->addWidget(SelectDefectType_tableView);


        horizontalLayout_12->addLayout(verticalLayout_7);

        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/resourse/quexian.png"), QSize(), QIcon::Normal, QIcon::Off);
        StatisticSetting_toolBox->addItem(page_5, icon9, QString::fromUtf8("\347\274\272\351\231\267\347\261\273\345\236\213"));

        horizontalLayout_3->addWidget(StatisticSetting_toolBox);


        verticalLayout->addWidget(Boundary_groupBox);

        groupBox_5 = new QGroupBox(dockWidgetContents);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setFont(font);
        horizontalLayout_7 = new QHBoxLayout(groupBox_5);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        Pattern_comboBox = new QComboBox(groupBox_5);
        Pattern_comboBox->setObjectName(QString::fromUtf8("Pattern_comboBox"));

        horizontalLayout_7->addWidget(Pattern_comboBox);


        verticalLayout->addWidget(groupBox_5);

        verticalLayout->setStretch(2, 10);
        verticalLayout->setStretch(3, 1);

        horizontalLayout_2->addLayout(verticalLayout);

        Settting_dockWidget->setWidget(dockWidgetContents);

        horizontalLayout_14->addWidget(Settting_dockWidget);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_13 = new QHBoxLayout(widget);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        splitter = new QSplitter(widget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        splitter->addWidget(groupBox_2);
        groupBox_3 = new QGroupBox(splitter);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font);
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        Data_tableView = new QTableView(groupBox_3);
        Data_tableView->setObjectName(QString::fromUtf8("Data_tableView"));

        verticalLayout_8->addWidget(Data_tableView);


        horizontalLayout->addLayout(verticalLayout_8);

        splitter->addWidget(groupBox_3);

        horizontalLayout_13->addWidget(splitter);


        horizontalLayout_14->addWidget(widget);

        horizontalLayout_14->setStretch(0, 1);
        horizontalLayout_14->setStretch(1, 3);

        horizontalLayout_15->addLayout(horizontalLayout_14);

        datastatistics_win->setCentralWidget(centralwidget);
        toolBar = new QToolBar(datastatistics_win);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        datastatistics_win->addToolBar(Qt::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(datastatistics_win);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        datastatistics_win->setStatusBar(statusBar);

        toolBar->addAction(Save_action);
        toolBar->addAction(Show_action);
        toolBar->addAction(Setting_action);

        retranslateUi(datastatistics_win);

        StatisticSetting_toolBox->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(datastatistics_win);
    } // setupUi

    void retranslateUi(QMainWindow *datastatistics_win)
    {
        datastatistics_win->setWindowTitle(QApplication::translate("datastatistics_win", "\347\273\237\350\256\241", nullptr));
        Save_action->setText(QApplication::translate("datastatistics_win", "\344\277\235\345\255\230", nullptr));
        Show_action->setText(QApplication::translate("datastatistics_win", "\346\230\276\347\244\272", nullptr));
        Setting_action->setText(QApplication::translate("datastatistics_win", "\350\256\276\347\275\256", nullptr));
#ifndef QT_NO_TOOLTIP
        Settting_dockWidget->setToolTip(QApplication::translate("datastatistics_win", "<html><head/><body><p>\347\273\237\350\256\241\351\205\215\347\275\256</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        Settting_dockWidget->setWhatsThis(QApplication::translate("datastatistics_win", "<html><head/><body><p>\347\273\237\350\256\241\350\256\276\347\275\256</p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        Settting_dockWidget->setWindowTitle(QApplication::translate("datastatistics_win", "\347\273\237\350\256\241\350\256\276\347\275\256", nullptr));
        groupBox_4->setTitle(QApplication::translate("datastatistics_win", "\346\250\252\350\275\264", nullptr));
        groupBox->setTitle(QApplication::translate("datastatistics_win", "\347\272\265\350\275\264", nullptr));
        Boundary_groupBox->setTitle(QApplication::translate("datastatistics_win", "\347\273\237\350\256\241\350\214\203\345\233\264", nullptr));
        SelectAll_radioButton1->setText(QApplication::translate("datastatistics_win", "\345\205\250\351\200\211", nullptr));
        StatisticSetting_toolBox->setItemText(StatisticSetting_toolBox->indexOf(page), QApplication::translate("datastatistics_win", "\346\227\245\346\234\237", nullptr));
        SelectAll_radioButton2->setText(QApplication::translate("datastatistics_win", "\345\205\250\351\200\211", nullptr));
        StatisticSetting_toolBox->setItemText(StatisticSetting_toolBox->indexOf(page_2), QApplication::translate("datastatistics_win", "\346\211\271\346\254\241", nullptr));
        SelectAll_radioButton3->setText(QApplication::translate("datastatistics_win", "\345\205\250\351\200\211", nullptr));
        StatisticSetting_toolBox->setItemText(StatisticSetting_toolBox->indexOf(page_3), QApplication::translate("datastatistics_win", "\344\272\247\345\223\201\345\236\213\345\217\267", nullptr));
        SelectAll_radioButton4->setText(QApplication::translate("datastatistics_win", "\345\205\250\351\200\211", nullptr));
        StatisticSetting_toolBox->setItemText(StatisticSetting_toolBox->indexOf(page_4), QApplication::translate("datastatistics_win", "\345\261\217\345\271\225\347\261\273\345\236\213", nullptr));
        SelectAll_radioButton5->setText(QApplication::translate("datastatistics_win", "\345\205\250\351\200\211", nullptr));
        StatisticSetting_toolBox->setItemText(StatisticSetting_toolBox->indexOf(page_5), QApplication::translate("datastatistics_win", "\347\274\272\351\231\267\347\261\273\345\236\213", nullptr));
        groupBox_5->setTitle(QApplication::translate("datastatistics_win", "\347\273\237\350\256\241\346\226\271\345\274\217", nullptr));
        groupBox_2->setTitle(QApplication::translate("datastatistics_win", "\347\273\237\350\256\241\345\233\276", nullptr));
        groupBox_3->setTitle(QApplication::translate("datastatistics_win", "\347\273\237\350\256\241\346\225\260\346\215\256", nullptr));
        toolBar->setWindowTitle(QApplication::translate("datastatistics_win", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class datastatistics_win: public Ui_datastatistics_win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATASTATISTICS_WIN_H
