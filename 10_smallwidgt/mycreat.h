#ifndef MYCREAT_H
#define MYCREAT_H

#include <QWidget>

namespace Ui {
class mycreat;
}

class mycreat : public QWidget
{
    Q_OBJECT

public:
    explicit mycreat(QWidget *parent = nullptr);
    ~mycreat();

private:
    Ui::mycreat *ui;
};

#endif // MYCREAT_H
