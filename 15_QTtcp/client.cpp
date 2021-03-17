#include "client.h"
#include "ui_client.h"
#include "QTcpSocket"
#include "QTcpServer"
#include "QHostAddress"
Client::Client(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Client)
{
    ui->setupUi(this);
    ui->sIP->setText("127.0.0.1");
    ui->sPort->setText("9999");
    //初始化客户端
    client=new QTcpSocket(this);
    //连接服务器,非阻塞的函数，啥时候成功是不管的
    client->connectToHost(QHostAddress(ui->sIP->text()),ui->sPort->text().toInt());
    //接收数据
    connect(client,&QTcpSocket::readyRead,this,[=](){
       QByteArray array=client->readAll();
       ui->record->append(array);
    });
    connect(ui->send,&QPushButton::clicked,this,[=](){
        client->write(ui->msg->toPlainText().toUtf8());
        ui->record->append("Me SAY:"+ui->msg->toPlainText());
        ui->msg->clear();
    });
}

Client::~Client()
{
    delete ui;
}
