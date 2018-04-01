#include "dialog_pkg_support.h"
#include "ui_dialog_pkg_support.h"

Dialog_Pkg_Support::Dialog_Pkg_Support(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Pkg_Support)
{
    ui->setupUi(this);
}

Dialog_Pkg_Support::~Dialog_Pkg_Support()
{
    delete ui;
}

void Dialog_Pkg_Support::on_Dialog_Pkg_Support_finished() //绑定信号发射源是Dialog的关闭的槽函数
{
    bool state = false;
    emit sendData(state);//使用emit关键词，发射数据
}
