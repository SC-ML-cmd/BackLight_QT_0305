/********************************************************************************
** Form generated from reading UI file 'production_feature_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTION_FEATURE_WINDOW_H
#define UI_PRODUCTION_FEATURE_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_production_feature_window
{
public:
    QWidget *horizontalLayoutWidget_11;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QLineEdit *lineEdit_8;
    QWidget *horizontalLayoutWidget_12;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QLineEdit *lineEdit_9;
    QWidget *horizontalLayoutWidget_10;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLineEdit *lineEdit_7;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QWidget *horizontalLayoutWidget_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *lineEdit_6;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEdit_5;

    void setupUi(QDialog *production_feature_window)
    {
        if (production_feature_window->objectName().isEmpty())
            production_feature_window->setObjectName(QString::fromUtf8("production_feature_window"));
        production_feature_window->resize(525, 377);
        production_feature_window->setMinimumSize(QSize(525, 377));
        production_feature_window->setMaximumSize(QSize(525, 377));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("\344\272\247\345\223\201\345\236\213\345\217\267");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/resourse/canshu.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        production_feature_window->setWindowIcon(icon);
        horizontalLayoutWidget_11 = new QWidget(production_feature_window);
        horizontalLayoutWidget_11->setObjectName(QString::fromUtf8("horizontalLayoutWidget_11"));
        horizontalLayoutWidget_11->setGeometry(QRect(280, 240, 209, 51));
        QFont font;
        font.setStyleStrategy(QFont::NoAntialias);
        horizontalLayoutWidget_11->setFont(font);
        horizontalLayout_11 = new QHBoxLayout(horizontalLayoutWidget_11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(horizontalLayoutWidget_11);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(100, 49));
        label_11->setMaximumSize(QSize(100, 50));
        label_11->setBaseSize(QSize(0, 1));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(12);
        font1.setStyleStrategy(QFont::NoAntialias);
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_11->addWidget(label_11);

        lineEdit_8 = new QLineEdit(horizontalLayoutWidget_11);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setMinimumSize(QSize(100, 28));
        lineEdit_8->setMaximumSize(QSize(100, 26));
        lineEdit_8->setFont(font);
        lineEdit_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_11->addWidget(lineEdit_8);

        horizontalLayoutWidget_12 = new QWidget(production_feature_window);
        horizontalLayoutWidget_12->setObjectName(QString::fromUtf8("horizontalLayoutWidget_12"));
        horizontalLayoutWidget_12->setGeometry(QRect(30, 30, 209, 51));
        horizontalLayoutWidget_12->setFont(font);
        horizontalLayout_12 = new QHBoxLayout(horizontalLayoutWidget_12);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(horizontalLayoutWidget_12);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(100, 49));
        label_12->setMaximumSize(QSize(100, 50));
        label_12->setBaseSize(QSize(0, 1));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_12->addWidget(label_12);

        lineEdit_9 = new QLineEdit(horizontalLayoutWidget_12);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setMinimumSize(QSize(100, 28));
        lineEdit_9->setMaximumSize(QSize(100, 26));
        lineEdit_9->setFont(font);
        lineEdit_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_12->addWidget(lineEdit_9);

        horizontalLayoutWidget_10 = new QWidget(production_feature_window);
        horizontalLayoutWidget_10->setObjectName(QString::fromUtf8("horizontalLayoutWidget_10"));
        horizontalLayoutWidget_10->setGeometry(QRect(280, 170, 209, 51));
        horizontalLayoutWidget_10->setFont(font);
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_10);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(horizontalLayoutWidget_10);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(100, 49));
        label_10->setMaximumSize(QSize(100, 50));
        label_10->setBaseSize(QSize(0, 1));
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_10->addWidget(label_10);

        lineEdit_7 = new QLineEdit(horizontalLayoutWidget_10);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setMinimumSize(QSize(100, 28));
        lineEdit_7->setMaximumSize(QSize(100, 26));
        lineEdit_7->setFont(font);
        lineEdit_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_10->addWidget(lineEdit_7);

        horizontalLayoutWidget_6 = new QWidget(production_feature_window);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(280, 30, 209, 51));
        horizontalLayoutWidget_6->setFont(font);
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(horizontalLayoutWidget_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(100, 49));
        label_6->setMaximumSize(QSize(100, 54));
        label_6->setBaseSize(QSize(0, 1));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_6->addWidget(label_6);

        lineEdit_3 = new QLineEdit(horizontalLayoutWidget_6);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(100, 28));
        lineEdit_3->setMaximumSize(QSize(100, 26));
        lineEdit_3->setFont(font);
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(lineEdit_3);

        horizontalLayoutWidget_7 = new QWidget(production_feature_window);
        horizontalLayoutWidget_7->setObjectName(QString::fromUtf8("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(30, 170, 209, 51));
        horizontalLayoutWidget_7->setFont(font);
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(100, 49));
        label_7->setMaximumSize(QSize(100, 50));
        label_7->setBaseSize(QSize(0, 1));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_7->addWidget(label_7);

        lineEdit_4 = new QLineEdit(horizontalLayoutWidget_7);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(100, 28));
        lineEdit_4->setMaximumSize(QSize(100, 26));
        lineEdit_4->setFont(font);
        lineEdit_4->setStyleSheet(QString::fromUtf8("border-color: rgb(85, 255, 127);\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(lineEdit_4);

        pushButton = new QPushButton(production_feature_window);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 319, 93, 28));
        pushButton->setFont(font);
        pushButton->setAutoRepeatDelay(295);
        horizontalLayoutWidget_5 = new QWidget(production_feature_window);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(30, 100, 209, 51));
        horizontalLayoutWidget_5->setFont(font);
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(100, 49));
        label_5->setMaximumSize(QSize(100, 50));
        label_5->setBaseSize(QSize(0, 1));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_2 = new QLineEdit(horizontalLayoutWidget_5);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(100, 28));
        lineEdit_2->setMaximumSize(QSize(100, 26));
        lineEdit_2->setFont(font);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(lineEdit_2);

        horizontalLayoutWidget_9 = new QWidget(production_feature_window);
        horizontalLayoutWidget_9->setObjectName(QString::fromUtf8("horizontalLayoutWidget_9"));
        horizontalLayoutWidget_9->setGeometry(QRect(30, 240, 209, 51));
        horizontalLayoutWidget_9->setFont(font);
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_9);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(horizontalLayoutWidget_9);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(100, 49));
        label_9->setMaximumSize(QSize(100, 50));
        label_9->setBaseSize(QSize(0, 1));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_9->addWidget(label_9);

        lineEdit_6 = new QLineEdit(horizontalLayoutWidget_9);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setMinimumSize(QSize(100, 28));
        lineEdit_6->setMaximumSize(QSize(100, 26));
        lineEdit_6->setFont(font);
        lineEdit_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_9->addWidget(lineEdit_6);

        horizontalLayoutWidget_8 = new QWidget(production_feature_window);
        horizontalLayoutWidget_8->setObjectName(QString::fromUtf8("horizontalLayoutWidget_8"));
        horizontalLayoutWidget_8->setGeometry(QRect(280, 100, 209, 51));
        horizontalLayoutWidget_8->setFont(font);
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_8);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(horizontalLayoutWidget_8);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(100, 49));
        label_8->setMaximumSize(QSize(100, 50));
        label_8->setBaseSize(QSize(0, 1));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_8->addWidget(label_8);

        lineEdit_5 = new QLineEdit(horizontalLayoutWidget_8);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setMinimumSize(QSize(100, 28));
        lineEdit_5->setMaximumSize(QSize(100, 26));
        lineEdit_5->setFont(font);
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);border-color: rgb(85, 255, 127);"));

        horizontalLayout_8->addWidget(lineEdit_5);


        retranslateUi(production_feature_window);

        QMetaObject::connectSlotsByName(production_feature_window);
    } // setupUi

    void retranslateUi(QDialog *production_feature_window)
    {
        production_feature_window->setWindowTitle(QApplication::translate("production_feature_window", "\345\236\213\345\217\267\347\211\271\345\276\201", nullptr));
        label_11->setText(QApplication::translate("production_feature_window", "\345\261\217\345\271\225\345\214\272\345\237\237\357\274\232", nullptr));
        label_12->setText(QApplication::translate("production_feature_window", "\344\272\247\345\223\201\345\236\213\345\217\267\357\274\232", nullptr));
        label_10->setText(QApplication::translate("production_feature_window", "\346\226\271\346\241\210\351\205\215\347\275\256\357\274\232", nullptr));
        label_6->setText(QApplication::translate("production_feature_window", "\345\244\226\345\275\242\345\260\272\345\257\270\357\274\232", nullptr));
        label_7->setText(QApplication::translate("production_feature_window", "\345\210\206 \350\276\250 \347\216\207\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("production_feature_window", "\347\241\256\345\256\232", nullptr));
        label_5->setText(QApplication::translate("production_feature_window", "\345\261\217\345\271\225\347\261\273\345\236\213\357\274\232", nullptr));
        label_9->setText(QApplication::translate("production_feature_window", "\345\261\217\345\271\225\345\260\272\345\257\270\357\274\232", nullptr));
        label_8->setText(QApplication::translate("production_feature_window", "\345\210\267\345\261\217\346\226\271\345\274\217\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class production_feature_window: public Ui_production_feature_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTION_FEATURE_WINDOW_H
