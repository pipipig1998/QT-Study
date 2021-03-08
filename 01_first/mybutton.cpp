#include "mybutton.h"
#include<QDebug>
MyButton::MyButton(QPushButton *parent) : QPushButton(parent)
{
    qDebug()<<"1"<<endl;
}
MyButton::~MyButton(){
    qDebug()<<"2"<<endl;
}
