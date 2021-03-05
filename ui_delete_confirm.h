/********************************************************************************
** Form generated from reading UI file 'delete_confirm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_CONFIRM_H
#define UI_DELETE_CONFIRM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_delete_confirm
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;

    void setupUi(QMainWindow *delete_confirm)
    {
        if (delete_confirm->objectName().isEmpty())
            delete_confirm->setObjectName(QString::fromUtf8("delete_confirm"));
        delete_confirm->resize(397, 153);
        delete_confirm->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255)"));
        delete_confirm->setIconSize(QSize(20, 20));
        centralwidget = new QWidget(delete_confirm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 110, 93, 28));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 110, 93, 28));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 10, 111, 91));
        pushButton_3->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255)"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resourse/shanchuwenjian.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(60, 60));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 30, 251, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        delete_confirm->setCentralWidget(centralwidget);

        retranslateUi(delete_confirm);

        QMetaObject::connectSlotsByName(delete_confirm);
    } // setupUi

    void retranslateUi(QMainWindow *delete_confirm)
    {
        delete_confirm->setWindowTitle(QApplication::translate("delete_confirm", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("delete_confirm", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QApplication::translate("delete_confirm", "\345\217\226\346\266\210", nullptr));
        pushButton_3->setText(QString());
        label->setText(QApplication::translate("delete_confirm", "\347\241\256\345\256\232\350\246\201\345\210\240\351\231\244\350\257\245\344\272\247\345\223\201\345\236\213\345\217\267\357\274\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delete_confirm: public Ui_delete_confirm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_CONFIRM_H
