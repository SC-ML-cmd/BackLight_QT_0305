#include "canot_delete.h"
#include "ui_canot_delete.h"

canot_delete::canot_delete(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::canot_delete)
{
    ui->setupUi(this);
    ui->pushButton_3->setStyleSheet("border:none;");
    this->setWindowIcon(QIcon(":/resourse/shibai1.png"));
    this->setWindowFlags(Qt::WindowCloseButtonHint);

    setFixedSize(this->width(),this->height());
}

canot_delete::~canot_delete()
{
    delete ui;
}
