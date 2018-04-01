#include "asstmainwindow.h"
#include "ui_asstmainwindow.h"
#include "dialog_pkg_support.h"


#include <QDialog>
#include <qdebug.h>//找bug用的输出工具，正式时可以去除

AsstMainWindow::AsstMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AsstMainWindow)
{
    ui->setupUi(this);

    stateDlgSppt = true;
    setBtnStyle(stateDlgSppt);
}

AsstMainWindow::~AsstMainWindow()
{
    delete ui;
}

void AsstMainWindow::on_btn_to_support_clicked() //绑定信号发射源是btn_to_support的槽
{
    //Dialog_Pkg_Support dialog_spt;
    //dialog_spt.setModal(true);
    //dialog_spt.setWindowTitle("Create Support Package");
    //dialog_spt.exec();
    dialog_sppt = new Dialog_Pkg_Support (this);
    dialog_sppt->setWindowTitle("Create Support Package");
    dialog_sppt->setModal(true);
    dialog_sppt->show();

    connect(dialog_sppt,SIGNAL(sendData(bool)),this,SLOT(receiveData(bool)));//发射信号和接受槽函数连接
}

void AsstMainWindow::receiveData(bool state)
{
    //imgLab3->setText(state);
    stateDlgSppt = state;
    qDebug("%d", stateDlgSppt);//找bug用，正式时可以去除
    setBtnStyle(stateDlgSppt);
}
void AsstMainWindow::setBtnStyle(bool state)
{
    if(state){ui->btn_to_support->setStyleSheet("QPushButton{background-color: rgb(240, 120, 70); color: white;}");}
    else{ui->btn_to_support->setStyleSheet("QPushButton{background-color: grey; color: black;}");}
}
