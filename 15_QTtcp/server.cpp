#include "server.h"
#include "ui_server.h"
#include "QTcpServer"
#include "QTcpSocket"

Server::Server(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Server){

    ui->setupUi(this);
    ui->sIP->setText("127.0.0.1");
    ui->sPort->setText("9999");

    //实例化server和conn
    server=new QTcpServer(this);
    //监听(本地地址，端口号)
    server->listen(QHostAddress(ui->sIP->text()),ui->sPort->text().toInt());
    //新的连接
    connect(server,&QTcpServer::newConnection,[=](){
        //接收客户端的套接字对象 accept
        this->conn=server->nextPendingConnection();
        //此时已经建立了连接，需要发送数据,发送的话只有点击发送按钮才能发送
        //显示新的连接
        ui->record->append("New connection");
        //接收数据,
        connect(conn,&QTcpSocket::readyRead,this,[=](){
            //接收客户端的数据
           QByteArray array= conn->readAll();
           ui->record->append(array);
        });

    });
    connect(ui->send,&QPushButton::clicked,this,[=](){

        conn->write(ui->msg->toPlainText().toUtf8());
        ui->record->append("Me say:"+ui->msg->toPlainText());
        //发送完毕后清除消息
        ui->msg->clear();

    });
}

Server::~Server()
{
    delete ui;
}

