#include "asstmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AsstMainWindow w;
    w.setWindowTitle("ABB ROS-I Integration Assistant");
    w.show();

    return a.exec();
}
