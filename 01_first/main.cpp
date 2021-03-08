#include "mywidgt.h"

//包含一个应用程序类的头文件
#include <QApplication>


//argc命令行变量的数量，argv是命令行变量的数组
int main(int argc, char *argv[])
{
    //应用程序对象，在QT中，有且仅有一个
    QApplication a(argc, argv);

    //窗口的对象
    myWidgt w;
    w.show();
    return a.exec();
}
