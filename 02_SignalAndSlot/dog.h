#ifndef DOG_H
#define DOG_H

#include <QObject>
#include<QDebug>
class Dog : public QObject
{
    Q_OBJECT
public:
    explicit Dog(QObject *parent = nullptr);

signals:

public slots:
    void eat();
};

#endif // DOG_H
