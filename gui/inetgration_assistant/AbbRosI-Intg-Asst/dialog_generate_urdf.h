#ifndef DIALOG_GENERATE_URDF_H
#define DIALOG_GENERATE_URDF_H

#include <QDialog>

namespace Ui {
class Dialog_Generate_URDF;
}

class Dialog_Generate_URDF : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_Generate_URDF(QWidget *parent = 0);
    ~Dialog_Generate_URDF();

private slots:
    void on_pushButton_generate_xacro_clicked();

private:
    Ui::Dialog_Generate_URDF *ui;
    void writeXML();
};

#endif // DIALOG_GENERATE_URDF_H
