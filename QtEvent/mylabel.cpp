#include "mylabel.h"
#include "QDebug"
mylabel::mylabel(QWidget *parent) : QLabel(parent)
{

}
void mylabel::enterEvent(QEvent *event){

    qDebug()<<"enter"<<endl;
}
void mylabel::leaveEvent(QEvent *event){
    qDebug()<<"leave"<<endl;
}
void mylabel::mouseMoveEvent(QMouseEvent *ev){
    qDebug()<<"move"<<endl;
}
void mylabel::mouseReleaseEvent(QMouseEvent *ev){

    qDebug()<<"release"<<endl;
}
