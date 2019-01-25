#include "Container_01.h"

Container_01::Container_01(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	ui.tabWidget->setMinimumHeight(500);

	// The widget becomes a child of the scroll area
	ui.scrollArea->setWidget(ui.tabWidget);
}

void Container_01::on_pushButton_clicked()
{
	ui.scrollArea->hide();
}

void Container_01::on_pushButton_2_clicked()
{
	ui.scrollArea->show();
}