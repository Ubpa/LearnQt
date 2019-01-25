#include <QDebug>
#include "ToolBar.h"
#include "ui_ToolBar.h"

ToolBar::ToolBar(QWidget *parent) :
	QMainWindow(parent)
{
	ui.setupUi(this);

	QIcon icon(":/ToolBar/Resources/image/qq.png");
	ui.actionAction1->setIcon(icon);
	ui.mainToolBar->setIconSize(QSize(30, 30));

	connect(ui.listWidget_button, SIGNAL(itemChanged(QListWidgetItem*)),
		this, SLOT(onBtnStyleChanged(QListWidgetItem *)));
}

void ToolBar::on_listWidget_area_itemChanged(QListWidgetItem *item)
{
	//��ȡ��item�������λ��flag
	int row = ui.listWidget_area->row(item);
	int flg = Qt::LeftToolBarArea << row;

	//��ȡ������ԭ����λ��flag
	Qt::ToolBarAreas areas = ui.mainToolBar->allowedAreas();

	//areasΪQFlags<Qt::ToolBarArea>���ͣ�����ֻ�轫��λ�ô򿪻�رռ���
	areas.setFlag((Qt::ToolBarArea)flg, item->checkState() == Qt::Checked);

	//������flags
	ui.mainToolBar->setAllowedAreas(areas);
}

void ToolBar::onBtnStyleChanged(QListWidgetItem *item)
{
	//������Ϊ�˻�ȡ��ѡЧ��
	disconnect(ui.listWidget_button, SIGNAL(itemChanged(QListWidgetItem*)),
		this, SLOT(onBtnStyleChanged(QListWidgetItem *)));

	static QListWidgetItem* lastItem = ui.listWidget_button->item(0);
	if (lastItem != item && item->checkState() == Qt::Checked)
	{
		int row = ui.listWidget_button->row(item);
		ui.mainToolBar->setToolButtonStyle((Qt::ToolButtonStyle)row);
		lastItem->setCheckState(Qt::Unchecked);
		lastItem = item;
	}
	else
	{
		item->setCheckState(Qt::Checked);
	}

	connect(ui.listWidget_button, SIGNAL(itemChanged(QListWidgetItem*)),
		this, SLOT(onBtnStyleChanged(QListWidgetItem *)));
}

void ToolBar::on_check_floatable_toggled(bool checked)
{
	ui.mainToolBar->setFloatable(checked);
}

void ToolBar::on_check_movable_toggled(bool checked)
{
	ui.mainToolBar->setMovable(checked);
}


