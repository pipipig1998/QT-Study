#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //创建菜单栏,菜单栏只能有一个
    QMenuBar * bar=menuBar();
    this->setMenuBar(bar);
    //创建菜单
    QMenu* fileMenu = bar->addMenu("file");
    QMenu* editMenu = bar->addMenu("edit");

    //创建菜单项
    QAction* newAction=fileMenu->addAction("new");
    //添加分隔符
    fileMenu->addSeparator();
    QAction* openAction=fileMenu->addAction("open");

    //工具栏可以有多个
    QToolBar* toolbar=new QToolBar(this);
    this->addToolBar(Qt::LeftToolBarArea,toolbar);

    //设置停靠区域
    toolbar->setAllowedAreas(Qt::LeftToolBarArea|Qt::RightToolBarArea);
    toolbar->setFloatable(false);

    //工具栏添加工具
    toolbar->addAction(newAction);
    toolbar->addSeparator();
    toolbar->addAction(openAction);

    //工具栏添加控件
    QPushButton * btn=new QPushButton("按钮",this);
    toolbar->addWidget(btn);

    //状态栏，最多有一个
    QStatusBar* stBar=statusBar();
    this->setStatusBar(stBar);
    //状态栏放标签控件
     QLabel *label=new QLabel("提示信息",this);
     stBar->addWidget(label);
     QLabel *rightlabel=new QLabel("右侧提示信息",this);
     stBar->addPermanentWidget(rightlabel);

     //铆接部件（浮动窗口）,可以有多个
    QDockWidget* dockWidgt=new QDockWidget("浮动",this);
    this->addDockWidget(Qt::LeftDockWidgetArea,dockWidgt);
    dockWidgt->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);

    //创建中心部件
    QTextEdit* edit=new QTextEdit(this);
    this->setCentralWidget(edit);


}

MainWindow::~MainWindow()
{
    delete ui;
}

