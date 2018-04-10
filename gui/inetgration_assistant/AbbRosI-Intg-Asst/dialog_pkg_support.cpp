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
    emit sendState(state);//使用emit关键词，发射数据
}

void Dialog_Pkg_Support::on_btnToCrtUrdf_clicked()
{
    dialog_urdf = new Dialog_Generate_URDF (this);
    dialog_urdf->setWindowTitle("Generate URDF");
    dialog_urdf->setModal(true);//模态对话框，打开时阻塞主窗口
    dialog_urdf->show();
}
