#include "mycoin.h"
#include "QPixmap"
#include "QSize"
MyCoin::MyCoin(QString btnimg)
{
       QPixmap pix;
       pix.load(btnimg);
       this->setFixedSize(pix.width(),pix.height());
       this->setStyleSheet("QPushButton{border:0px;}");
       this->setIcon(pix);
       this->setIconSize(QSize(pix.width(),pix.height()));

       t1=new QTimer;
       t2=new QTimer;
       connect(t1,&QTimer::timeout,[=](){
           QPixmap pix;
           QString str=QString(":/res/Coin000%1").arg(this->min++);
           pix.load(str);
           this->setFixedSize(pix.width(),pix.height());
           this->setStyleSheet("QPushButton{border:0px;}");
           this->setIcon(pix);
           this->setIconSize(QSize(pix.width(),pix.height()));
           if(min>max){
               min=1;
               t1->stop();
               isaction=0;
           }
       });
       connect(t2,&QTimer::timeout,[=](){
           QPixmap pix;
           QString str=QString(":/res/Coin000%1").arg(this->max--);
           pix.load(str);
           this->setFixedSize(pix.width(),pix.height());
           this->setStyleSheet("QPushButton{border:0px;}");
           this->setIcon(pix);
           this->setIconSize(QSize(pix.width(),pix.height()));
           if(max<min){
               max=8;
               t2->stop();
               isaction=0;
           }
       });

}
void MyCoin::changeflag(){
    if(this->flag){
        this->flag=0;
        isaction=1;
        t1->start(30);
    }else{
        this->flag=1;
        isaction=1;
        t2->start(30);
    }

}
void MyCoin::mouseProssEvent(QMouseEvent *e){

    if(this->isaction)
        return;
    else
         QPushButton::mousePressEvent(e);
}
























