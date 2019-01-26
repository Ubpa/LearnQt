/********************************************************************************
** Form generated from reading UI file 'MV_02.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MV_02_H
#define UI_MV_02_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MV_02Class
{
public:
    QVBoxLayout *verticalLayout;
    QListView *listView;
    QPushButton *btn_ShowModel;

    void setupUi(QWidget *MV_02Class)
    {
        if (MV_02Class->objectName().isEmpty())
            MV_02Class->setObjectName(QString::fromUtf8("MV_02Class"));
        MV_02Class->resize(600, 400);
        verticalLayout = new QVBoxLayout(MV_02Class);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listView = new QListView(MV_02Class);
        listView->setObjectName(QString::fromUtf8("listView"));

        verticalLayout->addWidget(listView);

        btn_ShowModel = new QPushButton(MV_02Class);
        btn_ShowModel->setObjectName(QString::fromUtf8("btn_ShowModel"));

        verticalLayout->addWidget(btn_ShowModel);


        retranslateUi(MV_02Class);

        QMetaObject::connectSlotsByName(MV_02Class);
    } // setupUi

    void retranslateUi(QWidget *MV_02Class)
    {
        MV_02Class->setWindowTitle(QApplication::translate("MV_02Class", "MV_02", nullptr));
        btn_ShowModel->setText(QApplication::translate("MV_02Class", "Show Model", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MV_02Class: public Ui_MV_02Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MV_02_H
