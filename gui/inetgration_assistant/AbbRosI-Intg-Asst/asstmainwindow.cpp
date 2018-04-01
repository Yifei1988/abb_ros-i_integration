#include "asstmainwindow.h"
#include "ui_asstmainwindow.h"
#include "dialog_pkg_support.h"


#include <QDialog>
#include <QFileInfo>
#include <QDesktopServices>
#include <QUrl>
//#include <qdebug.h>//找bug用的输出工具，正式时可以去除

AsstMainWindow::AsstMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AsstMainWindow)
{
    ui->setupUi(this);

    //stateDlgSppt = false;
    setBtnStyleForDlgState(false);
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

    //stateDlgSppt = true;
    setBtnStyleForDlgState(true);

    connect(dialog_sppt,SIGNAL(sendState(bool)),this,SLOT(receiveState(bool)));//发射信号和接收槽函数连接  //跨cpp的连接
}

void AsstMainWindow::receiveState(bool state)
{
    //stateDlgSppt = state;
    setBtnStyleForDlgState(state);
    //qDebug("%d", stateDlgSppt);//找bug用，正式时可以去除
}
void AsstMainWindow::setBtnStyleForDlgState(bool state)
{
    if(state){ ui->btn_to_support->setStyleSheet("QPushButton{background-color: grey; color: white; border: 3px solid silver;}");    }
    else{
        QFile qss(":/qss/stylesheet_btn.qss");
        qss.open(QFile::ReadOnly); // 以只读方式打开qss文件
        ui->btn_to_support->setStyleSheet(qss.readAll());
        qss.close();
    }
}

void AsstMainWindow::on_btnToRosWiki_clicked()
{
    QDesktopServices::openUrl(QUrl("http://wiki.ros.org/indigo/Installation/Ubuntu"));
}

void AsstMainWindow::on_btnToRosiWiki_clicked()
{
    QDesktopServices::openUrl(QUrl("http://wiki.ros.org/indigo/Installation/Ubuntu"));
}
