/********************************************************************************
** Form generated from reading UI file 'HelloWorld.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOWORLD_H
#define UI_HELLOWORLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloWorldClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HelloWorldClass)
    {
        if (HelloWorldClass->objectName().isEmpty())
            HelloWorldClass->setObjectName(QString::fromUtf8("HelloWorldClass"));
        HelloWorldClass->resize(600, 400);
        centralWidget = new QWidget(HelloWorldClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 140, 75, 23));
        HelloWorldClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HelloWorldClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        HelloWorldClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HelloWorldClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        HelloWorldClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HelloWorldClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        HelloWorldClass->setStatusBar(statusBar);

        retranslateUi(HelloWorldClass);

        QMetaObject::connectSlotsByName(HelloWorldClass);
    } // setupUi

    void retranslateUi(QMainWindow *HelloWorldClass)
    {
        HelloWorldClass->setWindowTitle(QApplication::translate("HelloWorldClass", "HelloWorld", nullptr));
        pushButton->setText(QApplication::translate("HelloWorldClass", "HelloWorld", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelloWorldClass: public Ui_HelloWorldClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOWORLD_H
