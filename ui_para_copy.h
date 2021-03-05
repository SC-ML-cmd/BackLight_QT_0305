/********************************************************************************
** Form generated from reading UI file 'para_copy.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARA_COPY_H
#define UI_PARA_COPY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Para_Copy
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *Para_Copy)
    {
        if (Para_Copy->objectName().isEmpty())
            Para_Copy->setObjectName(QString::fromUtf8("Para_Copy"));
        Para_Copy->resize(800, 396);
        centralwidget = new QWidget(Para_Copy);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 0, 801, 351));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(510, 360, 93, 28));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(690, 360, 93, 28));
        Para_Copy->setCentralWidget(centralwidget);

        retranslateUi(Para_Copy);

        QMetaObject::connectSlotsByName(Para_Copy);
    } // setupUi

    void retranslateUi(QMainWindow *Para_Copy)
    {
        Para_Copy->setWindowTitle(QApplication::translate("Para_Copy", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("Para_Copy", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QApplication::translate("Para_Copy", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Para_Copy: public Ui_Para_Copy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARA_COPY_H
