/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *actionNewFile;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget_3;
    QWidget *dockWidgetContents_3;
    QLabel *label_3;
    QDockWidget *dockWidget_4;
    QWidget *dockWidgetContents_4;
    QLabel *label_2;
    QToolBar *toolBar;
    QToolBar *toolBar_2;
    QToolBar *toolBar_3;
    QDockWidget *dockWidget_5;
    QWidget *dockWidgetContents_5;
    QLabel *label_4;
    QDockWidget *dockWidget_6;
    QWidget *dockWidgetContents_6;
    QLabel *label;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->resize(600, 400);
        actionNewFile = new QAction(MainWindowClass);
        actionNewFile->setObjectName(QString::fromUtf8("actionNewFile"));
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindowClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        MainWindowClass->insertToolBarBreak(mainToolBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindowClass->setStatusBar(statusBar);
        dockWidget_3 = new QDockWidget(MainWindowClass);
        dockWidget_3->setObjectName(QString::fromUtf8("dockWidget_3"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        label_3 = new QLabel(dockWidgetContents_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 10, 54, 12));
        dockWidget_3->setWidget(dockWidgetContents_3);
        MainWindowClass->addDockWidget(static_cast<Qt::DockWidgetArea>(4), dockWidget_3);
        dockWidget_4 = new QDockWidget(MainWindowClass);
        dockWidget_4->setObjectName(QString::fromUtf8("dockWidget_4"));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        label_2 = new QLabel(dockWidgetContents_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 80, 54, 12));
        dockWidget_4->setWidget(dockWidgetContents_4);
        MainWindowClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_4);
        toolBar = new QToolBar(MainWindowClass);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindowClass->addToolBar(Qt::LeftToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindowClass);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        MainWindowClass->addToolBar(Qt::RightToolBarArea, toolBar_2);
        toolBar_3 = new QToolBar(MainWindowClass);
        toolBar_3->setObjectName(QString::fromUtf8("toolBar_3"));
        MainWindowClass->addToolBar(Qt::BottomToolBarArea, toolBar_3);
        dockWidget_5 = new QDockWidget(MainWindowClass);
        dockWidget_5->setObjectName(QString::fromUtf8("dockWidget_5"));
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QString::fromUtf8("dockWidgetContents_5"));
        label_4 = new QLabel(dockWidgetContents_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 40, 54, 12));
        dockWidget_5->setWidget(dockWidgetContents_5);
        MainWindowClass->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_5);
        dockWidget_6 = new QDockWidget(MainWindowClass);
        dockWidget_6->setObjectName(QString::fromUtf8("dockWidget_6"));
        dockWidgetContents_6 = new QWidget();
        dockWidgetContents_6->setObjectName(QString::fromUtf8("dockWidgetContents_6"));
        label = new QLabel(dockWidgetContents_6);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 0, 54, 12));
        dockWidget_6->setWidget(dockWidgetContents_6);
        MainWindowClass->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_6);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionNewFile);
        mainToolBar->addAction(actionNewFile);
        toolBar->addAction(actionNewFile);
        toolBar_2->addAction(actionNewFile);
        toolBar_3->addAction(actionNewFile);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "MainWindow", nullptr));
        actionNewFile->setText(QApplication::translate("MainWindowClass", "\346\226\260\345\273\272\346\226\207\344\273\266(&N)", nullptr));
        menu->setTitle(QApplication::translate("MainWindowClass", "\346\226\207\344\273\266(&F)", nullptr));
        label_3->setText(QApplication::translate("MainWindowClass", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("MainWindowClass", "TextLabel", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindowClass", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QApplication::translate("MainWindowClass", "toolBar_2", nullptr));
        toolBar_3->setWindowTitle(QApplication::translate("MainWindowClass", "toolBar_3", nullptr));
        label_4->setText(QApplication::translate("MainWindowClass", "TextLabel", nullptr));
        label->setText(QApplication::translate("MainWindowClass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
