/********************************************************************************
** Form generated from reading UI file 'modify_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFY_WINDOW_H
#define UI_MODIFY_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modify_window
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QTextEdit *textEdit_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QTextEdit *textEdit_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_2;

    void setupUi(QDialog *modify_window)
    {
        if (modify_window->objectName().isEmpty())
            modify_window->setObjectName(QString::fromUtf8("modify_window"));
        modify_window->resize(654, 264);
        modify_window->setMinimumSize(QSize(654, 264));
        modify_window->setMaximumSize(QSize(654, 264));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("\344\277\256\346\224\271");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/resourse/xiugaiq.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        modify_window->setWindowIcon(icon);
        pushButton = new QPushButton(modify_window);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 200, 93, 28));
        widget = new QWidget(modify_window);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 40, 591, 141));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(120, 30));
        label->setMaximumSize(QSize(90, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(10);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setMinimumSize(QSize(160, 30));
        textEdit->setMaximumSize(QSize(160, 30));
        textEdit->setFont(font);

        horizontalLayout->addWidget(textEdit);


        formLayout->setLayout(0, QFormLayout::LabelRole, horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(90, 30));
        label_2->setMaximumSize(QSize(90, 29));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        textEdit_2 = new QTextEdit(widget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setMinimumSize(QSize(160, 30));
        textEdit_2->setMaximumSize(QSize(160, 30));
        textEdit_2->setFont(font);

        horizontalLayout_2->addWidget(textEdit_2);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::LabelRole, verticalSpacer_2);

        verticalSpacer_5 = new QSpacerItem(256, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::FieldRole, verticalSpacer_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(120, 30));
        label_3->setMaximumSize(QSize(120, 30));
        label_3->setSizeIncrement(QSize(0, 3));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        textEdit_3 = new QTextEdit(widget);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setMinimumSize(QSize(160, 30));
        textEdit_3->setMaximumSize(QSize(160, 30));
        textEdit_3->setFont(font);

        horizontalLayout_3->addWidget(textEdit_3);


        formLayout->setLayout(2, QFormLayout::LabelRole, horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(90, 0));
        label_4->setMaximumSize(QSize(90, 30));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(160, 30));
        label_5->setMaximumSize(QSize(160, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(9);
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_5->setFrameShape(QFrame::Box);

        horizontalLayout_4->addWidget(label_5);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_4);

        pushButton_2 = new QPushButton(modify_window);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 200, 93, 28));

        retranslateUi(modify_window);

        QMetaObject::connectSlotsByName(modify_window);
    } // setupUi

    void retranslateUi(QDialog *modify_window)
    {
        modify_window->setWindowTitle(QApplication::translate("modify_window", "\344\277\256\346\224\271", nullptr));
        pushButton->setText(QApplication::translate("modify_window", "\347\241\256\350\256\244", nullptr));
        label->setText(QApplication::translate("modify_window", "\347\224\237\344\272\247\346\211\271\346\254\241\347\274\226\347\240\201\357\274\232", nullptr));
        label_2->setText(QApplication::translate("modify_window", "\347\224\237\344\272\247\346\211\271\346\254\241\357\274\232", nullptr));
        label_3->setText(QApplication::translate("modify_window", "    \344\272\247\345\223\201\345\236\213\345\217\267\357\274\232", nullptr));
        label_4->setText(QApplication::translate("modify_window", "\345\210\233\345\273\272\346\227\266\351\227\264\357\274\232", nullptr));
        label_5->setText(QString());
        pushButton_2->setText(QApplication::translate("modify_window", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modify_window: public Ui_modify_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFY_WINDOW_H
