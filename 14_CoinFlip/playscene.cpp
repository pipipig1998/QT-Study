#include "playscene.h"
#include "QMenu"
#include "QMenuBar"
#include "QAction"
#include "QPainter"
#include "mypushbutton.h"
#include "QDebug"
#include "QLabel"
#include "mycoin.h"
#include "dataconfig.h"
PlayScene::PlayScene(int level)
{
    this->levelindex=level;
    this->setFixedSize(320,588);
    this->setWindowIcon(QIcon(":/res/Coin0001.png"));
    this->setWindowTitle("Play!");
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
    QLabel *label=new QLabel();
    QFont font;
    font.setPointSize(20);
    label->setParent(this);
    label->setFont(font);
    label->setText("level:"+QString::number(this->levelindex));
    label->setGeometry(QRect(30,this->height()-60,120,50));

    dataConfig config;
    for(int i=0;i<4;++i){
        for (int j=0;j<4;++j){
            this->gameArray[i][j]=config.mData[this->levelindex][i][j];
        }
    }



    for (int i=0;i<4;++i) {
        for(int j=0;j<4;++j){
            QLabel *label=new QLabel();
            label->setParent(this);
            label->setPixmap(QPixmap(":/res/BoardNode.png"));
            label->setGeometry(0,0,50,50);
            label->move(57+i*50,200+j*50);

            QString str;
            if(this->gameArray[i][j]==1)
                str=":/res/Coin0001.png";
            else
                str=":/res/Coin0008.png";
            MyCoin * coin =new MyCoin(str);
            coin->posx=i;
            coin->posy=j;
            coinbtn[i][j]=coin;
            coin->flag=gameArray[i][j];
            coin->setParent(this);
            coin->move(57+i*50,200+j*50);
            connect(coin,&MyCoin::clicked,[=](){
                coin->changeflag();
                this->gameArray[i][j]=this->gameArray[i][j]==0?1:0;
                if(coin->posx+1<=3){
                    coinbtn[coin->posx+1][coin->posy]->changeflag();
                    this->gameArray[coin->posx+1][coin->posy ]=this->gameArray[coin->posx+1][coin->posy ]==0?1:0;

                }
                if(coin->posx-1>=0){
                    coinbtn[coin->posx-1][coin->posy]->changeflag();
                    this->gameArray[coin->posx-1][coin->posy ]=this->gameArray[coin->posx-1][coin->posy ]==0?1:0;

                }
                if(coin->posy+1<=3){
                    coinbtn[coin->posx][coin->posy+1]->changeflag();
                    this->gameArray[coin->posx][coin->posy+1 ]=this->gameArray[coin->posx][coin->posy+1 ]==0?1:0;

                }
                if(coin->posy-1>=0){
                    coinbtn[coin->posx][coin->posy-1]->changeflag();
                    this->gameArray[coin->posx][coin->posy-1 ]=this->gameArray[coin->posx][coin->posy-1 ]==0?1:0;

                }
                this->iswin=1;
                for(int i=0;i<4;++i)
                    for(int j=0;j<4;++j){
                        if(this->coinbtn[i][j]=false){
                            this->iswin=0;
                            break;
                    }
                if(this->iswin){
                    qDebug()<<"1234123r1234"<<endl;
                }
            }});
        }
    }

}

void PlayScene::paintEvent(QPaintEvent *){
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/res/OtherSceneBg.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
    pix.load(":/res/Title.png");
    painter.drawPixmap((this->width()-pix.width())*0.5,30,pix.width(),pix.height(),pix);

}
