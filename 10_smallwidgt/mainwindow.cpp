#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"QMessageBox"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        QMessageBox::information(this,"value",QString::number(ui->widget->getNum()));
    });
    connect(ui->pushButton_2,&QPushButton::clicked,[=](){
        ui->widget->setNum(50);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

