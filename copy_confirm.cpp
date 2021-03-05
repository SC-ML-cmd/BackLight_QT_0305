#include "copy_confirm.h"
#include "ui_copy_confirm.h"
#include "para_copy.h"

Copy_Confirm::Copy_Confirm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Copy_Confirm)
{
    ui->setupUi(this);
    ui->pushButton->setStyleSheet("border:none;");
    this->setWindowIcon(QIcon(":/resourse/wanchengdise.png"));
    this->setWindowFlags(Qt::WindowCloseButtonHint);

    ui->label->setText("参数已成功从产品型号"+ Para_Copy::Modcopy_bef);
    ui->label_2->setText("复制到产品型号"+ Para_Copy::Modcopy_aft);

    setFixedSize(this->width(),this->height());

}

Copy_Confirm::~Copy_Confirm()
{
    delete ui;
}
