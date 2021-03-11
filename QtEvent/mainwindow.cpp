#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QTimer"
#include"QPushButton"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    id1=startTimer(1000);
    id2=startTimer(2000);

    //定时器的第二种方式
    QTimer * timer=new QTimer(this);
    timer->start(500);
    connect(timer,&QTimer::timeout,[=](){

        static int num=1;
        ui->label_4->setText(QString::number(num++));

    });

    connect(ui->pushButton,&QPushButton::clicked,[=](){
        timer->stop();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::timerEvent(QTimerEvent  *ev){
    if(ev->timerId()==id1){
        static int num=1;
        ui->label_2->setText(QString::number(num++));
    }
    if(ev->timerId()==id2){
        static int num2=1;
        ui->label_3->setText(QString::number(num2++));
    }
}
