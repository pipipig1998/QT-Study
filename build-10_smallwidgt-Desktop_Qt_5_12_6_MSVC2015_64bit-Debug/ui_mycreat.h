/********************************************************************************
** Form generated from reading UI file 'mycreat.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCREAT_H
#define UI_MYCREAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mycreat
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox;
    QSlider *horizontalSlider;

    void setupUi(QWidget *mycreat)
    {
        if (mycreat->objectName().isEmpty())
            mycreat->setObjectName(QString::fromUtf8("mycreat"));
        mycreat->resize(168, 60);
        widget = new QWidget(mycreat);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 135, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout->addWidget(spinBox);

        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);


        retranslateUi(mycreat);

        QMetaObject::connectSlotsByName(mycreat);
    } // setupUi

    void retranslateUi(QWidget *mycreat)
    {
        mycreat->setWindowTitle(QApplication::translate("mycreat", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mycreat: public Ui_mycreat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCREAT_H
