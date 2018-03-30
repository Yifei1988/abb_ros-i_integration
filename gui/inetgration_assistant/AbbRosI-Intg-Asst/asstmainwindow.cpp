#include "asstmainwindow.h"
#include "ui_asstmainwindow.h"

AsstMainWindow::AsstMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AsstMainWindow)
{
    ui->setupUi(this);
}

AsstMainWindow::~AsstMainWindow()
{
    delete ui;
}
