/********************************************************************************
** Form generated from reading UI file 'promodel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROMODEL_H
#define UI_PROMODEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_promodel
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QWidget *centralwidget;
    QTableView *tableView;
    QToolBar *toolBar;

    void setupUi(QMainWindow *promodel)
    {
        if (promodel->objectName().isEmpty())
            promodel->setObjectName(QString::fromUtf8("promodel"));
        promodel->resize(1296, 701);
        action = new QAction(promodel);
        action->setObjectName(QString::fromUtf8("action"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resourse/xinzeng.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon);
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Arabic"));
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        action->setFont(font);
        action_2 = new QAction(promodel);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resourse/shanchu.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_2->setIcon(icon1);
        action_3 = new QAction(promodel);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resourse/NMStubiao-.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_3->setIcon(icon2);
        action_4 = new QAction(promodel);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resourse/xiugaiq.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_4->setIcon(icon3);
        action_5 = new QAction(promodel);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resourse/_canshu_xiugaicanshudingyi.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_5->setIcon(icon4);
        action_6 = new QAction(promodel);
        action_6->setObjectName(QString::fromUtf8("action_6"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resourse/fuzhi.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_6->setIcon(icon5);
        action_7 = new QAction(promodel);
        action_7->setObjectName(QString::fromUtf8("action_7"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resourse/shuaxin.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_7->setIcon(icon6);
        centralwidget = new QWidget(promodel);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 0, 1291, 671));
        promodel->setCentralWidget(centralwidget);
        toolBar = new QToolBar(promodel);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe Arabic"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setWeight(50);
        toolBar->setFont(font1);
        toolBar->setIconSize(QSize(20, 20));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        promodel->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action);
        toolBar->addSeparator();
        toolBar->addAction(action_4);
        toolBar->addSeparator();
        toolBar->addAction(action_3);
        toolBar->addSeparator();
        toolBar->addAction(action_2);
        toolBar->addSeparator();
        toolBar->addAction(action_5);
        toolBar->addSeparator();
        toolBar->addAction(action_6);
        toolBar->addSeparator();
        toolBar->addAction(action_7);
        toolBar->addSeparator();

        retranslateUi(promodel);

        QMetaObject::connectSlotsByName(promodel);
    } // setupUi

    void retranslateUi(QMainWindow *promodel)
    {
        promodel->setWindowTitle(QApplication::translate("promodel", "MainWindow", nullptr));
        action->setText(QApplication::translate("promodel", "\346\226\260\345\242\236", nullptr));
        action_2->setText(QApplication::translate("promodel", "\345\210\240\351\231\244", nullptr));
        action_3->setText(QApplication::translate("promodel", "\346\237\245\350\257\242", nullptr));
        action_4->setText(QApplication::translate("promodel", "\344\277\256\346\224\271", nullptr));
        action_5->setText(QApplication::translate("promodel", "\345\217\202\346\225\260\344\277\256\346\224\271", nullptr));
#ifndef QT_NO_TOOLTIP
        action_5->setToolTip(QApplication::translate("promodel", "\345\217\202\346\225\260\344\277\256\346\224\271", nullptr));
#endif // QT_NO_TOOLTIP
        action_6->setText(QApplication::translate("promodel", "\345\217\202\346\225\260\345\244\215\345\210\266", nullptr));
        action_7->setText(QApplication::translate("promodel", "\345\210\267\346\226\260", nullptr));
        toolBar->setWindowTitle(QApplication::translate("promodel", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class promodel: public Ui_promodel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROMODEL_H
