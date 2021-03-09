#include "dog.h"

Dog::Dog(QObject *parent) : QObject(parent)
{

}
void Dog::eat(){
    qDebug()<<"DingDingDing,oh!!!"<<endl;
}
