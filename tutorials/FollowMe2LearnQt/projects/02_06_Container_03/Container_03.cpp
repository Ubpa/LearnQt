#include "Container_03.h"
#include "ui_Container_03.h"

Container_03::Container_03(QWidget *parent) :
	QWidget(parent)
{
	ui.setupUi(this);

	/*1  QTabWidget����*/
	//��ǩʡ�Բ���
	QStringList textList;
	textList << "ElideLeft" << "ElideRight" << "ElideMiddle" << "ElideNone";
	ui.combo_elide->addItems(textList);

	//��ǩλ��
	textList.clear();
	textList << "North" << "South" << "West" << "East";
	ui.combo_tabposition->addItems(textList);

	//��ǩ��״
	textList.clear();
	textList << "Rounded" << "Triangular";
	ui.combo_tabshape->addItems(textList);

	//���ӹرղ�
	connect(ui.tabWidget, &QTabWidget::tabCloseRequested,
		ui.tabWidget, &QTabWidget::removeTab);

	//���һ����ǩ
	ui.tabWidget->addTab(new QLabel("Add Tab"), tr("�����׸�"));
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
	ui.toolBox->addItem(new QLabel("��item"), tr("untitled"));
}

void Container_03::on_btn_delItem_clicked()
{
	int index = ui.toolBox->currentIndex();
	if (index != -1)
	{
		ui.toolBox->removeItem(index);
	}
}
