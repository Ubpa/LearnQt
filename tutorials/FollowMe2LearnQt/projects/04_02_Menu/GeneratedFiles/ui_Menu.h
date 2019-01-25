/********************************************************************************
** Form generated from reading UI file 'Menu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_tips;
    QCheckBox *checkBox_separtors;
    QCheckBox *checkBox_tear;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MenuClass)
    {
        if (MenuClass->objectName().isEmpty())
            MenuClass->setObjectName(QString::fromUtf8("MenuClass"));
        MenuClass->resize(425, 268);
        centralWidget = new QWidget(MenuClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBox_tips = new QCheckBox(centralWidget);
        checkBox_tips->setObjectName(QString::fromUtf8("checkBox_tips"));

        horizontalLayout->addWidget(checkBox_tips);

        checkBox_separtors = new QCheckBox(centralWidget);
        checkBox_separtors->setObjectName(QString::fromUtf8("checkBox_separtors"));
        checkBox_separtors->setChecked(true);

        horizontalLayout->addWidget(checkBox_separtors);

        checkBox_tear = new QCheckBox(centralWidget);
        checkBox_tear->setObjectName(QString::fromUtf8("checkBox_tear"));

        horizontalLayout->addWidget(checkBox_tear);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        MenuClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MenuClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 425, 23));
        MenuClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MenuClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MenuClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MenuClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MenuClass->setStatusBar(statusBar);

        retranslateUi(MenuClass);

        QMetaObject::connectSlotsByName(MenuClass);
    } // setupUi

    void retranslateUi(QMainWindow *MenuClass)
    {
        MenuClass->setWindowTitle(QApplication::translate("MenuClass", "MenuClass", nullptr));
        checkBox_tips->setText(QApplication::translate("MenuClass", "toolTipsVisible", nullptr));
        checkBox_separtors->setText(QApplication::translate("MenuClass", "separatorsCollapsible", nullptr));
        checkBox_tear->setText(QApplication::translate("MenuClass", "tearOffEnabled", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuClass: public Ui_MenuClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
