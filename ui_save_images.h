/********************************************************************************
** Form generated from reading UI file 'save_images.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVE_IMAGES_H
#define UI_SAVE_IMAGES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_save_images
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_cancel;
    QLineEdit *lineEdit_path;
    QPushButton *pushButton_confirm;
    QToolButton *toolButton;
    QComboBox *comboBox;
    QMenuBar *menubar;

    void setupUi(QMainWindow *save_images)
    {
        if (save_images->objectName().isEmpty())
            save_images->setObjectName(QString::fromUtf8("save_images"));
        save_images->resize(323, 206);
        save_images->setMinimumSize(QSize(323, 206));
        save_images->setMaximumSize(QSize(323, 206));
        save_images->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(save_images);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 281, 161));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 20, 80, 17));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(11);
        label_2->setFont(font);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 70, 80, 17));
        label_3->setFont(font);
        pushButton_cancel = new QPushButton(widget);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(180, 130, 61, 23));
        lineEdit_path = new QLineEdit(widget);
        lineEdit_path->setObjectName(QString::fromUtf8("lineEdit_path"));
        lineEdit_path->setGeometry(QRect(101, 21, 133, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("SimSun-ExtB"));
        lineEdit_path->setFont(font1);
        pushButton_confirm = new QPushButton(widget);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        pushButton_confirm->setGeometry(QRect(50, 130, 61, 23));
        toolButton = new QToolButton(widget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(240, 20, 21, 21));
        toolButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resourse/open.png"), QSize(), QIcon::Normal, QIcon::On);
        toolButton->setIcon(icon);
        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(101, 70, 133, 20));
        save_images->setCentralWidget(centralwidget);
        menubar = new QMenuBar(save_images);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 323, 26));
        save_images->setMenuBar(menubar);

        retranslateUi(save_images);

        QMetaObject::connectSlotsByName(save_images);
    } // setupUi

    void retranslateUi(QMainWindow *save_images)
    {
        save_images->setWindowTitle(QApplication::translate("save_images", "\344\277\235\345\255\230\350\256\276\347\275\256", nullptr));
        label_2->setText(QApplication::translate("save_images", "\344\277\235\345\255\230\350\267\257\345\276\204\357\274\232", nullptr));
        label_3->setText(QApplication::translate("save_images", "\344\277\235\345\255\230\350\256\276\347\275\256\357\274\232", nullptr));
        pushButton_cancel->setText(QApplication::translate("save_images", "\345\217\226\346\266\210", nullptr));
        pushButton_confirm->setText(QApplication::translate("save_images", "\347\241\256\350\256\244", nullptr));
        toolButton->setText(QString());
        comboBox->setItemText(0, QApplication::translate("save_images", "\344\270\215\344\277\235\345\255\230\346\240\267\346\234\254", nullptr));
        comboBox->setItemText(1, QApplication::translate("save_images", "\344\277\235\345\255\230\347\274\272\351\231\267\346\240\267\346\234\254", nullptr));
        comboBox->setItemText(2, QApplication::translate("save_images", "\344\277\235\345\255\230\346\211\200\346\234\211\346\240\267\346\234\254", nullptr));

    } // retranslateUi

};

namespace Ui {
    class save_images: public Ui_save_images {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVE_IMAGES_H
