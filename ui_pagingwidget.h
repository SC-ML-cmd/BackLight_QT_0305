/********************************************************************************
** Form generated from reading UI file 'pagingwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGINGWIDGET_H
#define UI_PAGINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_PagingWidget
{
public:
    QLabel *label_Left;
    QLineEdit *Line_CurrentPage;
    QLabel *label_Next;
    QLabel *label_Previous;
    QLabel *label_MaxPage;
    QLabel *label_Right;

    void setupUi(QDialog *PagingWidget)
    {
        if (PagingWidget->objectName().isEmpty())
            PagingWidget->setObjectName(QString::fromUtf8("PagingWidget"));
        PagingWidget->resize(269, 42);
        label_Left = new QLabel(PagingWidget);
        label_Left->setObjectName(QString::fromUtf8("label_Left"));
        label_Left->setGeometry(QRect(45, 10, 16, 21));
        Line_CurrentPage = new QLineEdit(PagingWidget);
        Line_CurrentPage->setObjectName(QString::fromUtf8("Line_CurrentPage"));
        Line_CurrentPage->setGeometry(QRect(91, 10, 50, 21));
        Line_CurrentPage->setMaximumSize(QSize(50, 16777215));
        label_Next = new QLabel(PagingWidget);
        label_Next->setObjectName(QString::fromUtf8("label_Next"));
        label_Next->setGeometry(QRect(187, 10, 16, 21));
        label_Previous = new QLabel(PagingWidget);
        label_Previous->setObjectName(QString::fromUtf8("label_Previous"));
        label_Previous->setGeometry(QRect(68, 10, 16, 21));
        label_MaxPage = new QLabel(PagingWidget);
        label_MaxPage->setObjectName(QString::fromUtf8("label_MaxPage"));
        label_MaxPage->setGeometry(QRect(148, 10, 32, 21));
        label_Right = new QLabel(PagingWidget);
        label_Right->setObjectName(QString::fromUtf8("label_Right"));
        label_Right->setGeometry(QRect(210, 10, 16, 21));

        retranslateUi(PagingWidget);

        QMetaObject::connectSlotsByName(PagingWidget);
    } // setupUi

    void retranslateUi(QDialog *PagingWidget)
    {
        PagingWidget->setWindowTitle(QApplication::translate("PagingWidget", "Dialog", nullptr));
        label_Left->setText(QApplication::translate("PagingWidget", "|<", nullptr));
        label_Next->setText(QApplication::translate("PagingWidget", ">>", nullptr));
        label_Previous->setText(QApplication::translate("PagingWidget", "<<", nullptr));
        label_MaxPage->setText(QApplication::translate("PagingWidget", "/100", nullptr));
        label_Right->setText(QApplication::translate("PagingWidget", ">|", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PagingWidget: public Ui_PagingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGINGWIDGET_H
