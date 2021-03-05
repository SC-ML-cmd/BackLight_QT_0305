/********************************************************************************
** Form generated from reading UI file 'camera_test.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_TEST_H
#define UI_CAMERA_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_camera_test
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *camera_test)
    {
        if (camera_test->objectName().isEmpty())
            camera_test->setObjectName(QString::fromUtf8("camera_test"));
        camera_test->resize(800, 600);
        menubar = new QMenuBar(camera_test);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        camera_test->setMenuBar(menubar);
        centralwidget = new QWidget(camera_test);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        camera_test->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(camera_test);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        camera_test->setStatusBar(statusbar);

        retranslateUi(camera_test);

        QMetaObject::connectSlotsByName(camera_test);
    } // setupUi

    void retranslateUi(QMainWindow *camera_test)
    {
        camera_test->setWindowTitle(QApplication::translate("camera_test", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class camera_test: public Ui_camera_test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_TEST_H
