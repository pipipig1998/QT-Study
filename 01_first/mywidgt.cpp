#include "mywidgt.h"
#include<QPushButton>
#include<mybutton.h>
#include<QDebug>
myWidgt::myWidgt(QWidget *parent)
    : QMainWindow(parent)
{
    qDebug()<<"myWidge create"<<endl;
    QPushButton *btn=new QPushButton();
    btn->setParent(this);
    btn->setText("按钮");
    btn->resize(100,100);
    btn->move(100,100);

    QPushButton *btn2=new QPushButton("222",this);

    resize(600,400);
    setFixedSize(600,400);

    MyButton *btn3=new MyButton();
    btn3->setText("my button");
    btn3->move(400,300);
    btn3->setParent(this);

//    setWindowTitle("First Window");

    connect(btn,&QPushButton::pressed,this,&QWidget::close);
}

myWidgt::~myWidgt()
{
    qDebug()<<"myWidge die"<<endl;
}

