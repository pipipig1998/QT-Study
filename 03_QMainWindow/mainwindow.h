#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"QMenuBar"
#include"QMenu"
#include"QToolBar"
#include"QDebug"
#include"QAction"
#include"QPushButton"
#include"QStatusBar"
#include"QLabel"
#include"QDockWidget"
#include"QTextEdit"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
