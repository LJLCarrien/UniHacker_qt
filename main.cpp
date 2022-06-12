#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.setWindowTitle("UniHacker - Unity3D & UnityHub Patcher by tylearymf v1.4");


    return a.exec();
}
