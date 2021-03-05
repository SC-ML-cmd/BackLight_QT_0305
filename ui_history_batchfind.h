/********************************************************************************
** Form generated from reading UI file 'history_batchfind.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORY_BATCHFIND_H
#define UI_HISTORY_BATCHFIND_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_history_batchfind
{
public:
    QWidget *widget;
    QComboBox *Cbx_FindStyle;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btn_Find;
    QLineEdit *Ledt_FindContext;

    void setupUi(QDialog *history_batchfind)
    {
        if (history_batchfind->objectName().isEmpty())
            history_batchfind->setObjectName(QString::fromUtf8("history_batchfind"));
        history_batchfind->resize(330, 133);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resourse/chaxun.png"), QSize(), QIcon::Normal, QIcon::Off);
        history_batchfind->setWindowIcon(icon);
        widget = new QWidget(history_batchfind);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 311, 111));
        Cbx_FindStyle = new QComboBox(widget);
        Cbx_FindStyle->setObjectName(QString::fromUtf8("Cbx_FindStyle"));
        Cbx_FindStyle->setGeometry(QRect(20, 32, 111, 25));
        Cbx_FindStyle->setCursor(QCursor(Qt::ArrowCursor));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 54, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(10);
        label->setFont(font);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 10, 54, 21));
        label_2->setFont(font);
        btn_Find = new QPushButton(widget);
        btn_Find->setObjectName(QString::fromUtf8("btn_Find"));
        btn_Find->setGeometry(QRect(230, 70, 71, 31));
        btn_Find->setFont(font);
        btn_Find->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resourse/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_Find->setIcon(icon1);
        Ledt_FindContext = new QLineEdit(widget);
        Ledt_FindContext->setObjectName(QString::fromUtf8("Ledt_FindContext"));
        Ledt_FindContext->setGeometry(QRect(150, 32, 151, 25));

        retranslateUi(history_batchfind);

        QMetaObject::connectSlotsByName(history_batchfind);
    } // setupUi

    void retranslateUi(QDialog *history_batchfind)
    {
        history_batchfind->setWindowTitle(QApplication::translate("history_batchfind", "\346\237\245\350\257\242", nullptr));
        label->setText(QApplication::translate("history_batchfind", "\346\237\245\350\257\242\346\226\271\345\274\217", nullptr));
        label_2->setText(QApplication::translate("history_batchfind", "\346\237\245\350\257\242\345\206\205\345\256\271", nullptr));
        btn_Find->setText(QApplication::translate("history_batchfind", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class history_batchfind: public Ui_history_batchfind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORY_BATCHFIND_H
