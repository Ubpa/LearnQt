#pragma once

#ifdef WIN32
#pragma execution_character_set("utf-8")
#endif

#include <QtWidgets/QWidget>
#include "ui_Signal_Slots_02.h"

class Signal_Slots_02 : public QWidget
{
	Q_OBJECT

public:
	Signal_Slots_02(QWidget *parent = Q_NULLPTR);

public slots:
	// 现版本只能手写, Qt Designer 不再能自动生成
	void on_pushButton_toggled(bool checked);

private:
	Ui::Signal_Slots_02Class ui;
};
