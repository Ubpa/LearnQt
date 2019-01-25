#include "Container_03.h"
#include "ui_Container_03.h"

Container_03::Container_03(QWidget *parent) :
	QWidget(parent)
{
	ui.setupUi(this);

	/*1  QTabWidget设置*/
	//标签省略策略
	QStringList textList;
	textList << "ElideLeft" << "ElideRight" << "ElideMiddle" << "ElideNone";
	ui.combo_elide->addItems(textList);

	//标签位置
	textList.clear();
	textList << "North" << "South" << "West" << "East";
	ui.combo_tabposition->addItems(textList);

	//标签形状
	textList.clear();
	textList << "Rounded" << "Triangular";
	ui.combo_tabshape->addItems(textList);

	//连接关闭槽
	connect(ui.tabWidget, &QTabWidget::tabCloseRequested,
		ui.tabWidget, &QTabWidget::removeTab);

	//添加一个标签
	ui.tabWidget->addTab(new QLabel("Add Tab"), tr("第三首歌"));
}

void Container_03::on_combo_elide_currentIndexChanged(int index)
{
	ui.tabWidget->setElideMode((Qt::TextElideMode)index);
}

void Container_03::on_combo_tabposition_currentIndexChanged(int index)
{
	ui.tabWidget->setTabPosition((QTabWidget::TabPosition)index);
}

void Container_03::on_combo_tabshape_currentIndexChanged(int index)
{
	ui.tabWidget->setTabShape((QTabWidget::TabShape)index);
}

void Container_03::on_check_document_toggled(bool checked)
{
	ui.tabWidget->setDocumentMode(checked);
}

void Container_03::on_check_autohide_toggled(bool checked)
{
	ui.tabWidget->setTabBarAutoHide(checked);
}

void Container_03::on_check_moveable_toggled(bool checked)
{
	ui.tabWidget->setMovable(checked);
}

void Container_03::on_check_closable_toggled(bool checked)
{
	ui.tabWidget->setTabsClosable(checked);
}

void Container_03::on_check_scrollBtns_toggled(bool checked)
{
	ui.tabWidget->setUsesScrollButtons(checked);
}

void Container_03::on_btn_addItem_clicked()
{
	ui.toolBox->addItem(new QLabel("新item"), tr("untitled"));
}

void Container_03::on_btn_delItem_clicked()
{
	int index = ui.toolBox->currentIndex();
	if (index != -1)
	{
		ui.toolBox->removeItem(index);
	}
}
