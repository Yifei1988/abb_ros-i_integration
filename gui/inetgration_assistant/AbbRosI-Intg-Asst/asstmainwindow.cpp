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

    setBtnStyleForDlgState(false);//设置按钮样式以标志DialogSupportPackage未打开
}

AsstMainWindow::~AsstMainWindow()
{
    delete ui;
}

//当点击对应按钮时打开DialogSupportPackage
void AsstMainWindow::on_btn_to_support_clicked() //绑定信号发射源是btn_to_support的槽函数
{
    dialog_sppt = new Dialog_Pkg_Support (this);
    dialog_sppt->setWindowTitle("Create Support Package");
    dialog_sppt->setModal(true);//模态对话框，打开时阻塞主窗口
    dialog_sppt->show();

    setBtnStyleForDlgState(true);//设置按钮样式以标志DialogSupportPackage正在打开中

    connect(dialog_sppt,SIGNAL(sendState(bool)),this,SLOT(receiveState(bool)));//发射信号和接收槽函数连接  //跨cpp的连接
}

//DialogSupportPackage关闭时会发出信号，此函数用来接收这个false信号，并体现到相应按钮上
void AsstMainWindow::receiveState(bool state)
{
    setBtnStyleForDlgState(state);
    //qDebug("%d", stateDlgSppt);//找bug用，正式时可以去除
}
//用于标记DialogSupportPackage开闭状态的按钮样式实现函数
void AsstMainWindow::setBtnStyleForDlgState(bool state)
{
    if(state){ ui->btn_to_support->setStyleSheet("QPushButton{background-color: grey; color: white; border: 3px solid silver;}");    }
    else{
        QFile qss(":/qss/stylesheet_btn.qss");//打开外部样式
        qss.open(QFile::ReadOnly); // 以只读方式打开qss文件
        ui->btn_to_support->setStyleSheet(qss.readAll());
        qss.close();
    }
}

//点击此按钮打开指导安装ros indigo的网页
void AsstMainWindow::on_btnToRosWiki_clicked()
{
    QDesktopServices::openUrl(QUrl("http://wiki.ros.org/indigo/Installation/Ubuntu"));
}
//点击此按钮打开指导安装ros-i indigo的网页
void AsstMainWindow::on_btnToRosiWiki_clicked()
{
    QDesktopServices::openUrl(QUrl("http://aeswiki.datasys.swri.edu/rositraining/Indigo%20PC%20Setup"));
}

void AsstMainWindow::on_btnToRosCatkinWs_clicked()
{
    QDesktopServices::openUrl(QUrl("http://wiki.ros.org/catkin/Tutorials/create_a_workspace"));
}
