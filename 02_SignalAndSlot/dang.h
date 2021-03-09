#ifndef DANG_H
#define DANG_H

#include <QObject>

class Dang : public QObject
{
    Q_OBJECT
public:
    explicit Dang(QObject *parent = nullptr);

signals:
    void xiang();
public slots:
};

#endif // DANG_H
