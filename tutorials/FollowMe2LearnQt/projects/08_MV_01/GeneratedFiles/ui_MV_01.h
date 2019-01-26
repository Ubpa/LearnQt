/********************************************************************************
** Form generated from reading UI file 'MV_01.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MV_01_H
#define UI_MV_01_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MV_01Class
{
public:
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QTreeView *treeView;
    QListView *listView;

    void setupUi(QWidget *MV_01Class)
    {
        if (MV_01Class->objectName().isEmpty())
            MV_01Class->setObjectName(QString::fromUtf8("MV_01Class"));
        MV_01Class->resize(600, 400);
        horizontalLayout = new QHBoxLayout(MV_01Class);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        splitter = new QSplitter(MV_01Class);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        treeView = new QTreeView(splitter);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        splitter->addWidget(treeView);
        listView = new QListView(splitter);
        listView->setObjectName(QString::fromUtf8("listView"));
        splitter->addWidget(listView);

        horizontalLayout->addWidget(splitter);


        retranslateUi(MV_01Class);

        QMetaObject::connectSlotsByName(MV_01Class);
    } // setupUi

    void retranslateUi(QWidget *MV_01Class)
    {
        MV_01Class->setWindowTitle(QApplication::translate("MV_01Class", "MV_01", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MV_01Class: public Ui_MV_01Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MV_01_H
