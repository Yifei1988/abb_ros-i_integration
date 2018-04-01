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
   void  sendState(bool); //只需声明，无需实现，因为后面在cpp中会被直接连接到槽函数

private slots:
   void on_Dialog_Pkg_Support_finished();
};

#endif // DIALOG_PKG_SUPPORT_H
