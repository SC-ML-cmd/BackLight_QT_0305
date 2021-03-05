#include "delete_confirm.h"
#include "ui_delete_confirm.h"

delete_confirm::delete_confirm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::delete_confirm)
{
    ui->setupUi(this);
    this->setWindowTitle("删除产品型号");
    this->setWindowIcon(QIcon(":/resourse/shanchu1.png"));
    ui->pushButton_3->setStyleSheet("border:none;");
    this->setWindowFlags(Qt::WindowCloseButtonHint);

    setFixedSize(this->width(),this->height());
}

delete_confirm::~delete_confirm()
{
    delete ui;
}

void delete_confirm::on_pushButton_clicked()
{
    QString sInfo1="ok";
    emit infoSend1(sInfo1); //infoSend函数不需要有函数体
    this->destroy(true,true);
}

void delete_confirm::on_pushButton_2_clicked()
{
    this->destroy(true,true);
}
