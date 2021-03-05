/********************************************************************************
** Form generated from reading UI file 'camera_set_gray.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_SET_GRAY_H
#define UI_CAMERA_SET_GRAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Camera_set_gray
{
public:
    QGridLayout *gridLayout;
    QTableView *Tb_Set_gray_show;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *Camera_set_gray)
    {
        if (Camera_set_gray->objectName().isEmpty())
            Camera_set_gray->setObjectName(QString::fromUtf8("Camera_set_gray"));
        Camera_set_gray->resize(643, 236);
        gridLayout = new QGridLayout(Camera_set_gray);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Tb_Set_gray_show = new QTableView(Camera_set_gray);
        Tb_Set_gray_show->setObjectName(QString::fromUtf8("Tb_Set_gray_show"));

        gridLayout->addWidget(Tb_Set_gray_show, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(541, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButton = new QPushButton(Camera_set_gray);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);


        retranslateUi(Camera_set_gray);

        QMetaObject::connectSlotsByName(Camera_set_gray);
    } // setupUi

    void retranslateUi(QDialog *Camera_set_gray)
    {
        Camera_set_gray->setWindowTitle(QApplication::translate("Camera_set_gray", "\346\240\207\345\207\206\347\201\260\345\272\246\345\200\274", nullptr));
        pushButton->setText(QApplication::translate("Camera_set_gray", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Camera_set_gray: public Ui_Camera_set_gray {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_SET_GRAY_H
