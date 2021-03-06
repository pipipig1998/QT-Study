#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>

class Teacher : public QObject
{
    Q_OBJECT
public:
    explicit Teacher(QObject *parent = nullptr);

signals:
    //自定义信号写在Signal下
    //返回值是void
    //信号只需要声明，不需要实现，可以有参数也就是可以重载
    void hungry();
    void hungry(QString foodname);

public slots:
};

#endif // TEACHER_H
