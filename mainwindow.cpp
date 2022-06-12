#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_select_pushButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,tr("打开"),tr("D://Program Files//Unity Hub"),tr("Unity.exe;Unity Hub.exe;*.exe"));
    qDebug() << fileName;
    ui->path_textEdit->setText(fileName);

}
