#include <QDebug>
#include <QtMath>
#include <QGroupBox>
#include <QScrollArea>
#include "Container_02.h"
#include "ui_Container_02.h"

Container_02::Container_02(QWidget *parent) :
	QFrame(parent)
{
	ui.setupUi(this);

	/*1  QFrame����*/
	setFrameShadow(Raised);
	setFrameShape(Box);
	setMidLineWidth(5);
	setLineWidth(2);

	/*2  QScrollArea����*/
	//����label����Ϊ������������Ĳ��������ӿڱ���Կ�������
	//����label��С��Ⱥ͸߶ȣ��Ա�����й��������֡�
	QLabel* label = new QLabel("����\n����\n��Ҫ\n��ʾ\n��");
	label->setMinimumHeight(500);
	label->setMinimumWidth(600);
	ui.scrollArea->setWidget(label);

	//����������
	QStringList textList;
	textList << "ScrollBarAsNeeded" << "ScrollBarAlwaysOff" << "ScrollBarAlwaysOn";
	ui.combo_h->addItems(textList);
	ui.combo_v->addItems(textList);

	//SizeAdjustPolicy
	textList.clear();
	textList << "AdjustIgnored" << "AdjustToContentsOnFirstShow" << "AdjustToContents";
	ui.combo_size->addItems(textList);

	/*3  QGroupBox����*/
	ui.groupBox_display->setCheckable(true);
	ui.groupBox_group->setChecked(true);

	//alignment
	textList.clear();
	textList << "AlignLeft" << "AlignRight" << "AlignHCenter" << "AlignJustify";
	ui.comboBox_aligment->addItems(textList);
}

void Container_02::on_combo_h_currentIndexChanged(int index)
{
	ui.scrollArea->setHorizontalScrollBarPolicy((Qt::ScrollBarPolicy)index);
}

void Container_02::on_combo_v_currentIndexChanged(int index)
{
	ui.scrollArea->setVerticalScrollBarPolicy((Qt::ScrollBarPolicy)index);
}

void Container_02::on_combo_size_currentIndexChanged(int index)
{
	ui.scrollArea->setSizeAdjustPolicy((QAbstractScrollArea::SizeAdjustPolicy)index);
}

void Container_02::on_comboBox_aligment_currentIndexChanged(int index)
{
	ui.groupBox_display->setAlignment(qPow(2, index));
}

void Container_02::on_checkBox_flat_toggled(bool checked)
{
	ui.groupBox_display->setFlat(checked);
}
