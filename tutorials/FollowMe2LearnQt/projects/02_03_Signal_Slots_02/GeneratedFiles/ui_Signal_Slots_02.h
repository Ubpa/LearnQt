/********************************************************************************
** Form generated from reading UI file 'Signal_Slots_02.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNAL_SLOTS_02_H
#define UI_SIGNAL_SLOTS_02_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signal_Slots_02Class
{
public:
    QProgressBar *progressBar;
    QPushButton *pushButton;

    void setupUi(QWidget *Signal_Slots_02Class)
    {
        if (Signal_Slots_02Class->objectName().isEmpty())
            Signal_Slots_02Class->setObjectName(QString::fromUtf8("Signal_Slots_02Class"));
        Signal_Slots_02Class->resize(600, 400);
        progressBar = new QProgressBar(Signal_Slots_02Class);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(20, 20, 118, 23));
        progressBar->setValue(24);
        pushButton = new QPushButton(Signal_Slots_02Class);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 20, 75, 23));
        pushButton->setCheckable(true);
        pushButton->setChecked(true);

        retranslateUi(Signal_Slots_02Class);
        QObject::connect(pushButton, SIGNAL(toggled(bool)), progressBar, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(Signal_Slots_02Class);
    } // setupUi

    void retranslateUi(QWidget *Signal_Slots_02Class)
    {
        Signal_Slots_02Class->setWindowTitle(QApplication::translate("Signal_Slots_02Class", "Signal_Slots_02", nullptr));
        pushButton->setText(QApplication::translate("Signal_Slots_02Class", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signal_Slots_02Class: public Ui_Signal_Slots_02Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNAL_SLOTS_02_H
