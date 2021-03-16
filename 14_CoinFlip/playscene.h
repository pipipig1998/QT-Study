#ifndef PLAYSCENE_H
#define PLAYSCENE_H

#include <QMainWindow>
#include "mycoin.h"
class PlayScene : public QMainWindow
{
    Q_OBJECT
public:
   // explicit PlayScene(QWidget *parent = nullptr);
    PlayScene(int level);
    int levelindex;
    int gameArray[4][4];
    MyCoin * coinbtn[4][4];
          bool iswin=0;
    void paintEvent(QPaintEvent *);

signals:
     void chooseback();
public slots:
};

#endif // PLAYSCENE_H
