#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //创建一个老师对象
    this->tz=new Teacher();
    //创建一个学生对象
    this->st=new Student();
    //建立连接
    //connect(tz,&Teacher::hungry,st,&Student::treat);



    this->dog=new Dog();
    this->dang=new Dang();
    connect(dang,&Dang::xiang,dog,&Dog::eat);
    //调用下课
    connect(tz,teacher,st,student);

    QPushButton * btn=new QPushButton("ClassOver",this);
    this->resize(600,400);
    connect(btn,&QPushButton::clicked,tz,teacher2);
    //connect(btn,&QPushButton::clicked,this,&MainWindow::classIsOver);
    //classIsOver();
    //gogogo();
}

void MainWindow::classIsOver(){
    //下课函数，触发老师饿了的信号
     emit tz->hungry();
    //emit tz->hungry("humberger");
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::gogogo(){
    emit dog->eat();
}
