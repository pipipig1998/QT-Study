#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"student.h"
#include"teacher.h"
#include"dog.h"
#include"dang.h"
#include"QPushButton"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    void (Teacher:: *teacher)(QString)=&Teacher::hungry;
    void (Student:: *student)(QString)=&Student::treat;
    void (Teacher:: *teacher2)(void)=&Teacher::hungry;
    void (Student:: *student2)(void)=&Student::treat;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Teacher * tz;
    Student * st;

    Dog* dog;
    Dang* dang;

    void classIsOver();
    void gogogo();

};
#endif // MAINWINDOW_H
