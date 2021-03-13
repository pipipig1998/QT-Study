#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPushButton"
#include "QFileDialog"
#include "QFile"
#include "QFileInfo"
#include "QDebug"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,[=](){
          QString path=QFileDialog::getOpenFileName(this,"Open File","C:\\Users\\王帅\\Desktop");
//          ui->lineEdit->setText(path);
//          QFile file(path);
//          file.open(QIODevice::ReadOnly);
//          //默认读取utf-8
//          QByteArray array= file.readAll();
//          ui->textEdit->setText(array);
//          file.close();

            QFileInfo info(path);
            qDebug()<<info.size()<<"    "<<info.suffix()<<"   "<<info.fileName();

    });


}

MainWindow::~MainWindow()
{
    delete ui;
}

