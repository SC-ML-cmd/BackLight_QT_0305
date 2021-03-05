/********************************************************************************
** Form generated from reading UI file 'find_win.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIND_WIN_H
#define UI_FIND_WIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_find_win
{
public:
    QWidget *widget;
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QTableView *tableView;

    void setupUi(QDialog *find_win)
    {
        if (find_win->objectName().isEmpty())
            find_win->setObjectName(QString::fromUtf8("find_win"));
        find_win->resize(911, 652);
        find_win->setMinimumSize(QSize(911, 652));
        find_win->setMaximumSize(QSize(911, 652));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resourse/chaxun.png"), QSize(), QIcon::Normal, QIcon::Off);
        find_win->setWindowIcon(icon);
        widget = new QWidget(find_win);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(-10, 0, 931, 61));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(214, 219, 233);"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(720, 20, 31, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\350\210\222\344\275\223"));
        font.setPointSize(10);
        font.setItalic(false);
        font.setUnderline(false);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 237, 237);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resourse/\346\220\234\347\264\242.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(20, 20));
        horizontalLayoutWidget_4 = new QWidget(widget);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(60, 10, 617, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(horizontalLayoutWidget_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(60, 0));
        label->setMaximumSize(QSize(60, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(horizontalLayoutWidget_4);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(100, 0));
        comboBox->setMaximumSize(QSize(100, 16777215));
        QFont font2;
        font2.setPointSize(10);
        comboBox->setFont(font2);

        horizontalLayout->addWidget(comboBox);


        horizontalLayout_5->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(horizontalLayoutWidget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(90, 16777215));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        comboBox_2 = new QComboBox(horizontalLayoutWidget_4);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(100, 0));
        comboBox_2->setMaximumSize(QSize(100, 16777215));
        comboBox_2->setFont(font2);

        horizontalLayout_2->addWidget(comboBox_2);


        horizontalLayout_5->addLayout(horizontalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(horizontalLayoutWidget_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(90, 0));
        label_3->setMaximumSize(QSize(90, 16777215));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        lineEdit = new QLineEdit(horizontalLayoutWidget_4);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(120, 0));
        lineEdit->setMaximumSize(QSize(120, 16777215));
        lineEdit->setBaseSize(QSize(0, 0));
        lineEdit->setFont(font2);

        horizontalLayout_3->addWidget(lineEdit);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        tableView = new QTableView(find_win);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 60, 911, 591));

        retranslateUi(find_win);

        QMetaObject::connectSlotsByName(find_win);
    } // setupUi

    void retranslateUi(QDialog *find_win)
    {
        find_win->setWindowTitle(QApplication::translate("find_win", "\346\237\245\350\257\242", nullptr));
        pushButton->setText(QString());
        label->setText(QApplication::translate("find_win", "\346\227\245\346\234\237\357\274\232", nullptr));
        label_2->setText(QApplication::translate("find_win", "\344\272\247\345\223\201\345\236\213\345\217\267\357\274\232", nullptr));
        label_3->setText(QApplication::translate("find_win", "\347\224\237\344\272\247\346\211\271\346\254\241\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class find_win: public Ui_find_win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIND_WIN_H
