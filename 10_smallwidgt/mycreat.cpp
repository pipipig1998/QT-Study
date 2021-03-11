#include "mycreat.h"
#include "ui_mycreat.h"

mycreat::mycreat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mycreat)
{
    ui->setupUi(this);
}

mycreat::~mycreat()
{
    delete ui;
}
