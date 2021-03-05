/********************************************************************************
** Form generated from reading UI file 'copy_confirm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COPY_CONFIRM_H
#define UI_COPY_CONFIRM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Copy_Confirm
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QMainWindow *Copy_Confirm)
    {
        if (Copy_Confirm->objectName().isEmpty())
            Copy_Confirm->setObjectName(QString::fromUtf8("Copy_Confirm"));
        Copy_Confirm->resize(446, 138);
        Copy_Confirm->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255)"));
        centralwidget = new QWidget(Copy_Confirm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 30, 281, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Arabic"));
        font.setPointSize(12);
        label->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 111, 101));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resourse/wancheng.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(80, 80));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 70, 281, 31));
        label_2->setFont(font);
        Copy_Confirm->setCentralWidget(centralwidget);

        retranslateUi(Copy_Confirm);

        QMetaObject::connectSlotsByName(Copy_Confirm);
    } // setupUi

    void retranslateUi(QMainWindow *Copy_Confirm)
    {
        Copy_Confirm->setWindowTitle(QApplication::translate("Copy_Confirm", "MainWindow", nullptr));
        label->setText(QApplication::translate("Copy_Confirm", "\345\217\202\346\225\260\345\267\262\346\210\220\345\212\237\344\273\216\344\272\247\345\223\201\345\236\213\345\217\267888", nullptr));
        pushButton->setText(QString());
        label_2->setText(QApplication::translate("Copy_Confirm", "\345\244\215\345\210\266\345\210\260\344\272\247\345\223\201\345\236\213\345\217\267555", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Copy_Confirm: public Ui_Copy_Confirm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COPY_CONFIRM_H
