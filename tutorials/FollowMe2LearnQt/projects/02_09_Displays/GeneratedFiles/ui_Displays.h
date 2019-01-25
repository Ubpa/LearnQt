/********************************************************************************
** Form generated from reading UI file 'Displays.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYS_H
#define UI_DISPLAYS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplaysClass
{
public:
    QGridLayout *gridLayout;
    QLabel *label_display;
    QCheckBox *check_scaled;
    QLabel *label_2;
    QComboBox *combo_format;
    QSpinBox *spin_indent;
    QCheckBox *check_links;
    QCheckBox *check_wordWrap;
    QLineEdit *lineEdit;
    QLabel *label_4;

    void setupUi(QWidget *DisplaysClass)
    {
        if (DisplaysClass->objectName().isEmpty())
            DisplaysClass->setObjectName(QString::fromUtf8("DisplaysClass"));
        DisplaysClass->resize(358, 146);
        gridLayout = new QGridLayout(DisplaysClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_display = new QLabel(DisplaysClass);
        label_display->setObjectName(QString::fromUtf8("label_display"));

        gridLayout->addWidget(label_display, 0, 1, 1, 1);

        check_scaled = new QCheckBox(DisplaysClass);
        check_scaled->setObjectName(QString::fromUtf8("check_scaled"));

        gridLayout->addWidget(check_scaled, 1, 1, 1, 1);

        label_2 = new QLabel(DisplaysClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        combo_format = new QComboBox(DisplaysClass);
        combo_format->setObjectName(QString::fromUtf8("combo_format"));

        gridLayout->addWidget(combo_format, 4, 1, 1, 1);

        spin_indent = new QSpinBox(DisplaysClass);
        spin_indent->setObjectName(QString::fromUtf8("spin_indent"));

        gridLayout->addWidget(spin_indent, 3, 1, 1, 1);

        check_links = new QCheckBox(DisplaysClass);
        check_links->setObjectName(QString::fromUtf8("check_links"));

        gridLayout->addWidget(check_links, 1, 0, 1, 1);

        check_wordWrap = new QCheckBox(DisplaysClass);
        check_wordWrap->setObjectName(QString::fromUtf8("check_wordWrap"));

        gridLayout->addWidget(check_wordWrap, 2, 0, 1, 1);

        lineEdit = new QLineEdit(DisplaysClass);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        label_4 = new QLabel(DisplaysClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        gridLayout->setColumnStretch(0, 1);

        retranslateUi(DisplaysClass);

        QMetaObject::connectSlotsByName(DisplaysClass);
    } // setupUi

    void retranslateUi(QWidget *DisplaysClass)
    {
        DisplaysClass->setWindowTitle(QApplication::translate("DisplaysClass", "DisplaysClass", nullptr));
        label_display->setText(QApplication::translate("DisplaysClass", "\350\257\267\345\234\250\345\267\246\344\276\247\347\232\204\350\276\223\345\205\245\346\241\206\350\276\223\345\205\245\346\226\207\346\234\254", nullptr));
        check_scaled->setText(QApplication::translate("DisplaysClass", "scaledContents", nullptr));
        label_2->setText(QApplication::translate("DisplaysClass", "textFormat", nullptr));
        check_links->setText(QApplication::translate("DisplaysClass", "openExternalLinks", nullptr));
        check_wordWrap->setText(QApplication::translate("DisplaysClass", "wordWrap", nullptr));
        label_4->setText(QApplication::translate("DisplaysClass", "indent", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisplaysClass: public Ui_DisplaysClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYS_H
