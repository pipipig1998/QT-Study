/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 90, 141, 164));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout->addWidget(radioButton);

        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout->addWidget(radioButton_3);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        radioButton_4 = new QRadioButton(groupBox);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(groupBox);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        verticalLayout->addWidget(radioButton_5);


        verticalLayout_2->addLayout(verticalLayout);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(230, 90, 141, 164));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        radioButton_9 = new QRadioButton(groupBox_2);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));

        verticalLayout_3->addWidget(radioButton_9);

        radioButton_8 = new QRadioButton(groupBox_2);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));

        verticalLayout_3->addWidget(radioButton_8);

        radioButton_10 = new QRadioButton(groupBox_2);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));

        verticalLayout_3->addWidget(radioButton_10);

        radioButton_7 = new QRadioButton(groupBox_2);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));

        verticalLayout_3->addWidget(radioButton_7);

        radioButton_6 = new QRadioButton(groupBox_2);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));

        verticalLayout_3->addWidget(radioButton_6);


        verticalLayout_4->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        radioButton->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_3->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_4->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_5->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        groupBox_2->setTitle(QString());
        radioButton_9->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_8->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_10->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_7->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_6->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
