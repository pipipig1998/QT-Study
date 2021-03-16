#include "chooselevelscence.h"
#include "QPixmap"
#include "QMenuBar"
#include "QPainter"
#include "mypushbutton.h"
#include "QDebug"
#include "QLabel"
ChooseLevelScence::ChooseLevelScence(QWidget *parent) : QMainWindow(parent)
{
    this->setFixedSize(320,588);
    this->setWindowIcon(QPixmap(":/res/Coin0001.png"));
    this->setWindowTitle("choose level scense");
    QMenuBar * bar=menuBar();
    this->setMenuBar(bar);
    QMenu * startmenu=bar->addMenu("start");
    QAction * quiteAction=startmenu->addAction("quit");
    connect(quiteAction,&QAction::triggered,[=](){
        this->close();
    });
    MyPushButton * backbtn=new MyPushButton(":/res/BackButton.png",":res/BackButtonSelected.png");
    backbtn->setParent(this);
    backbtn->move(this->width()-backbtn->width(),this->height()-backbtn->height());
    connect(backbtn,&QPushButton::clicked,[=](){
        qDebug()<<111<<endl;
        emit this->chooseback();
    });

    for (int i = 0; i < 20; ++i) {
       MyPushButton * menubtn=new MyPushButton(":/res/LevelIcon.png");
       menubtn->setParent(this);
       menubtn->move(25+i%4*70,130+i/4*70);
       qDebug()<<111<<endl;
       connect(menubtn,&QPushButton::clicked,[=](){
          qDebug()<<QString::number(i+1)<<endl;
          playscene=new PlayScene(i+1);
          playscene->show();
          this->hide();

          connect(playscene,&PlayScene::chooseback,[=](){
              this->show();
              delete playscene;
              playscene=NULL;
          });
       });

       QLabel *label=new QLabel;
       label->setParent(this);
       label->setFixedSize(menubtn->width(),menubtn->height());
       label->setText(QString::number(i+1));
       label->move(25+i%4*70,130+i/4*70);
       label->setAlignment(Qt::AlignCenter|Qt::AlignVCenter);
       label->setAttribute(Qt::WA_TransparentForMouseEvents);
    }



}
void ChooseLevelScence::paintEvent(QPaintEvent *){
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/res/OtherSceneBg.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
    pix.load(":/res/Title.png");
    painter.drawPixmap((this->width()-pix.width())*0.5,30,pix.width(),pix.height(),pix);


}
