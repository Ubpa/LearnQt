#include "Signal_Slots_03.h"

#include <qlayout.h>
#include <qlineedit.h>
#include <qsignalmapper.h>
#include <qpushbutton.h>

Signal_Slots_03::Signal_Slots_03(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//创建垂直布局，将垂直布局作为主布局
	QVBoxLayout* vLayout = new QVBoxLayout(this);

	//创建编辑框，用于显示点击按钮的文字，并且文字在右边显示
	QLineEdit* edit = new QLineEdit;
	edit->setAlignment(Qt::AlignRight);
	vLayout->addWidget(edit);//将编辑框加入到垂直布局中

	//创建信号匹配器
	QSignalMapper* signalMapper = new QSignalMapper(this);

	//创建0-9数字键，并都加入到网格布局中
	QGridLayout *gridLayout = new QGridLayout;
	for (int i = 0; i < 10; ++i)
	{
		QString txt = QString::number(i);
		QPushButton *button = new QPushButton(txt);
		connect(button, SIGNAL(clicked()), signalMapper, SLOT(map()));
		signalMapper->setMapping(button, txt);//将按钮和要发送的字符串配对
		gridLayout->addWidget(button, i / 3, i % 3);//一行显示3列
	}

	//连接配对信号和设置文字槽
	connect(signalMapper, SIGNAL(mapped(QString)),
		edit, SLOT(setText(QString)));

	vLayout->addLayout(gridLayout);
	resize(200, 200);
}
