#ifndef MYWIDGT_H
#define MYWIDGT_H

#include <QMainWindow>

class myWidgt : public QMainWindow
{
    Q_OBJECT

public:
    myWidgt(QWidget *parent = nullptr);
    ~myWidgt();
};
#endif // MYWIDGT_H
