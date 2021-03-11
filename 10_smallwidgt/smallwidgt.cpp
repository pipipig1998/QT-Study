#include "smallwidgt.h"
#include "ui_smallwidgt.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
smallwidgt::smallwidgt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::smallwidgt)
{
    ui->setupUi(this);

    void(QSpinBox::*s)(int)=&QSpinBox::valueChanged;
    connect(ui->spinBox,s,ui->horizontalSlider,&QSlider::setValue);
    connect(ui->horizontalSlider,&QSlider::valueChanged,ui->spinBox,&QSpinBox::setValue);
}

smallwidgt::~smallwidgt()
{
    delete ui;
}
void smallwidgt::setNum(int num){
    ui->spinBox->setValue(num);
    ui->horizontalSlider->setValue(num);

}
int smallwidgt::getNum(){
    return ui->spinBox->value();

}
