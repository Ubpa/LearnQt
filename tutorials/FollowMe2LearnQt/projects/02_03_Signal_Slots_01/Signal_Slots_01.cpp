#include "Signal_Slots_01.h"

#include <QIntValidator>
#include <QLineEdit>

Signal_Slots_01::Signal_Slots_01(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	int maxInt = 999;
	int minInt = 0;
	ui.horizontalSlider->setMaximum(maxInt);//���������Сֵ
	ui.horizontalSlider->setMinimum(minInt);

	//����QLineEditֻ���������֣���Ϊ0-999
	QIntValidator* validator = new QIntValidator(minInt, maxInt, this);
	ui.lineEdit->setValidator(validator);

	// type 1
	// lineEdit���ı��޸�ʱ�����sltLineEditChanged
	connect(ui.lineEdit, &QLineEdit::textChanged, this, &Signal_Slots_01::sltLineEditChanged);

	// type 2
	// this���ź�sigShowVal����ʱ�����setText
	connect(this, SIGNAL(sigShowVal(QString)), ui.label, SLOT(setText(QString)));
}

void Signal_Slots_01::sltLineEditChanged(const QString &text)
{
	int val = text.toInt();
	ui.horizontalSlider->setValue(val);//����slider��ǰֵ
	emit sigShowVal(text);//֪ͨlabel��ʾ����
}