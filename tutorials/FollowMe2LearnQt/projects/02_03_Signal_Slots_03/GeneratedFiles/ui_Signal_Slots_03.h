/********************************************************************************
** Form generated from reading UI file 'Signal_Slots_03.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNAL_SLOTS_03_H
#define UI_SIGNAL_SLOTS_03_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signal_Slots_03Class
{
public:

    void setupUi(QWidget *Signal_Slots_03Class)
    {
        if (Signal_Slots_03Class->objectName().isEmpty())
            Signal_Slots_03Class->setObjectName(QString::fromUtf8("Signal_Slots_03Class"));
        Signal_Slots_03Class->resize(600, 400);

        retranslateUi(Signal_Slots_03Class);

        QMetaObject::connectSlotsByName(Signal_Slots_03Class);
    } // setupUi

    void retranslateUi(QWidget *Signal_Slots_03Class)
    {
        Signal_Slots_03Class->setWindowTitle(QApplication::translate("Signal_Slots_03Class", "Signal_Slots_03", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signal_Slots_03Class: public Ui_Signal_Slots_03Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNAL_SLOTS_03_H
