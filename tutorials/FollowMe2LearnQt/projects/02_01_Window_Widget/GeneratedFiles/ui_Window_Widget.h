/********************************************************************************
** Form generated from reading UI file 'Window_Widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_WIDGET_H
#define UI_WINDOW_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window_WidgetClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Window_WidgetClass)
    {
        if (Window_WidgetClass->objectName().isEmpty())
            Window_WidgetClass->setObjectName(QString::fromUtf8("Window_WidgetClass"));
        Window_WidgetClass->resize(600, 400);
        menuBar = new QMenuBar(Window_WidgetClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Window_WidgetClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Window_WidgetClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Window_WidgetClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Window_WidgetClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Window_WidgetClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Window_WidgetClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Window_WidgetClass->setStatusBar(statusBar);

        retranslateUi(Window_WidgetClass);

        QMetaObject::connectSlotsByName(Window_WidgetClass);
    } // setupUi

    void retranslateUi(QMainWindow *Window_WidgetClass)
    {
        Window_WidgetClass->setWindowTitle(QApplication::translate("Window_WidgetClass", "Window_Widget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window_WidgetClass: public Ui_Window_WidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_WIDGET_H
