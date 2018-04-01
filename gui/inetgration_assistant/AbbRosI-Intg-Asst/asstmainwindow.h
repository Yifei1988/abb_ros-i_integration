#ifndef ASSTMAINWINDOW_H
#define ASSTMAINWINDOW_H

#include <QMainWindow>
#include "dialog_pkg_support.h"

namespace Ui {
class AsstMainWindow;
}

class AsstMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AsstMainWindow(QWidget *parent = 0);
    ~AsstMainWindow();

    bool stateDlgSppt;
    void setBtnStyle(bool state);

private:
    Ui::AsstMainWindow *ui;
    Dialog_Pkg_Support *dialog_sppt;

signals:

private slots:
    void on_btn_to_support_clicked(); //绑定信号发射源是btn_to_support的槽 //点击按钮，对话框生成
    void receiveData(bool state);//接受数据
};

#endif // ASSTMAINWINDOW_H