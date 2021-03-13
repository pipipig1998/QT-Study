#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPixmap"
#include "QPainter"
#include "QPen"
#include "QPicture"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


//    //绘图设备
//    QPixmap pix(300,300);
//    QPainter painter(&pix);
//    painter.setPen(QPen(Qt::green));
//    painter.drawEllipse(QPoint(150,150),100,100);
//    //保存画图
//    pix.save("D:\\1.png");

    QImage image(300,300,QImage::Format_RGB32);
    image.fill(Qt::white);
    QPainter painter(&image);
    painter.setPen(QPen(Qt::green));
    painter.drawEllipse(QPoint(150,150),100,100);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::paintEvent(QPaintEvent *){

    QPainter painter(this);
    QImage img;
    img.load(":/Image/aoteman.jpg");
    for(int i=0;i<300;++i)
        for (int j=0;j<300;j++) {
             QRgb value=qRgb(0,255,0);
            img.setPixel(i,j,value);

        }
    painter.drawImage(0,0,img);
}

