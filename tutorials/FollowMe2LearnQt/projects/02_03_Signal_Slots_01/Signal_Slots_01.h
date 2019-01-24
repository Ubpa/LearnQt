#pragma once

#include <QtWidgets/QWidget>
#include "ui_Signal_Slots_01.h"

class Signal_Slots_01 : public QWidget
{
	Q_OBJECT

public:
	Signal_Slots_01(QWidget *parent = Q_NULLPTR);

signals:
	//自定义信号，发出此信号，使得QLabel显示文字
	void sigShowVal(const QString&);

public slots:
	//自定义槽，当LineEdit发出文字改变的信号时，执行这个槽
	void sltLineEditChanged(const QString& text);

private:
	Ui::Signal_Slots_01Class ui;
};
