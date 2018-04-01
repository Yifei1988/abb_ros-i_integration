#include "asstmainwindow.h"
#include "ui_asstmainwindow.h"
#include "dialog_pkg_support.h"


#include <QDialog>
#include <QFileInfo>
//#include <qdebug.h>//找bug用的输出工具，正式时可以去除

AsstMainWindow::AsstMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AsstMainWindow)
{
    ui->setupUi(this);

    stateDlgSppt = false;
    setBtnStyle(stateDlgSppt);
}

AsstMainWindow::~AsstMainWindow()
{
    delete ui;
}

void AsstMainWindow::on_btn_to_support_clicked() //绑定信号发射源是btn_to_support的槽函数
{
    dialog_sppt = new Dialog_Pkg_Support (this);
    dialog_sppt->setWindowTitle("Create Support Package");
    dialog_sppt->setModal(true);
    dialog_sppt->show();

    stateDlgSppt = true;
    setBtnStyle(stateDlgSppt);

    connect(dialog_sppt,SIGNAL(sendData(bool)),this,SLOT(receiveData(bool)));//发射信号和接收槽函数连接  //跨cpp的连接
}

void AsstMainWindow::receiveData(bool state)
{
    stateDlgSppt = state;
    setBtnStyle(stateDlgSppt);
    //qDebug("%d", stateDlgSppt);//找bug用，正式时可以去除
}
void AsstMainWindow::setBtnStyle(bool state)
{
    if(state){ ui->btn_to_support->setStyleSheet("QPushButton{background-color: grey; color: white;}");    }
    else{
        QFile qss(":/qss/stylesheet_btn.qss");
        qss.open(QFile::ReadOnly); // qss 也要讲究是什么格式的文件读取
        ui->btn_to_support->setStyleSheet(qss.readAll());
        qss.close();
    }
}
