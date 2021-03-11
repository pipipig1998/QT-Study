/********************************************************************************
** Form generated from reading UI file 'smallwidgt.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMALLWIDGT_H
#define UI_SMALLWIDGT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_smallwidgt
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSlider *horizontalSlider;
    QSpinBox *spinBox;

    void setupUi(QWidget *smallwidgt)
    {
        if (smallwidgt->objectName().isEmpty())
            smallwidgt->setObjectName(QString::fromUtf8("smallwidgt"));
        smallwidgt->resize(255, 131);
        layoutWidget = new QWidget(smallwidgt);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 0, 135, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSlider = new QSlider(layoutWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout->addWidget(spinBox);


        retranslateUi(smallwidgt);

        QMetaObject::connectSlotsByName(smallwidgt);
    } // setupUi

    void retranslateUi(QWidget *smallwidgt)
    {
        smallwidgt->setWindowTitle(QApplication::translate("smallwidgt", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class smallwidgt: public Ui_smallwidgt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMALLWIDGT_H
