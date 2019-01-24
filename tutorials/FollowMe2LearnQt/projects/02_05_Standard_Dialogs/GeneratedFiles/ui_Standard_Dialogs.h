/********************************************************************************
** Form generated from reading UI file 'Standard_Dialogs.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STANDARD_DIALOGS_H
#define UI_STANDARD_DIALOGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Standard_DialogsClass
{
public:
    QTabWidget *process;
    QWidget *tab0;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *getDouble;
    QPushButton *getText;
    QLabel *label_input;
    QPushButton *getInt;
    QPushButton *getItem;
    QPushButton *getMultiText;
    QWidget *tab1;
    QPushButton *getColor;
    QCheckBox *check_alpha;
    QWidget *tab2;
    QPushButton *getFont;
    QLabel *label_font;
    QWidget *tab3;
    QLineEdit *line_path;
    QPushButton *getExistingDirectory;
    QPushButton *getOpenFileName;
    QPushButton *getOpenFileNames;
    QPushButton *getSaveFileName;
    QWidget *tab4;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *critical;
    QPushButton *warning;
    QPushButton *information;
    QPushButton *question;
    QPushButton *showMessage;
    QWidget *tab5;
    QPushButton *progress;
    QWidget *tab6;
    QPushButton *wizard;

    void setupUi(QWidget *Standard_DialogsClass)
    {
        if (Standard_DialogsClass->objectName().isEmpty())
            Standard_DialogsClass->setObjectName(QString::fromUtf8("Standard_DialogsClass"));
        Standard_DialogsClass->resize(823, 520);
        process = new QTabWidget(Standard_DialogsClass);
        process->setObjectName(QString::fromUtf8("process"));
        process->setGeometry(QRect(70, 40, 701, 431));
        tab0 = new QWidget();
        tab0->setObjectName(QString::fromUtf8("tab0"));
        gridLayoutWidget = new QWidget(tab0);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 20, 521, 331));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        getDouble = new QPushButton(gridLayoutWidget);
        getDouble->setObjectName(QString::fromUtf8("getDouble"));

        gridLayout->addWidget(getDouble, 1, 0, 1, 1);

        getText = new QPushButton(gridLayoutWidget);
        getText->setObjectName(QString::fromUtf8("getText"));

        gridLayout->addWidget(getText, 3, 0, 1, 1);

        label_input = new QLabel(gridLayoutWidget);
        label_input->setObjectName(QString::fromUtf8("label_input"));

        gridLayout->addWidget(label_input, 0, 1, 1, 1);

        getInt = new QPushButton(gridLayoutWidget);
        getInt->setObjectName(QString::fromUtf8("getInt"));

        gridLayout->addWidget(getInt, 0, 0, 1, 1);

        getItem = new QPushButton(gridLayoutWidget);
        getItem->setObjectName(QString::fromUtf8("getItem"));

        gridLayout->addWidget(getItem, 2, 0, 1, 1);

        getMultiText = new QPushButton(gridLayoutWidget);
        getMultiText->setObjectName(QString::fromUtf8("getMultiText"));

        gridLayout->addWidget(getMultiText, 4, 0, 1, 1);

        process->addTab(tab0, QString());
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        getColor = new QPushButton(tab1);
        getColor->setObjectName(QString::fromUtf8("getColor"));
        getColor->setGeometry(QRect(60, 40, 101, 61));
        check_alpha = new QCheckBox(tab1);
        check_alpha->setObjectName(QString::fromUtf8("check_alpha"));
        check_alpha->setGeometry(QRect(60, 120, 111, 31));
        process->addTab(tab1, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QString::fromUtf8("tab2"));
        getFont = new QPushButton(tab2);
        getFont->setObjectName(QString::fromUtf8("getFont"));
        getFont->setGeometry(QRect(70, 40, 101, 41));
        label_font = new QLabel(tab2);
        label_font->setObjectName(QString::fromUtf8("label_font"));
        label_font->setGeometry(QRect(230, 80, 54, 12));
        process->addTab(tab2, QString());
        tab3 = new QWidget();
        tab3->setObjectName(QString::fromUtf8("tab3"));
        line_path = new QLineEdit(tab3);
        line_path->setObjectName(QString::fromUtf8("line_path"));
        line_path->setGeometry(QRect(50, 270, 601, 71));
        getExistingDirectory = new QPushButton(tab3);
        getExistingDirectory->setObjectName(QString::fromUtf8("getExistingDirectory"));
        getExistingDirectory->setGeometry(QRect(280, 50, 211, 31));
        getOpenFileName = new QPushButton(tab3);
        getOpenFileName->setObjectName(QString::fromUtf8("getOpenFileName"));
        getOpenFileName->setGeometry(QRect(280, 100, 211, 31));
        getOpenFileNames = new QPushButton(tab3);
        getOpenFileNames->setObjectName(QString::fromUtf8("getOpenFileNames"));
        getOpenFileNames->setGeometry(QRect(280, 150, 211, 31));
        getSaveFileName = new QPushButton(tab3);
        getSaveFileName->setObjectName(QString::fromUtf8("getSaveFileName"));
        getSaveFileName->setGeometry(QRect(280, 200, 211, 31));
        process->addTab(tab3, QString());
        tab4 = new QWidget();
        tab4->setObjectName(QString::fromUtf8("tab4"));
        gridLayoutWidget_2 = new QWidget(tab4);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(60, 50, 351, 201));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        critical = new QPushButton(gridLayoutWidget_2);
        critical->setObjectName(QString::fromUtf8("critical"));

        gridLayout_2->addWidget(critical, 0, 0, 1, 1);

        warning = new QPushButton(gridLayoutWidget_2);
        warning->setObjectName(QString::fromUtf8("warning"));

        gridLayout_2->addWidget(warning, 0, 1, 1, 1);

        information = new QPushButton(gridLayoutWidget_2);
        information->setObjectName(QString::fromUtf8("information"));

        gridLayout_2->addWidget(information, 1, 0, 1, 1);

        question = new QPushButton(gridLayoutWidget_2);
        question->setObjectName(QString::fromUtf8("question"));

        gridLayout_2->addWidget(question, 2, 0, 1, 1);

        showMessage = new QPushButton(gridLayoutWidget_2);
        showMessage->setObjectName(QString::fromUtf8("showMessage"));

        gridLayout_2->addWidget(showMessage, 1, 1, 1, 1);

        process->addTab(tab4, QString());
        tab5 = new QWidget();
        tab5->setObjectName(QString::fromUtf8("tab5"));
        progress = new QPushButton(tab5);
        progress->setObjectName(QString::fromUtf8("progress"));
        progress->setGeometry(QRect(50, 30, 75, 23));
        process->addTab(tab5, QString());
        tab6 = new QWidget();
        tab6->setObjectName(QString::fromUtf8("tab6"));
        wizard = new QPushButton(tab6);
        wizard->setObjectName(QString::fromUtf8("wizard"));
        wizard->setGeometry(QRect(160, 90, 75, 23));
        process->addTab(tab6, QString());

        retranslateUi(Standard_DialogsClass);

        process->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Standard_DialogsClass);
    } // setupUi

    void retranslateUi(QWidget *Standard_DialogsClass)
    {
        Standard_DialogsClass->setWindowTitle(QApplication::translate("Standard_DialogsClass", "Standard_Dialogs", nullptr));
        getDouble->setText(QApplication::translate("Standard_DialogsClass", "getDouble", nullptr));
        getText->setText(QApplication::translate("Standard_DialogsClass", "getText", nullptr));
        label_input->setText(QApplication::translate("Standard_DialogsClass", "TextLabel", nullptr));
        getInt->setText(QApplication::translate("Standard_DialogsClass", "getInt", nullptr));
        getItem->setText(QApplication::translate("Standard_DialogsClass", "getItem", nullptr));
        getMultiText->setText(QApplication::translate("Standard_DialogsClass", "getMultiText", nullptr));
        process->setTabText(process->indexOf(tab0), QApplication::translate("Standard_DialogsClass", "\350\276\223\345\205\245\345\257\271\350\257\235\346\241\206", nullptr));
        getColor->setText(QApplication::translate("Standard_DialogsClass", "getColor", nullptr));
        check_alpha->setText(QApplication::translate("Standard_DialogsClass", "\346\230\257\345\220\246\346\230\276\347\244\272\351\200\217\346\230\216\345\272\246", nullptr));
        process->setTabText(process->indexOf(tab1), QApplication::translate("Standard_DialogsClass", "\351\242\234\350\211\262\345\257\271\350\257\235\346\241\206", nullptr));
        getFont->setText(QApplication::translate("Standard_DialogsClass", "getFont", nullptr));
        label_font->setText(QApplication::translate("Standard_DialogsClass", "\344\275\240\345\245\275\357\274\214Qt", nullptr));
        process->setTabText(process->indexOf(tab2), QApplication::translate("Standard_DialogsClass", "\345\255\227\344\275\223\345\257\271\350\257\235\346\241\206", nullptr));
        getExistingDirectory->setText(QApplication::translate("Standard_DialogsClass", "getExistingDirectory", nullptr));
        getOpenFileName->setText(QApplication::translate("Standard_DialogsClass", "getOpenFileName", nullptr));
        getOpenFileNames->setText(QApplication::translate("Standard_DialogsClass", "getOpenFileNames", nullptr));
        getSaveFileName->setText(QApplication::translate("Standard_DialogsClass", "getSaveFileName", nullptr));
        process->setTabText(process->indexOf(tab3), QApplication::translate("Standard_DialogsClass", "\346\226\207\344\273\266\345\257\271\350\257\235\346\241\206", nullptr));
        critical->setText(QApplication::translate("Standard_DialogsClass", "critical", nullptr));
        warning->setText(QApplication::translate("Standard_DialogsClass", "warning", nullptr));
        information->setText(QApplication::translate("Standard_DialogsClass", "information", nullptr));
        question->setText(QApplication::translate("Standard_DialogsClass", "question", nullptr));
        showMessage->setText(QApplication::translate("Standard_DialogsClass", "showMessage", nullptr));
        process->setTabText(process->indexOf(tab4), QApplication::translate("Standard_DialogsClass", "\346\266\210\346\201\257\345\257\271\350\257\235\346\241\206", nullptr));
        progress->setText(QApplication::translate("Standard_DialogsClass", "progress", nullptr));
        process->setTabText(process->indexOf(tab5), QApplication::translate("Standard_DialogsClass", "\350\277\233\345\272\246\345\257\271\350\257\235\346\241\206", nullptr));
        wizard->setText(QApplication::translate("Standard_DialogsClass", "wizard", nullptr));
        process->setTabText(process->indexOf(tab6), QApplication::translate("Standard_DialogsClass", "\345\220\221\345\257\274\345\257\271\350\257\235\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Standard_DialogsClass: public Ui_Standard_DialogsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STANDARD_DIALOGS_H
