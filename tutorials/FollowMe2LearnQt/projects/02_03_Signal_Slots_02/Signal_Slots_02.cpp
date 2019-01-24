#include "Signal_Slots_02.h"
#include <qdebug.h>

Signal_Slots_02::Signal_Slots_02(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.pushButton->setText("隐藏进度条");
}

void Signal_Slots_02::on_pushButton_toggled(bool checked)
{
	if (checked)
	{
		ui.pushButton->setText("隐藏进度条");
	}
	else
	{
		ui.pushButton->setText("显示进度条");
	}
}