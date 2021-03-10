#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->radioButton,&QRadioButton::clicked,this,[=](){
        QMessageBox::information(this,"information","HelloPiPizhu");
    }
    );
}

MainWindow::~MainWindow()
{
    delete ui;
}

