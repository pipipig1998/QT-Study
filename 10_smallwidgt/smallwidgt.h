#ifndef SMALLWIDGT_H
#define SMALLWIDGT_H

#include <QWidget>

namespace Ui {
class smallwidgt;
}

class smallwidgt : public QWidget
{
    Q_OBJECT

public:
    explicit smallwidgt(QWidget *parent = nullptr);
    ~smallwidgt();
    void setNum(int num);
    int getNum();
private:
    Ui::smallwidgt *ui;

};

#endif // SMALLWIDGT_H
