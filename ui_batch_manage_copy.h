/********************************************************************************
** Form generated from reading UI file 'batch_manage_copy.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATCH_MANAGE_COPY_H
#define UI_BATCH_MANAGE_COPY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_batch_manage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QComboBox *comboBox_2;
    QLabel *label_5;

    void setupUi(QWidget *batch_manage)
    {
        if (batch_manage->objectName().isEmpty())
            batch_manage->setObjectName(QString::fromUtf8("batch_manage"));
        batch_manage->resize(318, 342);
        label = new QLabel(batch_manage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 41, 21));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"Agency FB\";\n"
"font: 14pt \"\351\273\221\344\275\223\";"));
        label->setMargin(-1);
        label_2 = new QLabel(batch_manage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 90, 71, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Agency FB\";\n"
"font: 14pt \"\351\273\221\344\275\223\";"));
        label_3 = new QLabel(batch_manage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 140, 91, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 14pt \"Agency FB\";\n"
"font: 14pt \"\351\273\221\344\275\223\";"));
        label_4 = new QLabel(batch_manage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 240, 81, 21));
        label_4->setStyleSheet(QString::fromUtf8("font: 14pt \"Agency FB\";\n"
"font: 14pt \"\351\273\221\344\275\223\";"));
        comboBox = new QComboBox(batch_manage);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(120, 140, 140, 25));
        comboBox->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        lineEdit = new QLineEdit(batch_manage);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 40, 140, 25));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        lineEdit_2 = new QLineEdit(batch_manage);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 90, 140, 25));
        lineEdit_2->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        lineEdit_3 = new QLineEdit(batch_manage);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(120, 240, 140, 25));
        lineEdit_3->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        pushButton = new QPushButton(batch_manage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 290, 91, 31));
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("font: 14pt \"Agency FB\";\n"
"font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 0, 0)"));
        comboBox_2 = new QComboBox(batch_manage);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(120, 190, 140, 25));
        label_5 = new QLabel(batch_manage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 190, 111, 21));
        label_5->setStyleSheet(QString::fromUtf8("font: 14pt \"Agency FB\";\n"
"font: 14pt \"\351\273\221\344\275\223\";"));

        retranslateUi(batch_manage);

        QMetaObject::connectSlotsByName(batch_manage);
    } // setupUi

    void retranslateUi(QWidget *batch_manage)
    {
        batch_manage->setWindowTitle(QApplication::translate("batch_manage", "Form", nullptr));
        label->setText(QApplication::translate("batch_manage", "\346\211\271\346\254\241", nullptr));
        label_2->setText(QApplication::translate("batch_manage", "\346\227\245\346\234\237", nullptr));
        label_3->setText(QApplication::translate("batch_manage", "\344\272\247\345\223\201\345\260\272\345\257\270", nullptr));
        label_4->setText(QApplication::translate("batch_manage", "\345\210\233\345\273\272\344\272\272", nullptr));
        pushButton->setText(QApplication::translate("batch_manage", "\347\241\256\345\256\232", nullptr));
        label_5->setText(QApplication::translate("batch_manage", "\344\272\247\345\223\201\347\261\273\345\236\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class batch_manage: public Ui_batch_manage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATCH_MANAGE_COPY_H
