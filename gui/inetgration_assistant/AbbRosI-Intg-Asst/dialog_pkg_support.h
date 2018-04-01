#ifndef DIALOG_PKG_SUPPORT_H
#define DIALOG_PKG_SUPPORT_H

#include <QDialog>

namespace Ui {
class Dialog_Pkg_Support;
}

class Dialog_Pkg_Support : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_Pkg_Support(QWidget *parent = 0);
    ~Dialog_Pkg_Support();

private:
    Ui::Dialog_Pkg_Support *ui;

signals:
   void  sendData(bool); //只用声明不用定义

private slots:
   void on_Dialog_Pkg_Support_finished();
};

#endif // DIALOG_PKG_SUPPORT_H
