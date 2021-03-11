#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //设置默认选择男
    ui->radioButton->setChecked(true);

    //选中女打印信息
    connect(ui->radiowoman,&QRadioButton::clicked,[=](){
        QMessageBox::information(this,"choose","woman");
    }
    );

    //多选按钮  2是选中 0是非选中
    connect(ui->checkBox,&QCheckBox::clicked,[=](){
        QMessageBox::information(this,"checkbox",ui->checkBox->text());
    });

    QStringList list;
    list<<"fist blood"<<"double kill"<<"hahhah";
    ui->listWidget->addItems(list);


}

MainWindow::~MainWindow()
{
    delete ui;
}

