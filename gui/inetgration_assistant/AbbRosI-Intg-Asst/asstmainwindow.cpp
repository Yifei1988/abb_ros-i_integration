#include "asstmainwindow.h"
#include "ui_asstmainwindow.h"
#include "dialog_pkg_support.h"


#include <QDialog>
#include <QFileInfo>
#include <QDesktopServices>
#include <QUrl>
#include <QProcess>
#include <QStringList>
#include <qdebug.h>//找bug用的输出工具，正式时可以去除
#include <QDir>

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
    QString robotType=ui->comboBox_RbtTyp->currentText();
    qDebug () << robotType;//测试用


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
//点击此按钮打开指导建立catkin_ws的网页
void AsstMainWindow::on_btnToRosCatkinWs_clicked()
{
    QDesktopServices::openUrl(QUrl("http://wiki.ros.org/catkin/Tutorials/create_a_workspace"));
}
//点击此按钮调用shell脚本直接在本地建立catkin_ws
void AsstMainWindow::on_btnToMkCatkinWs_clicked()
{
    QProcess *process = new QProcess();
    process->startDetached("bash", QStringList()<< "shell_script/mk_catkin_ws.sh");
    process->waitForFinished();
}
//点击此按钮克隆Github上托管的abb包
void AsstMainWindow::on_btnToDldPkgAbb_clicked()
{
    //留存，以后或许有用
    //QString scriptPath="launch_moveit_asst.sh";

    //法一:QProcess,阻塞调用
    //QProcess::execute("shell_script/launch_moveit_asst.sh");

    QProcess *process = new QProcess();
    process->startDetached("bash", QStringList()<< "shell_script/download_pkg_abb.sh");
    qDebug("haha");  //找bug用，正式时可以去除
    qDebug()<<QDir::currentPath(); //可以打印出当前编译可执行文件的目录，留存待用
}
//点击此按钮调用shell脚本直接将abb_driver复制到本地的catkin_ws
void AsstMainWindow::on_btnToCpPkgAbbdriver_clicked()
{
    QStringList arg;
    QString path = QDir::currentPath();
    arg.append(path);
    //qDebug()<<arg; //可以打印出当前编译可执行文件的目录，留存待用

//目前cp_pkg_abb_driver.sh中用mkdir预先创建名为rosiabb的workspace文件夹，
//之后考虑不使用mkdir，而是在bash里判断是否存在workspace，存在即复制，不存在就返回信息给qt，再由qt界面弹窗报错
    QProcess *process = new QProcess;
    process->start("shell_script/cp_pkg_abb_driver.sh", QStringList() << arg);
    process->waitForFinished();
    qDebug () << process->readAllStandardOutput(); //可以在qt控制台打印出shell执行的一些输出结果，但效果有限
}


