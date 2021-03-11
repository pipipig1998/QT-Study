#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //使用tablewidge先设置列
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"Name"<<"Sex"<<"Age");
    ui->tableWidget->setRowCount(3);

    QStringList name;
    name<<"yase"<<"zhaoyun"<<"huamulan";
    QStringList sex;
    sex<<"man"<<"man"<<"woman";
    QStringList age;
    age<<"18"<<"16"<<"15";

    for(int i=0;i<3;++i){
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(name[i]));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(sex[i]));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(age[i]));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

