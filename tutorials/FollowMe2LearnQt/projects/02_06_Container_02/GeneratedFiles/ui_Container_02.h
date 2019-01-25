/********************************************************************************
** Form generated from reading UI file 'Container_02.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTAINER_02_H
#define UI_CONTAINER_02_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Container_02Class
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_display;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGroupBox *groupBox_control;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_scroll;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *combo_h;
    QLabel *label_2;
    QComboBox *combo_v;
    QLabel *label_3;
    QComboBox *combo_size;
    QGroupBox *groupBox_group;
    QLabel *label_4;
    QCheckBox *checkBox_flat;
    QComboBox *comboBox_aligment;

    void setupUi(QFrame *Container_02Class)
    {
        if (Container_02Class->objectName().isEmpty())
            Container_02Class->setObjectName(QString::fromUtf8("Container_02Class"));
        Container_02Class->resize(565, 365);
        Container_02Class->setFrameShape(QFrame::StyledPanel);
        Container_02Class->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(Container_02Class);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox_display = new QGroupBox(Container_02Class);
        groupBox_display->setObjectName(QString::fromUtf8("groupBox_display"));
        verticalLayout_2 = new QVBoxLayout(groupBox_display);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea = new QScrollArea(groupBox_display);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 248, 311));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        horizontalLayout->addWidget(groupBox_display);

        groupBox_control = new QGroupBox(Container_02Class);
        groupBox_control->setObjectName(QString::fromUtf8("groupBox_control"));
        verticalLayout = new QVBoxLayout(groupBox_control);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_scroll = new QGroupBox(groupBox_control);
        groupBox_scroll->setObjectName(QString::fromUtf8("groupBox_scroll"));
        formLayout = new QFormLayout(groupBox_scroll);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox_scroll);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        combo_h = new QComboBox(groupBox_scroll);
        combo_h->setObjectName(QString::fromUtf8("combo_h"));

        formLayout->setWidget(0, QFormLayout::FieldRole, combo_h);

        label_2 = new QLabel(groupBox_scroll);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        combo_v = new QComboBox(groupBox_scroll);
        combo_v->setObjectName(QString::fromUtf8("combo_v"));

        formLayout->setWidget(1, QFormLayout::FieldRole, combo_v);

        label_3 = new QLabel(groupBox_scroll);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        combo_size = new QComboBox(groupBox_scroll);
        combo_size->setObjectName(QString::fromUtf8("combo_size"));

        formLayout->setWidget(2, QFormLayout::FieldRole, combo_size);


        verticalLayout->addWidget(groupBox_scroll);

        groupBox_group = new QGroupBox(groupBox_control);
        groupBox_group->setObjectName(QString::fromUtf8("groupBox_group"));
        label_4 = new QLabel(groupBox_group);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 30, 71, 16));
        checkBox_flat = new QCheckBox(groupBox_group);
        checkBox_flat->setObjectName(QString::fromUtf8("checkBox_flat"));
        checkBox_flat->setGeometry(QRect(20, 70, 71, 16));
        comboBox_aligment = new QComboBox(groupBox_group);
        comboBox_aligment->setObjectName(QString::fromUtf8("comboBox_aligment"));
        comboBox_aligment->setGeometry(QRect(98, 30, 131, 22));

        verticalLayout->addWidget(groupBox_group);


        horizontalLayout->addWidget(groupBox_control);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        retranslateUi(Container_02Class);

        QMetaObject::connectSlotsByName(Container_02Class);
    } // setupUi

    void retranslateUi(QFrame *Container_02Class)
    {
        Container_02Class->setWindowTitle(QApplication::translate("Container_02Class", "Container_02Class", nullptr));
        groupBox_display->setTitle(QApplication::translate("Container_02Class", "\346\230\276\347\244\272", nullptr));
        groupBox_control->setTitle(QApplication::translate("Container_02Class", "\346\216\247\345\210\266", nullptr));
        groupBox_scroll->setTitle(QApplication::translate("Container_02Class", "QScrollArea", nullptr));
        label->setText(QApplication::translate("Container_02Class", "\346\260\264\345\271\263", nullptr));
        label_2->setText(QApplication::translate("Container_02Class", "\345\236\202\347\233\264", nullptr));
        label_3->setText(QApplication::translate("Container_02Class", "SizeAdjustPolicy", nullptr));
        groupBox_group->setTitle(QApplication::translate("Container_02Class", "QGroupBox", nullptr));
        label_4->setText(QApplication::translate("Container_02Class", "alignment", nullptr));
        checkBox_flat->setText(QApplication::translate("Container_02Class", "flat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Container_02Class: public Ui_Container_02Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTAINER_02_H
