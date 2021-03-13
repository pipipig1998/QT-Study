#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPainter"
#include "QTimer"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTimer * time=new QTimer(this);
    time->start(500);
    connect(time,&QTimer::timeout,[=](){
        pos=(pos+10)% this->width();
        update();
    });


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *){
//        QPainter painter(this);
//        //设置画笔
//        QPen pen(QColor(255,0,0));
//        pen.setWidth(10);
//        pen.setStyle(Qt::DotLine);
//        painter.setPen(pen);

//        QBrush brush(QColor(0,255,0));

//        painter.setBrush(brush);

//        //画图形
//        painter.drawLine(QPoint(0,0),QPoint(100,100));
//        painter.drawEllipse(QPoint(100,100),50,50);
//        painter.drawRect(200,200,30,10);

//        //画文字
//        painter.drawText(QPoint(100,100),"hahhahahhah");

//        QPainter painter(this);
//        painter.drawEllipse(QPoint(100,50),50,50);

//        //设置抗锯齿，但是效率变低了
//        painter.setRenderHint(QPainter::HighQualityAntialiasing);
//        painter.drawEllipse(QPoint(200,50),50,50);

//        painter.drawRect(QRect(20,20,50,50));
//        //相当于让画笔移动了多少
//        painter.translate(100,0);
//        //保存画笔d的状态
//        painter.save();
//        painter.drawRect(QRect(20,20,50,50));
//        painter.translate(100,0);
//        //还原画笔的状态
//        painter.restore();
//        painter.drawRect(QRect(20,20,50,50));


          QPainter painter(this);
          painter.drawPixmap(pos,0,QPixmap(":/Image/timg.jpg"));

}
