/********************************************************************************
** Form generated from reading UI file 'ToolBar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLBAR_H
#define UI_TOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToolBarClass
{
public:
    QAction *actionAction1;
    QAction *actionAction2;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QCheckBox *check_floatable;
    QListWidget *listWidget_area;
    QListWidget *listWidget_button;
    QCheckBox *check_movable;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ToolBarClass)
    {
        if (ToolBarClass->objectName().isEmpty())
            ToolBarClass->setObjectName(QString::fromUtf8("ToolBarClass"));
        ToolBarClass->resize(400, 300);
        actionAction1 = new QAction(ToolBarClass);
        actionAction1->setObjectName(QString::fromUtf8("actionAction1"));
        actionAction2 = new QAction(ToolBarClass);
        actionAction2->setObjectName(QString::fromUtf8("actionAction2"));
        centralWidget = new QWidget(ToolBarClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        check_floatable = new QCheckBox(centralWidget);
        check_floatable->setObjectName(QString::fromUtf8("check_floatable"));
        check_floatable->setChecked(true);

        gridLayout->addWidget(check_floatable, 0, 0, 1, 1);

        listWidget_area = new QListWidget(centralWidget);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget_area);
        __qlistwidgetitem->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget_area);
        __qlistwidgetitem1->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget_area);
        __qlistwidgetitem2->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget_area);
        __qlistwidgetitem3->setCheckState(Qt::Checked);
        listWidget_area->setObjectName(QString::fromUtf8("listWidget_area"));

        gridLayout->addWidget(listWidget_area, 1, 0, 1, 2);

        listWidget_button = new QListWidget(centralWidget);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget_button);
        __qlistwidgetitem4->setCheckState(Qt::Checked);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget_button);
        __qlistwidgetitem5->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listWidget_button);
        __qlistwidgetitem6->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(listWidget_button);
        __qlistwidgetitem7->setCheckState(Qt::Unchecked);
        listWidget_button->setObjectName(QString::fromUtf8("listWidget_button"));

        gridLayout->addWidget(listWidget_button, 1, 2, 1, 1);

        check_movable = new QCheckBox(centralWidget);
        check_movable->setObjectName(QString::fromUtf8("check_movable"));
        check_movable->setChecked(true);

        gridLayout->addWidget(check_movable, 0, 2, 1, 1);

        ToolBarClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ToolBarClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        ToolBarClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ToolBarClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setAllowedAreas(Qt::AllToolBarAreas);
        ToolBarClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ToolBarClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ToolBarClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionAction1);
        menuFile->addAction(actionAction2);
        mainToolBar->addAction(actionAction1);
        mainToolBar->addAction(actionAction2);

        retranslateUi(ToolBarClass);

        QMetaObject::connectSlotsByName(ToolBarClass);
    } // setupUi

    void retranslateUi(QMainWindow *ToolBarClass)
    {
        ToolBarClass->setWindowTitle(QApplication::translate("ToolBarClass", "ToolBarClass", nullptr));
        actionAction1->setText(QApplication::translate("ToolBarClass", "Action1", nullptr));
        actionAction2->setText(QApplication::translate("ToolBarClass", "Action2", nullptr));
        check_floatable->setText(QApplication::translate("ToolBarClass", "floatable ", nullptr));

        const bool __sortingEnabled = listWidget_area->isSortingEnabled();
        listWidget_area->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_area->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("ToolBarClass", "Qt::LeftToolBarArea", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget_area->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("ToolBarClass", "Qt::RightToolBarArea", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget_area->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("ToolBarClass", "Qt::TopToolBarArea", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget_area->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("ToolBarClass", "Qt::BottomToolBarArea", nullptr));
        listWidget_area->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = listWidget_button->isSortingEnabled();
        listWidget_button->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem4 = listWidget_button->item(0);
        ___qlistwidgetitem4->setText(QApplication::translate("ToolBarClass", "Qt::ToolButtonIconOnly", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget_button->item(1);
        ___qlistwidgetitem5->setText(QApplication::translate("ToolBarClass", "Qt::ToolButtonTextOnly", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget_button->item(2);
        ___qlistwidgetitem6->setText(QApplication::translate("ToolBarClass", "Qt::ToolButtonTextBesideIcon", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget_button->item(3);
        ___qlistwidgetitem7->setText(QApplication::translate("ToolBarClass", "Qt::ToolButtonTextUnderIcon", nullptr));
        listWidget_button->setSortingEnabled(__sortingEnabled1);

        check_movable->setText(QApplication::translate("ToolBarClass", "movable ", nullptr));
        menuFile->setTitle(QApplication::translate("ToolBarClass", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ToolBarClass: public Ui_ToolBarClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLBAR_H
