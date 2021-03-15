#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QIcon"
#include "QPushButton"
#include "QPainter"
#include "QPixmap"
#include "mypushbutton.h"
#include "QDebug"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(320,588);
    this->setWindowIcon(QIcon(":/res/Coin0001.png"));
    this->setWindowTitle("CoinFlip!!");

    connect(ui->actionquit,&QAction::triggered,[=](){
        this->close();
    });
    MyPushButton * startbtn=new MyPushButton(":/res/MenuSceneStartButton.png");
    startbtn->setParent(this);
    startbtn->move(this->width()*0.5-startbtn->width()*0.5,this->height()*0.7);
    connect(startbtn,&QPushButton::clicked,[=](){
        qDebug()<<"jump"<<endl;
        startbtn->zoom1();
        startbtn->zoom2();
    });



}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::paintEvent(QPaintEvent *){

    QPainter painter(this);
    QPixmap pix;
    pix.load(":/res/PlayLevelSceneBg.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
    pix.load(":/res/Title.png");
    pix=pix.scaled(pix.width()*0.5,pix.height()*0.5);
    painter.drawPixmap(10,30,pix);
}
