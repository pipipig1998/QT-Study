#include "student.h"
#include<QDebug>
Student::Student(QObject *parent) : QObject(parent)
{

}

void Student::treat(){
    qDebug()<<"eating"<<endl;
}
void Student::treat(QString foodname){
    qDebug()<<"eating"<<foodname.toUtf8().data()<<endl;
}
