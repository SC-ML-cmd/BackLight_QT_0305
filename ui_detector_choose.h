/********************************************************************************
** Form generated from reading UI file 'detector_choose.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETECTOR_CHOOSE_H
#define UI_DETECTOR_CHOOSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Detector_Choose
{
public:
    QGridLayout *gridLayout;
    QCheckBox *Cbx_ForeignBody;
    QCheckBox *Cbx_WhiteDot;
    QCheckBox *Cbx_LampEye;
    QCheckBox *Cbx_Scratch;
    QCheckBox *Cbx_boom_light;
    QCheckBox *Cbx_Abshow_White_Detect;
    QCheckBox *Cbx_mura;
    QCheckBox *Cbx_Brightedge;
    QComboBox *combx_SelectAllOrNo;
    QPushButton *btn_sure;
    QPushButton *btn_Cancel;

    void setupUi(QDialog *Detector_Choose)
    {
        if (Detector_Choose->objectName().isEmpty())
            Detector_Choose->setObjectName(QString::fromUtf8("Detector_Choose"));
        Detector_Choose->resize(335, 279);
        gridLayout = new QGridLayout(Detector_Choose);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Cbx_ForeignBody = new QCheckBox(Detector_Choose);
        Cbx_ForeignBody->setObjectName(QString::fromUtf8("Cbx_ForeignBody"));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(11);
        Cbx_ForeignBody->setFont(font);

        gridLayout->addWidget(Cbx_ForeignBody, 0, 0, 1, 1);

        Cbx_WhiteDot = new QCheckBox(Detector_Choose);
        Cbx_WhiteDot->setObjectName(QString::fromUtf8("Cbx_WhiteDot"));
        Cbx_WhiteDot->setFont(font);

        gridLayout->addWidget(Cbx_WhiteDot, 0, 1, 1, 2);

        Cbx_LampEye = new QCheckBox(Detector_Choose);
        Cbx_LampEye->setObjectName(QString::fromUtf8("Cbx_LampEye"));
        Cbx_LampEye->setFont(font);

        gridLayout->addWidget(Cbx_LampEye, 1, 0, 1, 1);

        Cbx_Scratch = new QCheckBox(Detector_Choose);
        Cbx_Scratch->setObjectName(QString::fromUtf8("Cbx_Scratch"));
        Cbx_Scratch->setFont(font);

        gridLayout->addWidget(Cbx_Scratch, 1, 1, 1, 2);

        Cbx_boom_light = new QCheckBox(Detector_Choose);
        Cbx_boom_light->setObjectName(QString::fromUtf8("Cbx_boom_light"));
        Cbx_boom_light->setFont(font);

        gridLayout->addWidget(Cbx_boom_light, 2, 0, 1, 1);

        Cbx_Abshow_White_Detect = new QCheckBox(Detector_Choose);
        Cbx_Abshow_White_Detect->setObjectName(QString::fromUtf8("Cbx_Abshow_White_Detect"));
        Cbx_Abshow_White_Detect->setFont(font);

        gridLayout->addWidget(Cbx_Abshow_White_Detect, 2, 1, 1, 2);

        Cbx_mura = new QCheckBox(Detector_Choose);
        Cbx_mura->setObjectName(QString::fromUtf8("Cbx_mura"));
        Cbx_mura->setFont(font);

        gridLayout->addWidget(Cbx_mura, 3, 0, 1, 1);

        Cbx_Brightedge = new QCheckBox(Detector_Choose);
        Cbx_Brightedge->setObjectName(QString::fromUtf8("Cbx_Brightedge"));
        Cbx_Brightedge->setFont(font);

        gridLayout->addWidget(Cbx_Brightedge, 3, 1, 1, 2);

        combx_SelectAllOrNo = new QComboBox(Detector_Choose);
        combx_SelectAllOrNo->addItem(QString());
        combx_SelectAllOrNo->addItem(QString());
        combx_SelectAllOrNo->addItem(QString());
        combx_SelectAllOrNo->setObjectName(QString::fromUtf8("combx_SelectAllOrNo"));

        gridLayout->addWidget(combx_SelectAllOrNo, 4, 0, 1, 1);

        btn_sure = new QPushButton(Detector_Choose);
        btn_sure->setObjectName(QString::fromUtf8("btn_sure"));

        gridLayout->addWidget(btn_sure, 4, 1, 1, 1);

        btn_Cancel = new QPushButton(Detector_Choose);
        btn_Cancel->setObjectName(QString::fromUtf8("btn_Cancel"));

        gridLayout->addWidget(btn_Cancel, 4, 2, 1, 1);


        retranslateUi(Detector_Choose);

        QMetaObject::connectSlotsByName(Detector_Choose);
    } // setupUi

    void retranslateUi(QDialog *Detector_Choose)
    {
        Detector_Choose->setWindowTitle(QApplication::translate("Detector_Choose", "\346\243\200\346\265\213\347\274\272\351\231\267\351\200\211\346\213\251", nullptr));
        Cbx_ForeignBody->setText(QApplication::translate("Detector_Choose", "\345\274\202\347\211\251\346\243\200\346\265\213", nullptr));
        Cbx_WhiteDot->setText(QApplication::translate("Detector_Choose", "\347\231\275\347\202\271\346\243\200\346\265\213", nullptr));
        Cbx_LampEye->setText(QApplication::translate("Detector_Choose", "\346\255\273\347\201\257\346\243\200\346\265\213", nullptr));
        Cbx_Scratch->setText(QApplication::translate("Detector_Choose", "\345\210\222\344\274\244\346\243\200\346\265\213", nullptr));
        Cbx_boom_light->setText(QApplication::translate("Detector_Choose", "\347\210\206\347\201\257\346\243\200\346\265\213", nullptr));
        Cbx_Abshow_White_Detect->setText(QApplication::translate("Detector_Choose", "\347\247\273\344\275\215\346\243\200\346\265\213", nullptr));
        Cbx_mura->setText(QApplication::translate("Detector_Choose", "\347\231\275\345\215\260\346\243\200\346\265\213", nullptr));
        Cbx_Brightedge->setText(QApplication::translate("Detector_Choose", "\344\272\256\350\276\271\346\243\200\346\265\213", nullptr));
        combx_SelectAllOrNo->setItemText(0, QApplication::translate("Detector_Choose", "\345\205\250\351\200\211/\345\205\250\344\270\215\351\200\211", nullptr));
        combx_SelectAllOrNo->setItemText(1, QApplication::translate("Detector_Choose", "\345\205\250\351\200\211", nullptr));
        combx_SelectAllOrNo->setItemText(2, QApplication::translate("Detector_Choose", "\345\205\250\344\270\215\351\200\211", nullptr));

        combx_SelectAllOrNo->setCurrentText(QApplication::translate("Detector_Choose", "\345\205\250\351\200\211/\345\205\250\344\270\215\351\200\211", nullptr));
        btn_sure->setText(QApplication::translate("Detector_Choose", "\347\241\256\345\256\232", nullptr));
        btn_Cancel->setText(QApplication::translate("Detector_Choose", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Detector_Choose: public Ui_Detector_Choose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETECTOR_CHOOSE_H
