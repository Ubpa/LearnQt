/********************************************************************************
** Form generated from reading UI file 'Signal_Slots_01.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNAL_SLOTS_01_H
#define UI_SIGNAL_SLOTS_01_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signal_Slots_01Class
{
public:
    QSlider *horizontalSlider;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Signal_Slots_01Class)
    {
        if (Signal_Slots_01Class->objectName().isEmpty())
            Signal_Slots_01Class->setObjectName(QString::fromUtf8("Signal_Slots_01Class"));
        Signal_Slots_01Class->resize(600, 400);
        horizontalSlider = new QSlider(Signal_Slots_01Class);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(20, 20, 160, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(Signal_Slots_01Class);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 20, 54, 12));
        lineEdit = new QLineEdit(Signal_Slots_01Class);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 50, 231, 16));

        retranslateUi(Signal_Slots_01Class);

        QMetaObject::connectSlotsByName(Signal_Slots_01Class);
    } // setupUi

    void retranslateUi(QWidget *Signal_Slots_01Class)
    {
        Signal_Slots_01Class->setWindowTitle(QApplication::translate("Signal_Slots_01Class", "Signal_Slots_01", nullptr));
        label->setText(QApplication::translate("Signal_Slots_01Class", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signal_Slots_01Class: public Ui_Signal_Slots_01Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNAL_SLOTS_01_H
