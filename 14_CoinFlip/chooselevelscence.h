#ifndef CHOOSELEVELSCENCE_H
#define CHOOSELEVELSCENCE_H

#include <QMainWindow>
#include <playscene.h>
class ChooseLevelScence : public QMainWindow
{
    Q_OBJECT
public:
    explicit ChooseLevelScence(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *);
    PlayScene * playscene=NULL;

signals:
    void chooseback();
public slots:
};

#endif // CHOOSELEVELSCENCE_H
