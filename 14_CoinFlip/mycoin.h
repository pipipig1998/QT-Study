#ifndef MYCOIN_H
#define MYCOIN_H

#include <QPushButton>
#include <QString>
#include <QTimer>
class MyCoin : public QPushButton
{
    Q_OBJECT
public:
//    explicit MyCoin(QWidget *parent = nullptr);
      MyCoin(QString btnimg);

      int posx;
      int posy;
      bool  flag;
      QTimer* t1;
      QTimer *t2;
      int min=1;
      int max=8;
      bool isaction=0;
      void changeflag();

      void mouseProssEvent(QMouseEvent *e);

signals:

public slots:
};

#endif // MYCOIN_H
