#ifndef MYLABEL_H
#define MYLABEL_H

#include <QLabel>

class mylabel : public QLabel
{
    Q_OBJECT
public:
    explicit mylabel(QWidget *parent = nullptr);

    //鼠标进入
    void enterEvent(QEvent *event);
    //鼠标离开
    void leaveEvent(QEvent *event);
    //鼠标移动
    void mouseMoveEvent(QMouseEvent *ev) ;
    //鼠标释放
    void mouseReleaseEvent(QMouseEvent *ev) ;

signals:

public slots:
};

#endif // MYLABEL_H
