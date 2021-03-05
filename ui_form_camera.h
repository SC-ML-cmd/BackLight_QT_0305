/********************************************************************************
** Form generated from reading UI file 'form_camera.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_CAMERA_H
#define UI_FORM_CAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_Camera
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_8;
    QLabel *label_Device_List;
    QComboBox *comboBox_Device_List;
    QLabel *label_10;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton_10;
    QPushButton *pushButton_find_product;
    QLabel *label_9;
    QComboBox *comboBox_Pro_Mode;
    QLabel *label_8;
    QComboBox *comboBox_product_type;
    QLabel *label_7;
    QComboBox *comboBox_Adaptive_exposure_list;
    QPushButton *pushButton_Adaptive_exposure;
    QPushButton *pushButton_manualExposure;
    QPushButton *pushButton_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *lineEdit_Camera_Name_1;
    QPushButton *pushButton_Add_View_1;
    QPushButton *pushButton_Remove_View_1;
    QPushButton *pushButton_Full_Screen_1;
    QLabel *label_PreView_1;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *spinBox_1;
    QSlider *horizontalSlider;
    QLabel *label_c1;
    QWidget *widget_13;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *lineEdit_Camera_Name_2;
    QPushButton *pushButton_Add_View_2;
    QPushButton *pushButton_Remove_View_2;
    QPushButton *pushButton_Full_Screen_2;
    QLabel *label_PreView_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpinBox *spinBox_2;
    QSlider *horizontalSlider_2;
    QLabel *label_c2;
    QWidget *widget_15;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_14;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *lineEdit_Camera_Name_3;
    QPushButton *pushButton_Add_View_3;
    QPushButton *pushButton_Remove_View_3;
    QPushButton *pushButton_Full_Screen_3;
    QLabel *label_PreView_3;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpinBox *spinBox_3;
    QSlider *horizontalSlider_3;
    QLabel *label_c3;
    QWidget *widget_17;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_16;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *lineEdit_Camera_Name_4;
    QPushButton *pushButton_Add_View_4;
    QPushButton *pushButton_Remove_View_4;
    QPushButton *pushButton_Full_Screen_4;
    QLabel *label_PreView_4;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QSpinBox *spinBox_4;
    QSlider *horizontalSlider_4;
    QLabel *label_c4;
    QWidget *widget_19;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_18;
    QHBoxLayout *horizontalLayout_12;
    QLineEdit *lineEdit_Camera_Name_5;
    QPushButton *pushButton_Add_View_5;
    QPushButton *pushButton_Remove_View_5;
    QPushButton *pushButton_Full_Screen_5;
    QLabel *label_PreView_5;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QSpinBox *spinBox_5;
    QSlider *horizontalSlider_5;
    QLabel *label_c5;
    QWidget *widget_21;
    QVBoxLayout *verticalLayout_8;
    QWidget *widget_20;
    QHBoxLayout *horizontalLayout_13;
    QLineEdit *lineEdit_Camera_Name_6;
    QPushButton *pushButton_Add_View_6;
    QPushButton *pushButton_Remove_View_6;
    QPushButton *pushButton_Full_Screen_6;
    QLabel *label_PreView_6;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QSpinBox *spinBox_6;
    QSlider *horizontalSlider_6;
    QLabel *label_c6;

    void setupUi(QWidget *Form_Camera)
    {
        if (Form_Camera->objectName().isEmpty())
            Form_Camera->setObjectName(QString::fromUtf8("Form_Camera"));
        Form_Camera->resize(1389, 817);
        Form_Camera->setStyleSheet(QString::fromUtf8("background-color: rgb(112, 112, 112);"));
        horizontalLayout = new QHBoxLayout(Form_Camera);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget_2 = new QWidget(Form_Camera);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(150, 0));
        widget_2->setMaximumSize(QSize(500, 16777215));
        QFont font;
        font.setPointSize(12);
        widget_2->setFont(font);
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("font: 12pt \"Agency FB\";\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton);

        pushButton_8 = new QPushButton(widget_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setStyleSheet(QString::fromUtf8("font: 12pt \"Agency FB\";\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_8);

        label_Device_List = new QLabel(widget_2);
        label_Device_List->setObjectName(QString::fromUtf8("label_Device_List"));
        label_Device_List->setStyleSheet(QString::fromUtf8("font: 12pt \"Agency FB\";"));

        verticalLayout->addWidget(label_Device_List);

        comboBox_Device_List = new QComboBox(widget_2);
        comboBox_Device_List->setObjectName(QString::fromUtf8("comboBox_Device_List"));
        comboBox_Device_List->setMinimumSize(QSize(80, 0));
        comboBox_Device_List->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 14pt \"Agency FB\";"));

        verticalLayout->addWidget(comboBox_Device_List);

        label_10 = new QLabel(widget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout->addWidget(label_10);

        verticalSpacer = new QSpacerItem(20, 330, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(12);
        pushButton_2->setFont(font1);

        verticalLayout->addWidget(pushButton_2);

        pushButton_10 = new QPushButton(widget_2);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setFont(font1);
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_10);

        pushButton_find_product = new QPushButton(widget_2);
        pushButton_find_product->setObjectName(QString::fromUtf8("pushButton_find_product"));
        pushButton_find_product->setEnabled(true);
        pushButton_find_product->setFont(font);
        pushButton_find_product->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_find_product);

        label_9 = new QLabel(widget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        verticalLayout->addWidget(label_9);

        comboBox_Pro_Mode = new QComboBox(widget_2);
        comboBox_Pro_Mode->setObjectName(QString::fromUtf8("comboBox_Pro_Mode"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Agency FB"));
        font2.setPointSize(14);
        comboBox_Pro_Mode->setFont(font2);
        comboBox_Pro_Mode->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));

        verticalLayout->addWidget(comboBox_Pro_Mode);

        label_8 = new QLabel(widget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        verticalLayout->addWidget(label_8);

        comboBox_product_type = new QComboBox(widget_2);
        comboBox_product_type->setObjectName(QString::fromUtf8("comboBox_product_type"));
        comboBox_product_type->setFont(font2);
        comboBox_product_type->setContextMenuPolicy(Qt::DefaultContextMenu);
        comboBox_product_type->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 14pt \"Agency FB\";\n"
""));

        verticalLayout->addWidget(comboBox_product_type);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);

        comboBox_Adaptive_exposure_list = new QComboBox(widget_2);
        comboBox_Adaptive_exposure_list->setObjectName(QString::fromUtf8("comboBox_Adaptive_exposure_list"));
        comboBox_Adaptive_exposure_list->setFont(font2);
        comboBox_Adaptive_exposure_list->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 14pt \"Agency FB\";\n"
""));

        verticalLayout->addWidget(comboBox_Adaptive_exposure_list);

        pushButton_Adaptive_exposure = new QPushButton(widget_2);
        pushButton_Adaptive_exposure->setObjectName(QString::fromUtf8("pushButton_Adaptive_exposure"));
        pushButton_Adaptive_exposure->setFont(font1);
        pushButton_Adaptive_exposure->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_Adaptive_exposure);

        pushButton_manualExposure = new QPushButton(widget_2);
        pushButton_manualExposure->setObjectName(QString::fromUtf8("pushButton_manualExposure"));
        pushButton_manualExposure->setFont(font1);
        pushButton_manualExposure->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_manualExposure);

        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_3);


        horizontalLayout->addWidget(widget_2);

        widget = new QWidget(Form_Camera);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 255, 255);"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_11 = new QWidget(widget);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        verticalLayout_3 = new QVBoxLayout(widget_11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_10 = new QWidget(widget_11);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        horizontalLayout_8 = new QHBoxLayout(widget_10);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        lineEdit_Camera_Name_1 = new QLineEdit(widget_10);
        lineEdit_Camera_Name_1->setObjectName(QString::fromUtf8("lineEdit_Camera_Name_1"));
        lineEdit_Camera_Name_1->setStyleSheet(QString::fromUtf8("font: 12pt \"Agency FB\";\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_8->addWidget(lineEdit_Camera_Name_1);

        pushButton_Add_View_1 = new QPushButton(widget_10);
        pushButton_Add_View_1->setObjectName(QString::fromUtf8("pushButton_Add_View_1"));
        pushButton_Add_View_1->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));

        horizontalLayout_8->addWidget(pushButton_Add_View_1);

        pushButton_Remove_View_1 = new QPushButton(widget_10);
        pushButton_Remove_View_1->setObjectName(QString::fromUtf8("pushButton_Remove_View_1"));
        pushButton_Remove_View_1->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));

        horizontalLayout_8->addWidget(pushButton_Remove_View_1);

        pushButton_Full_Screen_1 = new QPushButton(widget_10);
        pushButton_Full_Screen_1->setObjectName(QString::fromUtf8("pushButton_Full_Screen_1"));
        pushButton_Full_Screen_1->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));

        horizontalLayout_8->addWidget(pushButton_Full_Screen_1);


        verticalLayout_3->addWidget(widget_10);

        label_PreView_1 = new QLabel(widget_11);
        label_PreView_1->setObjectName(QString::fromUtf8("label_PreView_1"));
        sizePolicy.setHeightForWidth(label_PreView_1->sizePolicy().hasHeightForWidth());
        label_PreView_1->setSizePolicy(sizePolicy);
        label_PreView_1->setMinimumSize(QSize(100, 100));
        label_PreView_1->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(label_PreView_1);

        widget_4 = new QWidget(widget_11);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget_4);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(label);

        spinBox_1 = new QSpinBox(widget_4);
        spinBox_1->setObjectName(QString::fromUtf8("spinBox_1"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(spinBox_1->sizePolicy().hasHeightForWidth());
        spinBox_1->setSizePolicy(sizePolicy2);
        spinBox_1->setMaximumSize(QSize(100, 16777215));
        spinBox_1->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));

        horizontalLayout_2->addWidget(spinBox_1);

        horizontalSlider = new QSlider(widget_4);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider);

        label_c1 = new QLabel(widget_4);
        label_c1->setObjectName(QString::fromUtf8("label_c1"));
        label_c1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(label_c1);


        verticalLayout_3->addWidget(widget_4);


        gridLayout->addWidget(widget_11, 0, 0, 1, 1);

        widget_13 = new QWidget(widget);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        verticalLayout_4 = new QVBoxLayout(widget_13);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        widget_12 = new QWidget(widget_13);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        horizontalLayout_9 = new QHBoxLayout(widget_12);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        lineEdit_Camera_Name_2 = new QLineEdit(widget_12);
        lineEdit_Camera_Name_2->setObjectName(QString::fromUtf8("lineEdit_Camera_Name_2"));
        lineEdit_Camera_Name_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Agency FB\";\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_9->addWidget(lineEdit_Camera_Name_2);

        pushButton_Add_View_2 = new QPushButton(widget_12);
        pushButton_Add_View_2->setObjectName(QString::fromUtf8("pushButton_Add_View_2"));
        pushButton_Add_View_2->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));

        horizontalLayout_9->addWidget(pushButton_Add_View_2);

        pushButton_Remove_View_2 = new QPushButton(widget_12);
        pushButton_Remove_View_2->setObjectName(QString::fromUtf8("pushButton_Remove_View_2"));
        pushButton_Remove_View_2->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));

        horizontalLayout_9->addWidget(pushButton_Remove_View_2);

        pushButton_Full_Screen_2 = new QPushButton(widget_12);
        pushButton_Full_Screen_2->setObjectName(QString::fromUtf8("pushButton_Full_Screen_2"));
        pushButton_Full_Screen_2->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));

        horizontalLayout_9->addWidget(pushButton_Full_Screen_2);


        verticalLayout_4->addWidget(widget_12);

        label_PreView_2 = new QLabel(widget_13);
        label_PreView_2->setObjectName(QString::fromUtf8("label_PreView_2"));
        sizePolicy.setHeightForWidth(label_PreView_2->sizePolicy().hasHeightForWidth());
        label_PreView_2->setSizePolicy(sizePolicy);
        label_PreView_2->setMinimumSize(QSize(100, 100));
        label_PreView_2->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_PreView_2);

        widget_5 = new QWidget(widget_13);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(widget_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label_2);

        spinBox_2 = new QSpinBox(widget_5);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        sizePolicy2.setHeightForWidth(spinBox_2->sizePolicy().hasHeightForWidth());
        spinBox_2->setSizePolicy(sizePolicy2);
        spinBox_2->setMaximumSize(QSize(100, 16777215));
        spinBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));

        horizontalLayout_3->addWidget(spinBox_2);

        horizontalSlider_2 = new QSlider(widget_5);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider_2);

        label_c2 = new QLabel(widget_5);
        label_c2->setObjectName(QString::fromUtf8("label_c2"));
        label_c2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label_c2);


        verticalLayout_4->addWidget(widget_5);


        gridLayout->addWidget(widget_13, 0, 1, 1, 1);

        widget_15 = new QWidget(widget);
        widget_15->setObjectName(QString::fromUtf8("widget_15"));
        verticalLayout_5 = new QVBoxLayout(widget_15);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        widget_14 = new QWidget(widget_15);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));
        horizontalLayout_10 = new QHBoxLayout(widget_14);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        lineEdit_Camera_Name_3 = new QLineEdit(widget_14);
        lineEdit_Camera_Name_3->setObjectName(QString::fromUtf8("lineEdit_Camera_Name_3"));
        lineEdit_Camera_Name_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Agency FB\";\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_10->addWidget(lineEdit_Camera_Name_3);

        pushButton_Add_View_3 = new QPushButton(widget_14);
        pushButton_Add_View_3->setObjectName(QString::fromUtf8("pushButton_Add_View_3"));
        pushButton_Add_View_3->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));

        horizontalLayout_10->addWidget(pushButton_Add_View_3);

        pushButton_Remove_View_3 = new QPushButton(widget_14);
        pushButton_Remove_View_3->setObjectName(QString::fromUtf8("pushButton_Remove_View_3"));
        pushButton_Remove_View_3->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));

        horizontalLayout_10->addWidget(pushButton_Remove_View_3);

        pushButton_Full_Screen_3 = new QPushButton(widget_14);
        pushButton_Full_Screen_3->setObjectName(QString::fromUtf8("pushButton_Full_Screen_3"));
        pushButton_Full_Screen_3->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));

        horizontalLayout_10->addWidget(pushButton_Full_Screen_3);


        verticalLayout_5->addWidget(widget_14);

        label_PreView_3 = new QLabel(widget_15);
        label_PreView_3->setObjectName(QString::fromUtf8("label_PreView_3"));
        sizePolicy.setHeightForWidth(label_PreView_3->sizePolicy().hasHeightForWidth());
        label_PreView_3->setSizePolicy(sizePolicy);
        label_PreView_3->setMinimumSize(QSize(100, 100));
        label_PreView_3->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout_5->addWidget(label_PreView_3);

        widget_6 = new QWidget(widget_15);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_4 = new QHBoxLayout(widget_6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(widget_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(label_3);

        spinBox_3 = new QSpinBox(widget_6);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        sizePolicy2.setHeightForWidth(spinBox_3->sizePolicy().hasHeightForWidth());
        spinBox_3->setSizePolicy(sizePolicy2);
        spinBox_3->setMaximumSize(QSize(100, 16777215));
        spinBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));

        horizontalLayout_4->addWidget(spinBox_3);

        horizontalSlider_3 = new QSlider(widget_6);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider_3);

        label_c3 = new QLabel(widget_6);
        label_c3->setObjectName(QString::fromUtf8("label_c3"));
        label_c3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(label_c3);


        verticalLayout_5->addWidget(widget_6);


        gridLayout->addWidget(widget_15, 0, 2, 1, 1);

        widget_17 = new QWidget(widget);
        widget_17->setObjectName(QString::fromUtf8("widget_17"));
        verticalLayout_6 = new QVBoxLayout(widget_17);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        widget_16 = new QWidget(widget_17);
        widget_16->setObjectName(QString::fromUtf8("widget_16"));
        horizontalLayout_11 = new QHBoxLayout(widget_16);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        lineEdit_Camera_Name_4 = new QLineEdit(widget_16);
        lineEdit_Camera_Name_4->setObjectName(QString::fromUtf8("lineEdit_Camera_Name_4"));
        lineEdit_Camera_Name_4->setStyleSheet(QString::fromUtf8("font: 12pt \"Agency FB\";\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_11->addWidget(lineEdit_Camera_Name_4);

        pushButton_Add_View_4 = new QPushButton(widget_16);
        pushButton_Add_View_4->setObjectName(QString::fromUtf8("pushButton_Add_View_4"));
        pushButton_Add_View_4->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));

        horizontalLayout_11->addWidget(pushButton_Add_View_4);

        pushButton_Remove_View_4 = new QPushButton(widget_16);
        pushButton_Remove_View_4->setObjectName(QString::fromUtf8("pushButton_Remove_View_4"));
        pushButton_Remove_View_4->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));

        horizontalLayout_11->addWidget(pushButton_Remove_View_4);

        pushButton_Full_Screen_4 = new QPushButton(widget_16);
        pushButton_Full_Screen_4->setObjectName(QString::fromUtf8("pushButton_Full_Screen_4"));
        pushButton_Full_Screen_4->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));

        horizontalLayout_11->addWidget(pushButton_Full_Screen_4);


        verticalLayout_6->addWidget(widget_16);

        label_PreView_4 = new QLabel(widget_17);
        label_PreView_4->setObjectName(QString::fromUtf8("label_PreView_4"));
        sizePolicy.setHeightForWidth(label_PreView_4->sizePolicy().hasHeightForWidth());
        label_PreView_4->setSizePolicy(sizePolicy);
        label_PreView_4->setMinimumSize(QSize(100, 100));
        label_PreView_4->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(label_PreView_4);

        widget_7 = new QWidget(widget_17);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_5 = new QHBoxLayout(widget_7);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(widget_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(label_4);

        spinBox_4 = new QSpinBox(widget_7);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        sizePolicy2.setHeightForWidth(spinBox_4->sizePolicy().hasHeightForWidth());
        spinBox_4->setSizePolicy(sizePolicy2);
        spinBox_4->setMaximumSize(QSize(100, 16777215));
        spinBox_4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));

        horizontalLayout_5->addWidget(spinBox_4);

        horizontalSlider_4 = new QSlider(widget_7);
        horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider_4);

        label_c4 = new QLabel(widget_7);
        label_c4->setObjectName(QString::fromUtf8("label_c4"));
        label_c4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(label_c4);


        verticalLayout_6->addWidget(widget_7);


        gridLayout->addWidget(widget_17, 1, 0, 1, 1);

        widget_19 = new QWidget(widget);
        widget_19->setObjectName(QString::fromUtf8("widget_19"));
        verticalLayout_7 = new QVBoxLayout(widget_19);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        widget_18 = new QWidget(widget_19);
        widget_18->setObjectName(QString::fromUtf8("widget_18"));
        horizontalLayout_12 = new QHBoxLayout(widget_18);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        lineEdit_Camera_Name_5 = new QLineEdit(widget_18);
        lineEdit_Camera_Name_5->setObjectName(QString::fromUtf8("lineEdit_Camera_Name_5"));
        lineEdit_Camera_Name_5->setStyleSheet(QString::fromUtf8("font: 12pt \"Agency FB\";\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_12->addWidget(lineEdit_Camera_Name_5);

        pushButton_Add_View_5 = new QPushButton(widget_18);
        pushButton_Add_View_5->setObjectName(QString::fromUtf8("pushButton_Add_View_5"));
        pushButton_Add_View_5->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));

        horizontalLayout_12->addWidget(pushButton_Add_View_5);

        pushButton_Remove_View_5 = new QPushButton(widget_18);
        pushButton_Remove_View_5->setObjectName(QString::fromUtf8("pushButton_Remove_View_5"));
        pushButton_Remove_View_5->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));

        horizontalLayout_12->addWidget(pushButton_Remove_View_5);

        pushButton_Full_Screen_5 = new QPushButton(widget_18);
        pushButton_Full_Screen_5->setObjectName(QString::fromUtf8("pushButton_Full_Screen_5"));
        pushButton_Full_Screen_5->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));

        horizontalLayout_12->addWidget(pushButton_Full_Screen_5);


        verticalLayout_7->addWidget(widget_18);

        label_PreView_5 = new QLabel(widget_19);
        label_PreView_5->setObjectName(QString::fromUtf8("label_PreView_5"));
        sizePolicy.setHeightForWidth(label_PreView_5->sizePolicy().hasHeightForWidth());
        label_PreView_5->setSizePolicy(sizePolicy);
        label_PreView_5->setMinimumSize(QSize(100, 100));
        label_PreView_5->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout_7->addWidget(label_PreView_5);

        widget_8 = new QWidget(widget_19);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        horizontalLayout_6 = new QHBoxLayout(widget_8);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(widget_8);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(label_5);

        spinBox_5 = new QSpinBox(widget_8);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        sizePolicy2.setHeightForWidth(spinBox_5->sizePolicy().hasHeightForWidth());
        spinBox_5->setSizePolicy(sizePolicy2);
        spinBox_5->setMaximumSize(QSize(100, 16777215));
        spinBox_5->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));

        horizontalLayout_6->addWidget(spinBox_5);

        horizontalSlider_5 = new QSlider(widget_8);
        horizontalSlider_5->setObjectName(QString::fromUtf8("horizontalSlider_5"));
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSlider_5);

        label_c5 = new QLabel(widget_8);
        label_c5->setObjectName(QString::fromUtf8("label_c5"));
        label_c5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(label_c5);


        verticalLayout_7->addWidget(widget_8);


        gridLayout->addWidget(widget_19, 1, 1, 1, 1);

        widget_21 = new QWidget(widget);
        widget_21->setObjectName(QString::fromUtf8("widget_21"));
        verticalLayout_8 = new QVBoxLayout(widget_21);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        widget_20 = new QWidget(widget_21);
        widget_20->setObjectName(QString::fromUtf8("widget_20"));
        horizontalLayout_13 = new QHBoxLayout(widget_20);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        lineEdit_Camera_Name_6 = new QLineEdit(widget_20);
        lineEdit_Camera_Name_6->setObjectName(QString::fromUtf8("lineEdit_Camera_Name_6"));
        lineEdit_Camera_Name_6->setStyleSheet(QString::fromUtf8("font: 12pt \"Agency FB\";\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_13->addWidget(lineEdit_Camera_Name_6);

        pushButton_Add_View_6 = new QPushButton(widget_20);
        pushButton_Add_View_6->setObjectName(QString::fromUtf8("pushButton_Add_View_6"));
        pushButton_Add_View_6->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));

        horizontalLayout_13->addWidget(pushButton_Add_View_6);

        pushButton_Remove_View_6 = new QPushButton(widget_20);
        pushButton_Remove_View_6->setObjectName(QString::fromUtf8("pushButton_Remove_View_6"));
        pushButton_Remove_View_6->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));

        horizontalLayout_13->addWidget(pushButton_Remove_View_6);

        pushButton_Full_Screen_6 = new QPushButton(widget_20);
        pushButton_Full_Screen_6->setObjectName(QString::fromUtf8("pushButton_Full_Screen_6"));
        pushButton_Full_Screen_6->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));

        horizontalLayout_13->addWidget(pushButton_Full_Screen_6);


        verticalLayout_8->addWidget(widget_20);

        label_PreView_6 = new QLabel(widget_21);
        label_PreView_6->setObjectName(QString::fromUtf8("label_PreView_6"));
        sizePolicy.setHeightForWidth(label_PreView_6->sizePolicy().hasHeightForWidth());
        label_PreView_6->setSizePolicy(sizePolicy);
        label_PreView_6->setMinimumSize(QSize(100, 100));
        label_PreView_6->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout_8->addWidget(label_PreView_6);

        widget_9 = new QWidget(widget_21);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        horizontalLayout_7 = new QHBoxLayout(widget_9);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(widget_9);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(label_6);

        spinBox_6 = new QSpinBox(widget_9);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
        sizePolicy2.setHeightForWidth(spinBox_6->sizePolicy().hasHeightForWidth());
        spinBox_6->setSizePolicy(sizePolicy2);
        spinBox_6->setMaximumSize(QSize(100, 16777215));
        spinBox_6->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));

        horizontalLayout_7->addWidget(spinBox_6);

        horizontalSlider_6 = new QSlider(widget_9);
        horizontalSlider_6->setObjectName(QString::fromUtf8("horizontalSlider_6"));
        horizontalSlider_6->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(horizontalSlider_6);

        label_c6 = new QLabel(widget_9);
        label_c6->setObjectName(QString::fromUtf8("label_c6"));
        label_c6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(label_c6);


        verticalLayout_8->addWidget(widget_9);


        gridLayout->addWidget(widget_21, 1, 2, 1, 1);


        horizontalLayout->addWidget(widget);


        retranslateUi(Form_Camera);

        QMetaObject::connectSlotsByName(Form_Camera);
    } // setupUi

    void retranslateUi(QWidget *Form_Camera)
    {
        Form_Camera->setWindowTitle(QApplication::translate("Form_Camera", "\347\233\270\346\234\272\351\205\215\347\275\256\347\225\214\351\235\242", nullptr));
        pushButton->setText(QApplication::translate("Form_Camera", "\346\237\245\346\211\276\347\233\270\346\234\272\350\256\276\345\244\207", nullptr));
        pushButton_8->setText(QApplication::translate("Form_Camera", "\350\277\236\346\216\245\347\233\270\346\234\272\350\256\276\345\244\207", nullptr));
        label_Device_List->setText(QApplication::translate("Form_Camera", "\347\233\270\346\234\272\345\210\227\350\241\250\357\274\232", nullptr));
        label_10->setText(QString());
        pushButton_2->setText(QApplication::translate("Form_Camera", "\346\213\215\347\205\247\346\265\213\350\257\225", nullptr));
        pushButton_10->setText(QApplication::translate("Form_Camera", "\346\240\207\345\207\206\347\201\260\345\272\246\345\200\274", nullptr));
        pushButton_find_product->setText(QApplication::translate("Form_Camera", "\346\237\245\346\211\276\344\272\247\345\223\201\345\236\213\345\217\267", nullptr));
        label_9->setText(QApplication::translate("Form_Camera", "\344\272\247\345\223\201\345\236\213\345\217\267", nullptr));
        label_8->setText(QApplication::translate("Form_Camera", "\345\261\217\345\271\225\347\261\273\345\236\213", nullptr));
        label_7->setText(QApplication::translate("Form_Camera", "\346\233\235\345\205\211\347\261\273\345\236\213", nullptr));
        pushButton_Adaptive_exposure->setText(QApplication::translate("Form_Camera", "\350\207\252\345\212\250\346\240\241\346\255\243\346\250\241\345\274\217", nullptr));
        pushButton_manualExposure->setText(QApplication::translate("Form_Camera", "\346\211\213\345\212\250\346\240\241\346\255\243\346\250\241\345\274\217", nullptr));
        pushButton_3->setText(QApplication::translate("Form_Camera", "\344\277\235\345\255\230\346\240\241\346\255\243\346\233\235\345\205\211\345\200\274", nullptr));
        lineEdit_Camera_Name_1->setText(QApplication::translate("Form_Camera", "\347\233\270\346\234\2721:", nullptr));
        pushButton_Add_View_1->setText(QApplication::translate("Form_Camera", "\346\267\273\345\212\240", nullptr));
        pushButton_Remove_View_1->setText(QApplication::translate("Form_Camera", "\347\247\273\351\231\244", nullptr));
        pushButton_Full_Screen_1->setText(QApplication::translate("Form_Camera", "\345\205\250\345\261\217", nullptr));
        label_PreView_1->setText(QString());
        label->setText(QApplication::translate("Form_Camera", "\346\233\235\345\205\211\345\200\274\357\274\232", nullptr));
        label_c1->setText(QApplication::translate("Form_Camera", "\347\233\270\346\234\2721\347\201\260\345\272\246", nullptr));
        lineEdit_Camera_Name_2->setText(QApplication::translate("Form_Camera", "\347\233\270\346\234\2722:", nullptr));
        pushButton_Add_View_2->setText(QApplication::translate("Form_Camera", "\346\267\273\345\212\240", nullptr));
        pushButton_Remove_View_2->setText(QApplication::translate("Form_Camera", "\347\247\273\351\231\244", nullptr));
        pushButton_Full_Screen_2->setText(QApplication::translate("Form_Camera", "\345\205\250\345\261\217", nullptr));
        label_PreView_2->setText(QString());
        label_2->setText(QApplication::translate("Form_Camera", "\346\233\235\345\205\211\345\200\274\357\274\232", nullptr));
        label_c2->setText(QApplication::translate("Form_Camera", "\347\233\270\346\234\2722\347\201\260\345\272\246", nullptr));
        lineEdit_Camera_Name_3->setText(QApplication::translate("Form_Camera", "\347\233\270\346\234\2723:", nullptr));
        pushButton_Add_View_3->setText(QApplication::translate("Form_Camera", "\346\267\273\345\212\240", nullptr));
        pushButton_Remove_View_3->setText(QApplication::translate("Form_Camera", "\347\247\273\351\231\244", nullptr));
        pushButton_Full_Screen_3->setText(QApplication::translate("Form_Camera", "\345\205\250\345\261\217", nullptr));
        label_PreView_3->setText(QString());
        label_3->setText(QApplication::translate("Form_Camera", "\346\233\235\345\205\211\345\200\274\357\274\232", nullptr));
        label_c3->setText(QApplication::translate("Form_Camera", "\347\233\270\346\234\2723\347\201\260\345\272\246", nullptr));
        lineEdit_Camera_Name_4->setText(QApplication::translate("Form_Camera", "\347\233\270\346\234\2724:", nullptr));
        pushButton_Add_View_4->setText(QApplication::translate("Form_Camera", "\346\267\273\345\212\240", nullptr));
        pushButton_Remove_View_4->setText(QApplication::translate("Form_Camera", "\347\247\273\351\231\244", nullptr));
        pushButton_Full_Screen_4->setText(QApplication::translate("Form_Camera", "\345\205\250\345\261\217", nullptr));
        label_PreView_4->setText(QString());
        label_4->setText(QApplication::translate("Form_Camera", "\346\233\235\345\205\211\345\200\274\357\274\232", nullptr));
        label_c4->setText(QApplication::translate("Form_Camera", "\347\233\270\346\234\2724\347\201\260\345\272\246", nullptr));
        lineEdit_Camera_Name_5->setText(QApplication::translate("Form_Camera", "\347\233\270\346\234\2725:", nullptr));
        pushButton_Add_View_5->setText(QApplication::translate("Form_Camera", "\346\267\273\345\212\240", nullptr));
        pushButton_Remove_View_5->setText(QApplication::translate("Form_Camera", "\347\247\273\351\231\244", nullptr));
        pushButton_Full_Screen_5->setText(QApplication::translate("Form_Camera", "\345\205\250\345\261\217", nullptr));
        label_PreView_5->setText(QString());
        label_5->setText(QApplication::translate("Form_Camera", "\346\233\235\345\205\211\345\200\274\357\274\232", nullptr));
        label_c5->setText(QApplication::translate("Form_Camera", "\347\233\270\346\234\2725\347\201\260\345\272\246", nullptr));
        lineEdit_Camera_Name_6->setText(QApplication::translate("Form_Camera", "\347\233\270\346\234\2726:", nullptr));
        pushButton_Add_View_6->setText(QApplication::translate("Form_Camera", "\346\267\273\345\212\240", nullptr));
        pushButton_Remove_View_6->setText(QApplication::translate("Form_Camera", "\347\247\273\351\231\244", nullptr));
        pushButton_Full_Screen_6->setText(QApplication::translate("Form_Camera", "\345\205\250\345\261\217", nullptr));
        label_PreView_6->setText(QString());
        label_6->setText(QApplication::translate("Form_Camera", "\346\233\235\345\205\211\345\200\274\357\274\232", nullptr));
        label_c6->setText(QApplication::translate("Form_Camera", "\347\233\270\346\234\2726\347\201\260\345\272\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form_Camera: public Ui_Form_Camera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_CAMERA_H
