/********************************************************************************
** Form generated from reading UI file 'batch_manage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATCH_MANAGE_H
#define UI_BATCH_MANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_batch_manage
{
public:
    QGroupBox *groupBox;
    QLabel *label_5;
    QComboBox *comboBox;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QComboBox *comboBox_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QComboBox *comboBox_3;
    QLineEdit *lineEdit_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QComboBox *comboBox_7;

    void setupUi(QWidget *batch_manage)
    {
        if (batch_manage->objectName().isEmpty())
            batch_manage->setObjectName(QString::fromUtf8("batch_manage"));
        batch_manage->resize(648, 410);
        batch_manage->setStyleSheet(QString::fromUtf8("background-color:rgb(225, 255, 255)"));
        groupBox = new QGroupBox(batch_manage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 601, 371));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"background-color:rgb(240, 255, 255);\n"
"color:rgb(255, 0, 0);\n"
"gridline-color: rgb(255, 255, 255);"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 150, 70, 20));
        label_5->setStyleSheet(QString::fromUtf8("font: 13pt \"\351\273\221\344\275\223\";\n"
"COLOR:rgb(0, 0, 0)"));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(120, 110, 180, 25));
        comboBox->setStyleSheet(QString::fromUtf8("font: 13pt \"\351\273\221\344\275\223\";\n"
"backgroundcolor:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0)"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 70, 20));
        label->setStyleSheet(QString::fromUtf8("font: 13pt \"\351\273\221\344\275\223\";\n"
"COLOR:rgb(0, 0, 0)"));
        label->setMargin(-1);
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(120, 270, 180, 25));
        lineEdit_3->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"backgroundcolor:rgb(255, 255, 255)"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 110, 70, 20));
        label_3->setStyleSheet(QString::fromUtf8("font: 13pt \"\351\273\221\344\275\223\";\n"
"COLOR:rgb(0, 0, 0)"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 70, 70, 20));
        label_2->setStyleSheet(QString::fromUtf8("font: 13pt \"\351\273\221\344\275\223\";\n"
"COLOR:rgb(0, 0, 0)"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 270, 70, 20));
        label_4->setStyleSheet(QString::fromUtf8("font: 13pt \"\351\273\221\344\275\223\";\n"
"COLOR:rgb(0, 0, 0)"));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 70, 180, 25));
        lineEdit_2->setStyleSheet(QString::fromUtf8("font: 13pt \"\351\273\221\344\275\223\";\n"
"backgroundcolor:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0)"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 30, 180, 25));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 13pt \"\351\273\221\344\275\223\";\n"
"backgroundcolor:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0)"));
        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(120, 150, 180, 25));
        comboBox_2->setStyleSheet(QString::fromUtf8("font: 13pt \"\351\273\221\344\275\223\";\n"
"backgroundcolor:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0)"));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(500, 320, 80, 28));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";\n"
"backgroundcolor:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0)"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 320, 80, 28));
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";\n"
"backgroundcolor:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0)"));
        comboBox_3 = new QComboBox(groupBox);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(120, 190, 180, 25));
        comboBox_3->setStyleSheet(QString::fromUtf8("font: 13pt \"\351\273\221\344\275\223\";\n"
"backgroundcolor:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0)"));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(120, 230, 180, 25));
        lineEdit_4->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"backgroundcolor:rgb(255, 255, 255)"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 190, 70, 20));
        label_6->setStyleSheet(QString::fromUtf8("font: 13pt \"\351\273\221\344\275\223\";\n"
"COLOR:rgb(0, 0, 0)"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 230, 70, 20));
        label_7->setStyleSheet(QString::fromUtf8("font: 13pt \"\351\273\221\344\275\223\";\n"
"COLOR:rgb(0, 0, 0)"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(330, 30, 70, 20));
        label_8->setStyleSheet(QString::fromUtf8("font: 13pt \"\351\273\221\344\275\223\";\n"
"COLOR:rgb(0, 0, 0)"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(330, 70, 70, 20));
        label_9->setStyleSheet(QString::fromUtf8("font: 13pt \"\351\273\221\344\275\223\";\n"
"COLOR:rgb(0, 0, 0)"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(330, 110, 70, 20));
        label_10->setStyleSheet(QString::fromUtf8("font: 13pt \"\351\273\221\344\275\223\";\n"
"COLOR:rgb(0, 0, 0)"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(330, 150, 70, 20));
        label_11->setStyleSheet(QString::fromUtf8("font: 13pt \"\351\273\221\344\275\223\";\n"
"COLOR:rgb(0, 0, 0)"));
        comboBox_4 = new QComboBox(groupBox);
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(410, 30, 180, 25));
        comboBox_4->setStyleSheet(QString::fromUtf8("font: 13pt \"\351\273\221\344\275\223\";\n"
"backgroundcolor:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0)"));
        comboBox_5 = new QComboBox(groupBox);
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setGeometry(QRect(410, 70, 180, 25));
        comboBox_5->setStyleSheet(QString::fromUtf8("font: 13pt \"\351\273\221\344\275\223\";\n"
"backgroundcolor:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0)"));
        comboBox_6 = new QComboBox(groupBox);
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        comboBox_6->setGeometry(QRect(410, 110, 180, 25));
        comboBox_6->setStyleSheet(QString::fromUtf8("font: 13pt \"\351\273\221\344\275\223\";\n"
"backgroundcolor:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0)"));
        comboBox_7 = new QComboBox(groupBox);
        comboBox_7->addItem(QString());
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));
        comboBox_7->setGeometry(QRect(410, 150, 180, 25));
        comboBox_7->setStyleSheet(QString::fromUtf8("font: 13pt \"\351\273\221\344\275\223\";\n"
"backgroundcolor:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0)"));

        retranslateUi(batch_manage);

        QMetaObject::connectSlotsByName(batch_manage);
    } // setupUi

    void retranslateUi(QWidget *batch_manage)
    {
        batch_manage->setWindowTitle(QApplication::translate("batch_manage", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("batch_manage", "\344\272\247\345\223\201\346\211\271\346\254\241", nullptr));
        label_5->setText(QApplication::translate("batch_manage", "\344\272\247\345\223\201\347\261\273\345\236\213", nullptr));
        label->setText(QApplication::translate("batch_manage", "\346\211\271\346\254\241", nullptr));
        label_3->setText(QApplication::translate("batch_manage", "\344\272\247\345\223\201\345\260\272\345\257\270", nullptr));
        label_2->setText(QApplication::translate("batch_manage", "\346\227\245\346\234\237", nullptr));
        label_4->setText(QApplication::translate("batch_manage", "\345\210\233\345\273\272\344\272\272", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("batch_manage", "\347\233\264\350\247\222\345\261\217", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("batch_manage", "R\350\247\222\346\260\264\346\273\264", nullptr));

        pushButton_2->setText(QApplication::translate("batch_manage", "\345\217\226\346\266\210", nullptr));
        pushButton->setText(QApplication::translate("batch_manage", "\347\241\256\345\256\232", nullptr));
        comboBox_3->setItemText(0, QApplication::translate("batch_manage", "\346\227\240\345\261\217\350\224\275", nullptr));
        comboBox_3->setItemText(1, QApplication::translate("batch_manage", "\345\261\217\350\224\275\345\261\217\350\224\275\345\267\246\344\276\247", nullptr));
        comboBox_3->setItemText(2, QApplication::translate("batch_manage", "\345\261\217\350\224\275\345\261\217\345\271\225\345\217\263\344\276\247", nullptr));

        label_6->setText(QApplication::translate("batch_manage", "\345\261\217\350\224\275\345\214\272\345\237\237", nullptr));
        label_7->setText(QApplication::translate("batch_manage", "\345\261\217\345\271\225\345\236\213\345\217\267", nullptr));
        label_8->setText(QApplication::translate("batch_manage", "\345\210\206\350\276\250\347\216\207", nullptr));
        label_9->setText(QApplication::translate("batch_manage", "\345\210\267\345\261\217\346\226\271\345\274\217", nullptr));
        label_10->setText(QApplication::translate("batch_manage", "\345\244\226\345\275\242\345\260\272\345\257\270", nullptr));
        label_11->setText(QApplication::translate("batch_manage", "\351\205\215\347\275\256\346\226\271\346\241\210", nullptr));
        comboBox_4->setItemText(0, QApplication::translate("batch_manage", "720*1280", nullptr));

        comboBox_5->setItemText(0, QApplication::translate("batch_manage", "\346\255\243\346\211\253", nullptr));

        comboBox_6->setItemText(0, QApplication::translate("batch_manage", "L*w*h", nullptr));

        comboBox_7->setItemText(0, QApplication::translate("batch_manage", "\347\216\273\347\222\203COG", nullptr));

    } // retranslateUi

};

namespace Ui {
    class batch_manage: public Ui_batch_manage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATCH_MANAGE_H
