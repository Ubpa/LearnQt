/********************************************************************************
** Form generated from reading UI file 'Dock.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCK_H
#define UI_DOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DockClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listWidget_areas;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QListWidget *listWidget_features;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dock_left;
    QWidget *dockWidgetContents;
    QDockWidget *dock_right;
    QWidget *dockWidgetContents_3;
    QDockWidget *dock_top;
    QWidget *dockWidgetContents_4;
    QDockWidget *dock_bottom;
    QWidget *dockWidgetContents_5;

    void setupUi(QMainWindow *DockClass)
    {
        if (DockClass->objectName().isEmpty())
            DockClass->setObjectName(QString::fromUtf8("DockClass"));
        DockClass->resize(444, 362);
        centralWidget = new QWidget(DockClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        listWidget_areas = new QListWidget(tab);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget_areas);
        __qlistwidgetitem->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget_areas);
        __qlistwidgetitem1->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget_areas);
        __qlistwidgetitem2->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget_areas);
        __qlistwidgetitem3->setCheckState(Qt::Unchecked);
        listWidget_areas->setObjectName(QString::fromUtf8("listWidget_areas"));

        verticalLayout_2->addWidget(listWidget_areas);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        listWidget_features = new QListWidget(tab_2);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget_features);
        __qlistwidgetitem4->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget_features);
        __qlistwidgetitem5->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listWidget_features);
        __qlistwidgetitem6->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(listWidget_features);
        __qlistwidgetitem7->setCheckState(Qt::Unchecked);
        listWidget_features->setObjectName(QString::fromUtf8("listWidget_features"));

        verticalLayout_3->addWidget(listWidget_features);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        DockClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DockClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 444, 23));
        DockClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DockClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        DockClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DockClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        DockClass->setStatusBar(statusBar);
        dock_left = new QDockWidget(DockClass);
        dock_left->setObjectName(QString::fromUtf8("dock_left"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        dock_left->setWidget(dockWidgetContents);
        DockClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dock_left);
        dock_right = new QDockWidget(DockClass);
        dock_right->setObjectName(QString::fromUtf8("dock_right"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        dock_right->setWidget(dockWidgetContents_3);
        DockClass->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dock_right);
        dock_top = new QDockWidget(DockClass);
        dock_top->setObjectName(QString::fromUtf8("dock_top"));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        dock_top->setWidget(dockWidgetContents_4);
        DockClass->addDockWidget(static_cast<Qt::DockWidgetArea>(4), dock_top);
        dock_bottom = new QDockWidget(DockClass);
        dock_bottom->setObjectName(QString::fromUtf8("dock_bottom"));
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QString::fromUtf8("dockWidgetContents_5"));
        dock_bottom->setWidget(dockWidgetContents_5);
        DockClass->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dock_bottom);

        retranslateUi(DockClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DockClass);
    } // setupUi

    void retranslateUi(QMainWindow *DockClass)
    {
        DockClass->setWindowTitle(QApplication::translate("DockClass", "DockClass", nullptr));

        const bool __sortingEnabled = listWidget_areas->isSortingEnabled();
        listWidget_areas->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_areas->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("DockClass", "LeftDockWidgetArea ", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget_areas->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("DockClass", "RightDockWidgetArea", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget_areas->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("DockClass", "TopDockWidgetArea", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget_areas->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("DockClass", "BottomDockWidgetArea", nullptr));
        listWidget_areas->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("DockClass", "allowedAreas", nullptr));

        const bool __sortingEnabled1 = listWidget_features->isSortingEnabled();
        listWidget_features->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem4 = listWidget_features->item(0);
        ___qlistwidgetitem4->setText(QApplication::translate("DockClass", "DockWidgetClosable", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget_features->item(1);
        ___qlistwidgetitem5->setText(QApplication::translate("DockClass", "DockWidgetMovable", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget_features->item(2);
        ___qlistwidgetitem6->setText(QApplication::translate("DockClass", "DockWidgetFloatable", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget_features->item(3);
        ___qlistwidgetitem7->setText(QApplication::translate("DockClass", "DockWidgetVerticalTitleBar", nullptr));
        listWidget_features->setSortingEnabled(__sortingEnabled1);

        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("DockClass", "features", nullptr));
        dock_left->setWindowTitle(QApplication::translate("DockClass", "\345\267\246\344\276\247", nullptr));
        dock_right->setWindowTitle(QApplication::translate("DockClass", "\345\217\263\344\276\247", nullptr));
        dock_top->setWindowTitle(QApplication::translate("DockClass", "\344\270\212\344\276\247", nullptr));
        dock_bottom->setWindowTitle(QApplication::translate("DockClass", "\344\270\213\344\276\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DockClass: public Ui_DockClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCK_H
