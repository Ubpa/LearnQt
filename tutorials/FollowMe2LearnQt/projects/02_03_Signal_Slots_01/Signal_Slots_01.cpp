#include "Signal_Slots_01.h"

#include <QIntValidator>
#include <QLineEdit>

Signal_Slots_01::Signal_Slots_01(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	int maxInt = 999;
	int minInt = 0;
	ui.horizontalSlider->setMaximum(maxInt);//设置最大最小值
	ui.horizontalSlider->setMinimum(minInt);

	//设置QLineEdit只能输入数字，且为0-999
	QIntValidator* validator = new QIntValidator(minInt, maxInt, this);
	ui.lineEdit->setValidator(validator);

	// type 1
	// lineEdit的文本修改时会调用sltLineEditChanged
	connect(ui.lineEdit, &QLineEdit::textChanged, this, &Signal_Slots_01::sltLineEditChanged);

	// type 2
	// this的信号sigShowVal发射时会调用setText
	connect(this, SIGNAL(sigShowVal(QString)), ui.label, SLOT(setText(QString)));
}

void Signal_Slots_01::sltLineEditChanged(const QString &text)
{
	int val = text.toInt();
	ui.horizontalSlider->setValue(val);//设置slider当前值
	emit sigShowVal(text);//通知label显示文字
}