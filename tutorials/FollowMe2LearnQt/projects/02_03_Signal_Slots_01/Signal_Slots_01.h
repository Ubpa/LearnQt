#pragma once

#include <QtWidgets/QWidget>
#include "ui_Signal_Slots_01.h"

class Signal_Slots_01 : public QWidget
{
	Q_OBJECT

public:
	Signal_Slots_01(QWidget *parent = Q_NULLPTR);

signals:
	//�Զ����źţ��������źţ�ʹ��QLabel��ʾ����
	void sigShowVal(const QString&);

public slots:
	//�Զ���ۣ���LineEdit�������ָı���ź�ʱ��ִ�������
	void sltLineEditChanged(const QString& text);

private:
	Ui::Signal_Slots_01Class ui;
};
