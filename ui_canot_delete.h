/********************************************************************************
** Form generated from reading UI file 'canot_delete.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANOT_DELETE_H
#define UI_CANOT_DELETE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_canot_delete
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_3;
    QLabel *label;

    void setupUi(QMainWindow *canot_delete)
    {
        if (canot_delete->objectName().isEmpty())
            canot_delete->setObjectName(QString::fromUtf8("canot_delete"));
        canot_delete->resize(423, 90);
        centralwidget = new QWidget(canot_delete);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 0, 111, 91));
        pushButton_3->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255)"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resourse/shibai.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(60, 60));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 20, 301, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        canot_delete->setCentralWidget(centralwidget);

        retranslateUi(canot_delete);

        QMetaObject::connectSlotsByName(canot_delete);
    } // setupUi

    void retranslateUi(QMainWindow *canot_delete)
    {
        canot_delete->setWindowTitle(QApplication::translate("canot_delete", "MainWindow", nullptr));
        pushButton_3->setText(QString());
        label->setText(QApplication::translate("canot_delete", "\345\206\205\347\275\256\346\250\241\346\235\277\344\272\247\345\223\201\345\236\213\345\217\267\344\270\215\345\217\257\345\210\240\351\231\244\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class canot_delete: public Ui_canot_delete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANOT_DELETE_H
