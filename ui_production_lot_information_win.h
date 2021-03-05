/********************************************************************************
** Form generated from reading UI file 'production_lot_information_win.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTION_LOT_INFORMATION_WIN_H
#define UI_PRODUCTION_LOT_INFORMATION_WIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_production_lot_information_win
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QWidget *centralwidget;
    QTableView *tableView;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *production_lot_information_win)
    {
        if (production_lot_information_win->objectName().isEmpty())
            production_lot_information_win->setObjectName(QString::fromUtf8("production_lot_information_win"));
        production_lot_information_win->resize(953, 577);
        production_lot_information_win->setMinimumSize(QSize(953, 577));
        production_lot_information_win->setMaximumSize(QSize(953, 577));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("\347\224\237\344\272\247\346\211\271\346\254\241");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/resourse/peizhi.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        production_lot_information_win->setWindowIcon(icon);
        action = new QAction(production_lot_information_win);
        action->setObjectName(QString::fromUtf8("action"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resourse/xinzeng.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon1);
        action->setIconVisibleInMenu(true);
        action_2 = new QAction(production_lot_information_win);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resourse/xiugaiq.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_2->setIcon(icon2);
        action_3 = new QAction(production_lot_information_win);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resourse/shanchu.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_3->setIcon(icon3);
        action_4 = new QAction(production_lot_information_win);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resourse/NMStubiao-.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_4->setIcon(icon4);
        centralwidget = new QWidget(production_lot_information_win);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 0, 951, 471));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(370, 410, 401, 41));
        QFont font;
        font.setItalic(false);
        scrollArea->setFont(font);
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"selection-color: rgb(255, 255, 255);\n"
"gridline-color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 399, 39));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(840, 490, 93, 28));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(710, 490, 93, 28));
        production_lot_information_win->setCentralWidget(centralwidget);
        tableView->raise();
        pushButton_2->raise();
        pushButton->raise();
        scrollArea->raise();
        statusbar = new QStatusBar(production_lot_information_win);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        production_lot_information_win->setStatusBar(statusbar);
        toolBar = new QToolBar(production_lot_information_win);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setContextMenuPolicy(Qt::PreventContextMenu);
        toolBar->setIconSize(QSize(20, 20));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        production_lot_information_win->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action);
        toolBar->addAction(action_2);
        toolBar->addAction(action_3);
        toolBar->addAction(action_4);

        retranslateUi(production_lot_information_win);

        QMetaObject::connectSlotsByName(production_lot_information_win);
    } // setupUi

    void retranslateUi(QMainWindow *production_lot_information_win)
    {
        production_lot_information_win->setWindowTitle(QApplication::translate("production_lot_information_win", "\347\224\237\344\272\247\346\211\271\346\254\241", nullptr));
        action->setText(QApplication::translate("production_lot_information_win", "\346\226\260\345\242\236", nullptr));
        action_2->setText(QApplication::translate("production_lot_information_win", "\344\277\256\346\224\271", nullptr));
        action_3->setText(QApplication::translate("production_lot_information_win", "\345\210\240\351\231\244", nullptr));
        action_4->setText(QApplication::translate("production_lot_information_win", "\346\237\245\350\257\242", nullptr));
        pushButton_2->setText(QApplication::translate("production_lot_information_win", "\345\217\226\346\266\210", nullptr));
        pushButton->setText(QApplication::translate("production_lot_information_win", "\347\241\256\345\256\232", nullptr));
        toolBar->setWindowTitle(QApplication::translate("production_lot_information_win", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class production_lot_information_win: public Ui_production_lot_information_win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTION_LOT_INFORMATION_WIN_H
