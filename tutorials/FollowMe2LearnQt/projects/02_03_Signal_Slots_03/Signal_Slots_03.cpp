#include "Signal_Slots_03.h"

#include <qlayout.h>
#include <qlineedit.h>
#include <qsignalmapper.h>
#include <qpushbutton.h>

Signal_Slots_03::Signal_Slots_03(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//������ֱ���֣�����ֱ������Ϊ������
	QVBoxLayout* vLayout = new QVBoxLayout(this);

	//�����༭��������ʾ�����ť�����֣������������ұ���ʾ
	QLineEdit* edit = new QLineEdit;
	edit->setAlignment(Qt::AlignRight);
	vLayout->addWidget(edit);//���༭����뵽��ֱ������

	//�����ź�ƥ����
	QSignalMapper* signalMapper = new QSignalMapper(this);

	//����0-9���ּ����������뵽���񲼾���
	QGridLayout *gridLayout = new QGridLayout;
	for (int i = 0; i < 10; ++i)
	{
		QString txt = QString::number(i);
		QPushButton *button = new QPushButton(txt);
		connect(button, SIGNAL(clicked()), signalMapper, SLOT(map()));
		signalMapper->setMapping(button, txt);//����ť��Ҫ���͵��ַ������
		gridLayout->addWidget(button, i / 3, i % 3);//һ����ʾ3��
	}

	//��������źź��������ֲ�
	connect(signalMapper, SIGNAL(mapped(QString)),
		edit, SLOT(setText(QString)));

	vLayout->addLayout(gridLayout);
	resize(200, 200);
}
