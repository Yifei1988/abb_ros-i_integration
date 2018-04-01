#include "dialog_pkg_support.h"
#include "ui_dialog_pkg_support.h"

Dialog_Pkg_Support::Dialog_Pkg_Support(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Pkg_Support)
{
    ui->setupUi(this);

    connect(ui->BtnTest, SIGNAL(clicked()), this, SLOT(clickOk())); //发射信号为Test按钮的点击，接受槽为clickOK槽函数
}

Dialog_Pkg_Support::~Dialog_Pkg_Support()
{
    delete ui;
}

void Dialog_Pkg_Support::clickOk()
{
    bool state = false;
    emit sendData(state);//使用emit关键词，发射数据
}
