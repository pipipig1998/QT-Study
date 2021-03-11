#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->f_btn,&QPushButton::clicked,[=](){

        int index=(ui->stackedWidget->currentIndex()+1)%3;
        ui->stackedWidget->setCurrentIndex(index);

    });
    ui->comboBox->addItems(QStringList()<<"dior"<<"bench"<<"house");
    ui->comboBox->setCurrentText("bench");
}

MainWindow::~MainWindow()
{
    delete ui;
}

