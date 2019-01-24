/********************************************************************************
** Form generated from reading UI file 'myQDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYQDIALOG_H
#define UI_MYQDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myQDialogClass
{
public:
    QPushButton *btnWindow;
    QPushButton *btnApp;
    QLineEdit *lineEdit;
    QPushButton *btnCustom;

    void setupUi(QWidget *myQDialogClass)
    {
        if (myQDialogClass->objectName().isEmpty())
            myQDialogClass->setObjectName(QString::fromUtf8("myQDialogClass"));
        myQDialogClass->resize(600, 400);
        btnWindow = new QPushButton(myQDialogClass);
        btnWindow->setObjectName(QString::fromUtf8("btnWindow"));
        btnWindow->setGeometry(QRect(150, 30, 131, 21));
        btnApp = new QPushButton(myQDialogClass);
        btnApp->setObjectName(QString::fromUtf8("btnApp"));
        btnApp->setGeometry(QRect(150, 70, 131, 21));
        lineEdit = new QLineEdit(myQDialogClass);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 120, 113, 20));
        btnCustom = new QPushButton(myQDialogClass);
        btnCustom->setObjectName(QString::fromUtf8("btnCustom"));
        btnCustom->setGeometry(QRect(140, 160, 141, 31));

        retranslateUi(myQDialogClass);

        QMetaObject::connectSlotsByName(myQDialogClass);
    } // setupUi

    void retranslateUi(QWidget *myQDialogClass)
    {
        myQDialogClass->setWindowTitle(QApplication::translate("myQDialogClass", "myQDialog", nullptr));
        btnWindow->setText(QApplication::translate("myQDialogClass", "\345\274\271\345\207\272\347\252\227\345\217\243\346\250\241\346\200\201\345\257\271\350\257\235\346\241\206", nullptr));
        btnApp->setText(QApplication::translate("myQDialogClass", "\345\274\271\345\207\272\345\272\224\347\224\250\346\250\241\346\200\201\345\257\271\350\257\235\346\241\206", nullptr));
        btnCustom->setText(QApplication::translate("myQDialogClass", "\345\274\271\345\207\272\350\207\252\345\256\232\344\271\211\345\257\271\350\257\235\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myQDialogClass: public Ui_myQDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYQDIALOG_H
