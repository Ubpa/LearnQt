/********************************************************************************
** Form generated from reading UI file 'Buttons.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTONS_H
#define UI_BUTTONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ButtonsClass
{
public:
    QPushButton *pushButton;
    QToolButton *toolButton;
    QRadioButton *radioButton;
    QCheckBox *check_flat;
    QSpinBox *spinBox;
    QRadioButton *radioButton_2;

    void setupUi(QWidget *ButtonsClass)
    {
        if (ButtonsClass->objectName().isEmpty())
            ButtonsClass->setObjectName(QString::fromUtf8("ButtonsClass"));
        ButtonsClass->resize(400, 300);
        pushButton = new QPushButton(ButtonsClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 50, 141, 31));
        toolButton = new QToolButton(ButtonsClass);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(170, 100, 141, 31));
        radioButton = new QRadioButton(ButtonsClass);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(70, 140, 111, 41));
        radioButton->setChecked(true);
        check_flat = new QCheckBox(ButtonsClass);
        check_flat->setObjectName(QString::fromUtf8("check_flat"));
        check_flat->setGeometry(QRect(200, 210, 141, 41));
        spinBox = new QSpinBox(ButtonsClass);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(30, 50, 101, 22));
        radioButton_2 = new QRadioButton(ButtonsClass);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(210, 150, 91, 21));

        retranslateUi(ButtonsClass);

        QMetaObject::connectSlotsByName(ButtonsClass);
    } // setupUi

    void retranslateUi(QWidget *ButtonsClass)
    {
        ButtonsClass->setWindowTitle(QApplication::translate("ButtonsClass", "ButtonsClass", nullptr));
        pushButton->setText(QApplication::translate("ButtonsClass", "PushButton", nullptr));
        toolButton->setText(QApplication::translate("ButtonsClass", "ToolButton", nullptr));
        radioButton->setText(QApplication::translate("ButtonsClass", "RadioButton", nullptr));
        check_flat->setText(QApplication::translate("ButtonsClass", "flat", nullptr));
        radioButton_2->setText(QApplication::translate("ButtonsClass", "RadioButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ButtonsClass: public Ui_ButtonsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTONS_H
