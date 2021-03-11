#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->treeWidget->setHeaderLabels(QStringList()<<"heros"<<"heros introduction");

    QTreeWidgetItem * item1=new QTreeWidgetItem(QStringList()<<"strength");
    QTreeWidgetItem * item2=new QTreeWidgetItem(QStringList()<<"minjie");
    QTreeWidgetItem * item3=new QTreeWidgetItem(QStringList()<<"smart");

    ui->treeWidget->addTopLevelItem(item1);
    ui->treeWidget->addTopLevelItem(item2);
    ui->treeWidget->addTopLevelItem(item3);

    QTreeWidgetItem * l1=new QTreeWidgetItem(QStringList()<<"pig"<<"henghengheng");
    QTreeWidgetItem * l2=new QTreeWidgetItem(QStringList()<<"sheep"<<"miemiemie");
    QTreeWidgetItem * l3=new QTreeWidgetItem(QStringList()<<"fish"<<"gulugulu");
    item1->addChild(l1);
    item1->addChild(l2);
    item2->addChild(l3);



}

MainWindow::~MainWindow()
{
    delete ui;
}

