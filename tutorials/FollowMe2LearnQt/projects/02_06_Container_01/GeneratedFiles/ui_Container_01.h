/********************************************************************************
** Form generated from reading UI file 'Container_01.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTAINER_01_H
#define UI_CONTAINER_01_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Container_01Class
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *Container_01Class)
    {
        if (Container_01Class->objectName().isEmpty())
            Container_01Class->setObjectName(QString::fromUtf8("Container_01Class"));
        Container_01Class->resize(565, 795);
        verticalLayout = new QVBoxLayout(Container_01Class);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(Container_01Class);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(Container_01Class);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        tabWidget = new QTabWidget(Container_01Class);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        scrollArea = new QScrollArea(Container_01Class);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 545, 354));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(Container_01Class);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Container_01Class);
    } // setupUi

    void retranslateUi(QWidget *Container_01Class)
    {
        Container_01Class->setWindowTitle(QApplication::translate("Container_01Class", "ContainerWidget", nullptr));
        pushButton->setText(QApplication::translate("Container_01Class", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("Container_01Class", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Container_01Class", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Container_01Class", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Container_01Class: public Ui_Container_01Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTAINER_01_H
