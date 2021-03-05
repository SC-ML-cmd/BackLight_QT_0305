/********************************************************************************
** Form generated from reading UI file 'history_data.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORY_DATA_H
#define UI_HISTORY_DATA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_history_data
{
public:
    QAction *action_return;
    QAction *action_detail;
    QAction *action;
    QAction *action_delete;
    QAction *action_find;
    QGridLayout *gridLayout_2;
    QToolBar *ToolBar_action;
    QTableView *TV_ShowData;
    QWidget *widget;
    QGridLayout *gridLayout;

    void setupUi(QWidget *history_data)
    {
        if (history_data->objectName().isEmpty())
            history_data->setObjectName(QString::fromUtf8("history_data"));
        history_data->resize(1166, 673);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(history_data->sizePolicy().hasHeightForWidth());
        history_data->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resourse/chaxun.png"), QSize(), QIcon::Normal, QIcon::Off);
        history_data->setWindowIcon(icon);
        action_return = new QAction(history_data);
        action_return->setObjectName(QString::fromUtf8("action_return"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resourse/laststep.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_return->setIcon(icon1);
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(9);
        action_return->setFont(font);
        action_detail = new QAction(history_data);
        action_detail->setObjectName(QString::fromUtf8("action_detail"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resourse/nextstep.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_detail->setIcon(icon2);
        action_detail->setFont(font);
        action = new QAction(history_data);
        action->setObjectName(QString::fromUtf8("action"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resourse/ic_share_line.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon3);
        action->setFont(font);
        action_delete = new QAction(history_data);
        action_delete->setObjectName(QString::fromUtf8("action_delete"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resourse/delete (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        action_delete->setIcon(icon4);
        action_delete->setFont(font);
        action_find = new QAction(history_data);
        action_find->setObjectName(QString::fromUtf8("action_find"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resourse/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_find->setIcon(icon5);
        action_find->setFont(font);
        gridLayout_2 = new QGridLayout(history_data);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(2);
        gridLayout_2->setContentsMargins(-1, 2, -1, -1);
        ToolBar_action = new QToolBar(history_data);
        ToolBar_action->setObjectName(QString::fromUtf8("ToolBar_action"));
        ToolBar_action->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_2->addWidget(ToolBar_action, 0, 0, 1, 1);

        TV_ShowData = new QTableView(history_data);
        TV_ShowData->setObjectName(QString::fromUtf8("TV_ShowData"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(TV_ShowData->sizePolicy().hasHeightForWidth());
        TV_ShowData->setSizePolicy(sizePolicy1);
        TV_ShowData->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        TV_ShowData->setSortingEnabled(true);

        gridLayout_2->addWidget(TV_ShowData, 1, 0, 1, 1);

        widget = new QWidget(history_data);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, 2);

        gridLayout_2->addWidget(widget, 2, 0, 1, 1);


        ToolBar_action->addAction(action_return);
        ToolBar_action->addAction(action_detail);
        ToolBar_action->addAction(action_delete);
        ToolBar_action->addSeparator();
        ToolBar_action->addAction(action);
        ToolBar_action->addAction(action_find);

        retranslateUi(history_data);

        QMetaObject::connectSlotsByName(history_data);
    } // setupUi

    void retranslateUi(QWidget *history_data)
    {
        history_data->setWindowTitle(QApplication::translate("history_data", "\346\243\200\346\265\213\346\225\260\346\215\256\346\237\245\350\257\242", nullptr));
        action_return->setText(QApplication::translate("history_data", "\350\277\224\345\233\236\344\270\212\344\270\200\347\272\247", nullptr));
#ifndef QT_NO_TOOLTIP
        action_return->setToolTip(QApplication::translate("history_data", "\350\277\224\345\233\236\344\270\212\344\270\200\347\225\214\351\235\242", nullptr));
#endif // QT_NO_TOOLTIP
        action_detail->setText(QApplication::translate("history_data", "\346\237\245\347\234\213\346\230\216\347\273\206", nullptr));
#ifndef QT_NO_TOOLTIP
        action_detail->setToolTip(QApplication::translate("history_data", "\346\237\245\347\234\213\350\257\245\346\235\241\350\256\260\345\275\225\347\232\204\346\265\213\350\257\225\346\230\216\347\273\206", nullptr));
#endif // QT_NO_TOOLTIP
        action->setText(QApplication::translate("history_data", "\345\257\274\345\207\272", nullptr));
#ifndef QT_NO_TOOLTIP
        action->setToolTip(QApplication::translate("history_data", "\345\257\274\345\207\272\345\210\260Excel", nullptr));
#endif // QT_NO_TOOLTIP
        action_delete->setText(QApplication::translate("history_data", "\345\210\240\351\231\244", nullptr));
#ifndef QT_NO_TOOLTIP
        action_delete->setToolTip(QApplication::translate("history_data", "\345\210\240\351\231\244\351\200\211\344\270\255\346\265\213\350\257\225\350\256\260\345\275\225", nullptr));
#endif // QT_NO_TOOLTIP
        action_find->setText(QApplication::translate("history_data", "\346\237\245\350\257\242", nullptr));
#ifndef QT_NO_TOOLTIP
        action_find->setToolTip(QApplication::translate("history_data", "\346\240\271\346\215\256\347\224\237\344\272\247\346\211\271\346\254\241\345\217\267\347\255\211\344\277\241\346\201\257\346\237\245\346\211\276\347\224\237\344\272\247\346\211\271\346\254\241", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class history_data: public Ui_history_data {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORY_DATA_H
