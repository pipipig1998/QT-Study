#include "mypushbutton.h"
#include "QPixmap"
#include "QDebug"
#include "QPropertyAnimation"
#include "QRect"
#include "QEasingCurve"
MyPushButton::MyPushButton(QString nomalImage,QString pressImage)
{
    this->normalImagePath=nomalImage;
    this->pressImagePath=pressImage;
    QPixmap pix;
    pix.load(normalImagePath);
    this->setFixedSize(pix.width(),pix.height());
    this->setStyleSheet("QPushButton{border:0px;}");
    this->setIcon(pix);
    this->setIconSize(QSize(pix.width(),pix.height()));


}
void MyPushButton::zoom1(){
    QPropertyAnimation * anamation=new QPropertyAnimation(this,"geometry");
     anamation->setDuration(200);
      anamation->setEndValue(QRect(this->x(),this->y()+20,this->width(),this->height()));
     anamation->setStartValue(QRect(this->x(),this->y(),this->width(),this->height()));

     anamation->setEasingCurve(QEasingCurve::OutBounce);
     anamation->start();
}
void MyPushButton::zoom2(){
    QPropertyAnimation * anamation=new QPropertyAnimation(this,"geometry");
    anamation->setDuration(200);
    anamation->setEndValue(QRect(this->x(),this->y()-10,this->width(),this->height()));
    anamation->setStartValue(QRect(this->x(),this->y(),this->width(),this->height()));

    anamation->setEasingCurve(QEasingCurve::OutBounce);
    anamation->start();
}
