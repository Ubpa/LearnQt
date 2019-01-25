/********************************************************************************
** Form generated from reading UI file 'Container_03.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTAINER_03_H
#define UI_CONTAINER_03_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Container_03Class
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *textEdit_2;
    QToolBox *toolBox;
    QWidget *page;
    QWidget *page_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QComboBox *combo_tabposition;
    QLabel *label_2;
    QComboBox *combo_elide;
    QLabel *label;
    QCheckBox *check_closable;
    QCheckBox *check_moveable;
    QCheckBox *check_document;
    QCheckBox *check_autohide;
    QCheckBox *check_scrollBtns;
    QLabel *label_3;
    QComboBox *combo_tabshape;
    QGroupBox *groupBox_2;
    QPushButton *btn_addItem;
    QPushButton *btn_delItem;

    void setupUi(QWidget *Container_03Class)
    {
        if (Container_03Class->objectName().isEmpty())
            Container_03Class->setObjectName(QString::fromUtf8("Container_03Class"));
        Container_03Class->resize(694, 340);
        horizontalLayout = new QHBoxLayout(Container_03Class);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(Container_03Class);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        textEdit = new QTextEdit(tab);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout_2->addWidget(textEdit);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        textEdit_2 = new QTextEdit(tab_2);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));

        verticalLayout_3->addWidget(textEdit_2);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);

        toolBox = new QToolBox(Container_03Class);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 217, 270));
        toolBox->addItem(page, QString::fromUtf8("Page 1"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 217, 270));
        toolBox->addItem(page_2, QString::fromUtf8("Page 2"));

        horizontalLayout->addWidget(toolBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(Container_03Class);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        combo_tabposition = new QComboBox(groupBox);
        combo_tabposition->setObjectName(QString::fromUtf8("combo_tabposition"));

        gridLayout->addWidget(combo_tabposition, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        combo_elide = new QComboBox(groupBox);
        combo_elide->setObjectName(QString::fromUtf8("combo_elide"));

        gridLayout->addWidget(combo_elide, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        check_closable = new QCheckBox(groupBox);
        check_closable->setObjectName(QString::fromUtf8("check_closable"));

        gridLayout->addWidget(check_closable, 4, 1, 1, 1);

        check_moveable = new QCheckBox(groupBox);
        check_moveable->setObjectName(QString::fromUtf8("check_moveable"));

        gridLayout->addWidget(check_moveable, 3, 1, 1, 1);

        check_document = new QCheckBox(groupBox);
        check_document->setObjectName(QString::fromUtf8("check_document"));

        gridLayout->addWidget(check_document, 3, 0, 1, 1);

        check_autohide = new QCheckBox(groupBox);
        check_autohide->setObjectName(QString::fromUtf8("check_autohide"));

        gridLayout->addWidget(check_autohide, 4, 0, 1, 1);

        check_scrollBtns = new QCheckBox(groupBox);
        check_scrollBtns->setObjectName(QString::fromUtf8("check_scrollBtns"));

        gridLayout->addWidget(check_scrollBtns, 5, 0, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        combo_tabshape = new QComboBox(groupBox);
        combo_tabshape->setObjectName(QString::fromUtf8("combo_tabshape"));

        gridLayout->addWidget(combo_tabshape, 2, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Container_03Class);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        btn_addItem = new QPushButton(groupBox_2);
        btn_addItem->setObjectName(QString::fromUtf8("btn_addItem"));
        btn_addItem->setGeometry(QRect(40, 30, 121, 23));
        btn_delItem = new QPushButton(groupBox_2);
        btn_delItem->setObjectName(QString::fromUtf8("btn_delItem"));
        btn_delItem->setGeometry(QRect(40, 80, 121, 23));

        verticalLayout->addWidget(groupBox_2);


        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        retranslateUi(Container_03Class);

        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Container_03Class);
    } // setupUi

    void retranslateUi(QWidget *Container_03Class)
    {
        Container_03Class->setWindowTitle(QApplication::translate("Container_03Class", "Container_03Class", nullptr));
        textEdit->setHtml(QApplication::translate("Container_03Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:10px; margin-bottom:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:29px; background-color:#ffffff;\"><a name=\"best-content-189787122\"></a><span style=\" font-family:'PingFang SC,Lantinghei SC,Microsoft YaHei,arial,\345\256\213\344\275\223,sans-serif,tahoma'; font-size:16px; color:#333333; background-color:#ffffff;\">\346\255\214</span><span style=\" font-family:'PingFang SC,Lantinghei SC,Microsoft YaHei,arial,\345\256\213\344\275\223,sans-serif,tahoma'; font-size:16px; color:#333333; background-color:#ffffff;\">\346\233\262\357\274\232\346\231\264\345\244\251</span></p>\n"
"<p style=\" margin-top:10px; margin-bottom:"
                        "10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:29px; background-color:#ffffff;\"><a name=\"best-content-189787122\"></a><span style=\" font-family:'PingFang SC,Lantinghei SC,Microsoft YaHei,arial,\345\256\213\344\275\223,sans-serif,tahoma'; font-size:16px; color:#333333; background-color:#ffffff;\">\346\255\214</span><span style=\" font-family:'PingFang SC,Lantinghei SC,Microsoft YaHei,arial,\345\256\213\344\275\223,sans-serif,tahoma'; font-size:16px; color:#333333; background-color:#ffffff;\">\346\211\213\357\274\232\345\221\250\346\235\260\344\274\246 </span><span style=\" font-family:'PingFang SC,Lantinghei SC,Microsoft YaHei,arial,\345\256\213\344\275\223,sans-serif,tahoma'; font-size:16px; color:#333333;\">\344\270\223\350\276\221\357\274\232\345\217\266\346\203\240\347\276\216<br /><br />\344\275\234\350\257\215:\345\221\250\346\235\260\344\274\246<br />\344\275\234\346\233\262:\345\221\250\346\235\260\344\274\246<br /><br />\346\225\205\344\272\213\347\232\204\345"
                        "\260\217\351\273\204\350\212\261 <br />\344\273\216\345\207\272\347\224\237\351\202\243\345\271\264\345\260\261\351\243\230\347\235\200 <br />\347\253\245\345\271\264\347\232\204\350\215\241\347\247\213\345\215\203 <br />\351\232\217\350\256\260\345\277\206\344\270\200\347\233\264\346\231\203\345\210\260\347\216\260\345\234\250 <br />rui sou sou xi dou xi la <br />sou la xi xi xi xi la xi la sou <br />\345\220\271\347\235\200\345\211\215\345\245\217\346\234\233\347\235\200\345\244\251\347\251\272 <br />\346\210\221\346\203\263\350\265\267\350\212\261\347\223\243\350\257\225\347\235\200\346\216\211\350\220\275 <br />\344\270\272\344\275\240\347\277\230\350\257\276\347\232\204\351\202\243\344\270\200\345\244\251 <br />\350\212\261\350\220\275\347\232\204\351\202\243\344\270\200\345\244\251 <br />\346\225\231\345\256\244\347\232\204\351\202\243\344\270\200\351\227\264 <br />\346\210\221\346\200\216\344\271\210\347\234\213\344\270\215\350\247\201 <br />\346\266\210\345\244\261\347\232\204\344\270\213\351\233\250\345"
                        "\244\251 <br />\346\210\221\345\245\275\346\203\263\345\206\215\346\267\213\344\270\200\351\201\215 <br />\346\262\241\346\203\263\345\210\260\345\244\261\345\216\273\347\232\204\345\213\207\346\260\224\346\210\221\350\277\230\347\225\231\347\235\200 <br />\345\245\275\346\203\263\345\206\215\351\227\256\344\270\200\351\201\215 <br />\344\275\240\344\274\232\347\255\211\345\276\205\350\277\230\346\230\257\347\246\273\345\274\200 <br /><br />\345\210\256\351\243\216\350\277\231\345\244\251\346\210\221\350\257\225\350\277\207\346\217\241\347\235\200\344\275\240\346\211\213 <br />\344\275\206\345\201\217\345\201\217\351\233\250\346\270\220\346\270\220\345\244\247\345\210\260\346\210\221\347\234\213\344\275\240\344\270\215\350\247\201 <br />\350\277\230\350\246\201\345\244\232\344\271\205\346\210\221\346\211\215\350\203\275\345\234\250\344\275\240\350\272\253\350\276\271 <br />\350\277\230\350\246\201\345\244\232\344\271\205\346\210\221\346\211\215\350\203\275\345\244\237\345\234\250\344\275\240\350\272\253\350\276"
                        "\271 <br />\347\255\211\345\210\260\346\224\276\346\231\264\347\232\204\351\202\243\345\244\251\344\271\237\350\256\270\346\210\221\344\274\232\346\257\224\350\276\203\345\245\275\344\270\200\347\202\271 <br />\347\255\211\345\210\260\346\224\276\346\231\264\351\202\243\345\244\251\344\271\237\350\256\270\346\210\221\344\274\232\346\257\224\350\276\203\345\245\275\344\270\200\347\202\271 <br />\344\273\216\345\211\215\344\273\216\345\211\215\346\234\211\344\270\252\344\272\272\347\210\261\344\275\240\345\276\210\344\271\205 <br />\344\275\206\345\201\217\345\201\217\351\243\216\346\270\220\346\270\220\346\212\212\350\267\235\347\246\273\345\220\271\345\276\227\345\245\275\350\277\234 <br />\345\201\217\345\201\217\351\243\216\346\270\220\346\270\220\346\212\212\350\267\235\347\246\273\345\220\271\345\276\227\345\245\275\350\277\234 <br />\344\275\206\345\201\217\345\201\217\351\233\250\346\270\220\346\270\220\346\212\212\350\267\235\347\246\273\345\220\271\345\276\227\345\245\275\350\277\234 <br />\345\245\275"
                        "\344\270\215\345\256\271\346\230\223\345\217\210\350\203\275\345\206\215\345\244\232\347\210\261\344\270\200\345\244\251 <br />\344\275\206\346\225\205\344\272\213\347\232\204\346\234\200\345\220\216\344\275\240\345\245\275\345\203\217\350\277\230\346\230\257\350\257\264\344\272\206\346\213\234\346\213\234 <br />\344\275\206\346\225\205\344\272\213\347\232\204\346\234\200\345\220\216\344\275\240\345\245\275\345\203\217\350\277\230\346\230\257\350\257\264\344\272\206</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Container_03Class", "\346\231\264\345\244\251", nullptr));
        textEdit_2->setHtml(QApplication::translate("Container_03Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:10px; margin-bottom:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:29px; background-color:#ffffff;\"><a name=\"best-content-125247326\"></a><span style=\" font-family:'PingFang SC,Lantinghei SC,Microsoft YaHei,arial,\345\256\213\344\275\223,sans-serif,tahoma'; font-size:16px; color:#333333; background-color:#ffffff;\">\346\255\214</span><span style=\" font-family:'PingFang SC,Lantinghei SC,Microsoft YaHei,arial,\345\256\213\344\275\223,sans-serif,tahoma'; font-size:16px; color:#333333; background-color:#ffffff;\">\346\233\262\357\274\232\346\230\257\344\270\215\346\230\257\350\277\231\346\240\267\347\232\204\345\244\234"
                        "\346\231\232\346\211\215\344\274\232\350\277\231\346\240\267\347\232\204\346\203\263\350\265\267\346\210\221</span><span style=\" font-family:'PingFang SC,Lantinghei SC,Microsoft YaHei,arial,\345\256\213\344\275\223,sans-serif,tahoma'; font-size:16px; color:#333333;\"><br />\346\255\214\346\211\213\357\274\232\345\220\264\345\256\227\345\256\252<br /><br />\346\230\257\344\270\215\346\230\257\350\277\231\346\240\267\347\232\204\345\244\234\346\231\232\346\211\215\344\274\232\350\277\231\346\240\267\347\232\204\346\203\263\350\265\267\346\210\221<br /><br />\347\273\223\346\235\237\345\277\231\347\242\214\347\232\204\344\270\200\345\244\251\346\215\242\345\233\236\347\206\237\346\202\211\347\232\204\345\257\202\345\257\236<br />\346\207\222\346\207\222\347\232\204\350\272\272\345\234\250\346\262\231\345\217\221\344\270\212<br />\345\203\217\346\257\215\344\272\262\346\270\251\346\232\226\350\207\202\350\206\200<br />\350\275\254\345\210\260\346\230\250\345\244\251\347\232\204\351\242\221\351\201\223\350\256\251"
                        "\345\243\260\351\237\263\351\251\261\350\265\260\345\257\202\351\235\231<br />\346\200\273\346\230\257\345\220\214\346\240\267\347\232\204\345\211\247\346\203\205\345\220\214\346\240\267\347\232\204\345\257\271\347\231\275<br />\345\220\214\346\240\267\347\232\204\347\251\272\347\231\275<br />\346\230\257\344\270\215\346\230\257\350\277\231\346\240\267\347\232\204\345\244\234\346\231\232\344\275\240\346\211\215\344\274\232\350\277\231\346\240\267\347\232\204\346\203\263\350\265\267\346\210\221<br />\350\277\231\346\240\267\347\232\204\345\244\234\346\231\232\351\200\202\345\220\210\345\234\250\347\224\265\350\257\235\351\207\214<br />\345\217\252\350\246\201\345\207\240\345\217\245\345\260\217\345\277\203\347\232\204\345\275\274\346\255\244\351\227\256\345\200\231<br />\346\264\227\350\277\231\344\270\244\347\253\257\347\232\204\347\214\234\346\265\213<br />\346\230\257\350\277\231\346\240\267\347\232\204\345\244\234\346\231\232\346\203\263\350\265\267\346\210\221 oh<br />\346\230\257\344\270\215\346\230\257\350"
                        "\277\231\346\240\267\347\232\204\345\244\234\346\231\232\344\275\240\346\211\215\344\274\232\350\277\231\346\240\267\347\232\204\346\203\263\350\265\267\346\210\221<br />\350\277\231\346\240\267\347\232\204\345\244\234\346\231\232\351\200\202\345\220\210\345\234\250\347\224\265\350\257\235\351\207\214<br />\350\231\275\347\204\266\345\207\240\345\217\245\345\260\217\345\277\203\347\232\204\345\275\274\346\255\244\351\227\256\345\200\231<br />\347\216\260\345\234\250\347\211\265\346\234\252\346\235\245\347\232\204\346\211\213<br />\346\230\257\350\277\231\346\240\267\347\232\204\346\227\245\345\255\220\351\234\200\350\246\201\346\224\271\345\217\230<br />\350\275\254\345\210\260\346\230\250\345\244\251\347\232\204\351\242\221\351\201\223\350\256\251\345\243\260\351\237\263\351\251\261\350\265\260\345\257\202\351\235\231<br />\346\200\273\346\230\257\345\220\214\346\240\267\347\232\204\345\211\247\346\203\205\345\220\214\346\240\267\347\232\204\345\257\271\347\231\275<br />\345\220\214\346\240\267\347\232\204\347"
                        "\251\272\347\231\275<br />\346\230\257\344\270\215\346\230\257\350\277\231\346\240\267\347\232\204\345\244\234\346\231\232\344\275\240\346\211\215\344\274\232\350\277\231\346\240\267\347\232\204\346\203\263\350\265\267\346\210\221<br />\350\277\231\346\240\267\347\232\204\345\244\234\346\231\232\351\200\202\345\220\210\345\234\250\347\224\265\350\257\235\351\207\214<br />\345\217\252\350\246\201\345\207\240\345\217\245\345\260\217\345\277\203\347\232\204\345\275\274\346\255\244\351\227\256\345\200\231<br />\346\264\227\350\277\231\344\270\244\347\253\257\347\232\204\347\214\234\346\265\213<br />\346\230\257\350\277\231\346\240\267\347\232\204\345\244\234\346\231\232\346\203\263\350\265\267\346\210\221 oh<br />\346\230\257\344\270\215\346\230\257\350\277\231\346\240\267\347\232\204\345\244\234\346\231\232\344\275\240\346\211\215\344\274\232\350\277\231\346\240\267\347\232\204\346\203\263\350\265\267\346\210\221<br />\350\277\231\346\240\267\347\232\204\345\244\234\346\231\232\351\200\202\345\220\210\345\234\250"
                        "\347\224\265\350\257\235\351\207\214<br />\350\231\275\347\204\266\345\207\240\345\217\245\345\260\217\345\277\203\347\232\204\345\275\274\346\255\244\351\227\256\345\200\231<br />\347\216\260\345\234\250\347\211\265\346\234\252\346\235\245\347\232\204\346\211\213<br />\346\230\257\350\277\231\346\240\267\347\232\204\346\227\245\345\255\220\351\234\200\350\246\201\346\224\271\345\217\230</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Container_03Class", "\346\230\257\344\270\215\346\230\257\350\277\231\346\240\267\347\232\204\345\244\234\346\231\232\344\275\240\346\211\215\344\274\232\350\277\231\346\240\267\347\232\204\346\203\263\350\265\267\346\210\221", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("Container_03Class", "Page 1", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("Container_03Class", "Page 2", nullptr));
        groupBox->setTitle(QApplication::translate("Container_03Class", "QTabWidget", nullptr));
        label_2->setText(QApplication::translate("Container_03Class", "tabPosition", nullptr));
        label->setText(QApplication::translate("Container_03Class", "elideModel", nullptr));
        check_closable->setText(QApplication::translate("Container_03Class", "tabsClosable", nullptr));
        check_moveable->setText(QApplication::translate("Container_03Class", "moveable", nullptr));
        check_document->setText(QApplication::translate("Container_03Class", "documentMode", nullptr));
        check_autohide->setText(QApplication::translate("Container_03Class", "tabBarAutoHide", nullptr));
        check_scrollBtns->setText(QApplication::translate("Container_03Class", "usesScrollButtons", nullptr));
        label_3->setText(QApplication::translate("Container_03Class", "tabShape", nullptr));
        groupBox_2->setTitle(QApplication::translate("Container_03Class", "QToolBox", nullptr));
        btn_addItem->setText(QApplication::translate("Container_03Class", "\346\217\222\345\205\245\344\270\200\344\270\252\346\226\260item", nullptr));
        btn_delItem->setText(QApplication::translate("Container_03Class", "\345\210\240\351\231\244\345\275\223\345\211\215item", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Container_03Class: public Ui_Container_03Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTAINER_03_H
