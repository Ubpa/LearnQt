/********************************************************************************
** Form generated from reading UI file 'CustomDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMDIALOG_H
#define UI_CUSTOMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CustomDialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *CustomDialog)
    {
        if (CustomDialog->objectName().isEmpty())
            CustomDialog->setObjectName(QString::fromUtf8("CustomDialog"));
        CustomDialog->resize(400, 300);
        pushButton = new QPushButton(CustomDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 130, 75, 23));
        pushButton_2 = new QPushButton(CustomDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 130, 75, 23));

        retranslateUi(CustomDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), CustomDialog, SLOT(accept()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), CustomDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CustomDialog);
    } // setupUi

    void retranslateUi(QDialog *CustomDialog)
    {
        CustomDialog->setWindowTitle(QApplication::translate("CustomDialog", "CustomDialog", nullptr));
        pushButton->setText(QApplication::translate("CustomDialog", "Ok", nullptr));
        pushButton_2->setText(QApplication::translate("CustomDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomDialog: public Ui_CustomDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMDIALOG_H
