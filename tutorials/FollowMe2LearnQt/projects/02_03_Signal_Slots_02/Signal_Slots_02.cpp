#include "Signal_Slots_02.h"
#include <qdebug.h>

Signal_Slots_02::Signal_Slots_02(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.pushButton->setText("���ؽ�����");
}

void Signal_Slots_02::on_pushButton_toggled(bool checked)
{
	if (checked)
	{
		ui.pushButton->setText("���ؽ�����");
	}
	else
	{
		ui.pushButton->setText("��ʾ������");
	}
}