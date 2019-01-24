/********************************************************************************
** Form generated from reading UI file 'myQWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYQWIDGET_H
#define UI_MYQWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myQWidgetClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *myQWidgetClass)
    {
        if (myQWidgetClass->objectName().isEmpty())
            myQWidgetClass->setObjectName(QString::fromUtf8("myQWidgetClass"));
        myQWidgetClass->resize(600, 400);
        menuBar = new QMenuBar(myQWidgetClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        myQWidgetClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(myQWidgetClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        myQWidgetClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(myQWidgetClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        myQWidgetClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(myQWidgetClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        myQWidgetClass->setStatusBar(statusBar);

        retranslateUi(myQWidgetClass);

        QMetaObject::connectSlotsByName(myQWidgetClass);
    } // setupUi

    void retranslateUi(QMainWindow *myQWidgetClass)
    {
        myQWidgetClass->setWindowTitle(QApplication::translate("myQWidgetClass", "myQWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myQWidgetClass: public Ui_myQWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYQWIDGET_H
