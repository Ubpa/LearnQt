/********************************************************************************
** Form generated from reading UI file 'QSS.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSS_H
#define UI_QSS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QSSClass
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QSlider *horizontalSlider;

    void setupUi(QWidget *QSSClass)
    {
        if (QSSClass->objectName().isEmpty())
            QSSClass->setObjectName(QString::fromUtf8("QSSClass"));
        QSSClass->resize(306, 204);
        label = new QLabel(QSSClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 60, 81, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: 2px solid green;\n"
"	birder-radius: 4px;\n"
"	padding: 2px;\n"
"}"));
        pushButton = new QPushButton(QSSClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 60, 84, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid #1f8f91;\n"
"	border-radius: 6px;\n"
"	background-color: cyan;\n"
"	min-width: 80px;\n"
"}"));
        horizontalSlider = new QSlider(QSSClass);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(80, 130, 160, 22));
        horizontalSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"border: 1px solid #4A708B;\n"
"background: #C0C0C0;\n"
"height: 5px;\n"
"border-radius: 1px;\n"
"padding-left:-1px;\n"
"padding-right:-1px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"    stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"    stop: 0 #5DCCFF, stop: 1 #1874CD);\n"
"border: 1px solid #4A708B;\n"
"height: 10px;\n"
"border-radius: 2px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"background: #575757;\n"
"border: 0px solid #777;\n"
"height: 10px;\n"
"border-radius: 2px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal \n"
"{\n"
"    background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, \n"
"    stop:0.6 #45ADED, stop:0.778409 rgba(255, 255, 255, 255));\n"
"\n"
"    width: 11px;\n"
"    margin-top: -3px;\n"
"    margin-bottom: -3px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"    background: q"
                        "radialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.6 #2A8BDA, \n"
"    stop:0.778409 rgba(255, 255, 255, 255));\n"
"\n"
"    width: 11px;\n"
"    margin-top: -3px;\n"
"    margin-bottom: -3px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"background: #00009C;\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"background: #eee;\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: #eee;\n"
"border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}\n"
""));
        horizontalSlider->setOrientation(Qt::Horizontal);

        retranslateUi(QSSClass);

        QMetaObject::connectSlotsByName(QSSClass);
    } // setupUi

    void retranslateUi(QWidget *QSSClass)
    {
        QSSClass->setWindowTitle(QApplication::translate("QSSClass", "QSS", nullptr));
        label->setText(QApplication::translate("QSSClass", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("QSSClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QSSClass: public Ui_QSSClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSS_H
