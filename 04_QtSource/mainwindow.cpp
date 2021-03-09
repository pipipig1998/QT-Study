#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->actionnew->setIcon(QIcon("actionnew.jpg"));

    //使用QT资源
    ui->actionnew->setIcon(QIcon(":/Image/actionnew.jpg"));
    ui->actionopen->setIcon(QIcon(":/Image/aoteman.jpg"));

}

MainWindow::~MainWindow()
{
    delete ui;
}

