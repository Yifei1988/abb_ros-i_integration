#ifndef ASSTMAINWINDOW_H
#define ASSTMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class AsstMainWindow;
}

class AsstMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AsstMainWindow(QWidget *parent = 0);
    ~AsstMainWindow();

private:
    Ui::AsstMainWindow *ui;
};

#endif // ASSTMAINWINDOW_H
