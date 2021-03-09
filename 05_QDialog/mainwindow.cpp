#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //点击信号按钮弹出来一个对话框
    connect(ui->actionnew,&QAction::triggered,[=](){
//        对话框的两种分类
//             模态对话框（不可以对其他窗口进行操作）
//             非模态对话框（可以对其他窗口进行操作）
//        QDialog dlg(this);

//        //模态状态，有阻塞
//        dlg.resize(200,100);
//        dlg.exec();
//        qDebug()<<"pop"<<endl;


        //非模态
//          QDialog * dlg=new QDialog(this);
//          dlg->resize(200,100);
//          //防止内存泄漏
//          dlg->setAttribute(Qt::WA_DeleteOnClose);
//          dlg->show();


        //错误对话框
//        QMessageBox::critical(this,"critical","wrong");

        //信息对话框
//        QMessageBox::information(this,"information","HelloPiPizhu");

        //提问对话框
//        QMessageBox::question(this,"Question","HelloQuestion",QMessageBox::Save|QMessageBox::Ok|QMessageBox::No);

        //颜色对话框
//        QColor color=QColorDialog::getColor(QColor(255,0,0));
//        qDebug()<<"r="<<color.red()<<endl;

        //文件对话框
//        QFileDialog::getOpenFileName(this,"Open File","C:\\Users\王帅\\Desktop","(*.txt)");

        //字体对话框
        bool ok;
        QFont font=QFontDialog::getFont(&ok,QFont( "Helvetica [Cronyx]",36,10));
        qDebug()<<"family "<<font.family();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

