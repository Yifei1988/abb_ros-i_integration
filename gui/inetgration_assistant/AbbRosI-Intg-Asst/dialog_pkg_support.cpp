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
