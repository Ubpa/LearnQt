/********************************************************************************
** Form generated from reading UI file 'selectcolorwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTCOLORWIDGET_H
#define UI_SELECTCOLORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectColorWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;

    void setupUi(QWidget *SelectColorWidget)
    {
        if (SelectColorWidget->objectName().isEmpty())
            SelectColorWidget->setObjectName(QString::fromUtf8("SelectColorWidget"));
        SelectColorWidget->resize(304, 191);
        verticalLayout = new QVBoxLayout(SelectColorWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(SelectColorWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        verticalLayout->addLayout(gridLayout);

        verticalLayout->setStretch(2, 1);

        retranslateUi(SelectColorWidget);

        QMetaObject::connectSlotsByName(SelectColorWidget);
    } // setupUi

    void retranslateUi(QWidget *SelectColorWidget)
    {
        SelectColorWidget->setWindowTitle(QApplication::translate("SelectColorWidget", "Form", nullptr));
        label->setText(QApplication::translate("SelectColorWidget", "\344\270\273\351\242\230\351\242\234\350\211\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectColorWidget: public Ui_SelectColorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTCOLORWIDGET_H
