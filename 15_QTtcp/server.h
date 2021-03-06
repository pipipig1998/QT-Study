#ifndef SERVER_H
#define SERVER_H

#include <QWidget>
#include "QTcpServer"
#include "QTcpSocket"
QT_BEGIN_NAMESPACE
namespace Ui { class Server; }
QT_END_NAMESPACE

class Server : public QWidget
{
    Q_OBJECT

public:
    QTcpServer * server;
    QTcpSocket * conn;
    Server(QWidget *parent = nullptr);
    ~Server();

private:
    Ui::Server *ui;
};
#endif // SERVER_H
