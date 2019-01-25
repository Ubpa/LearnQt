#include "Dock.h"
#include "ui_Dock.h"

Dock::Dock(QWidget *parent) :
	QMainWindow(parent)
{
	ui.setupUi(this);
}

void Dock::on_listWidget_areas_itemChanged(QListWidgetItem *item)
{
	//获取该item所代表的位置flag
	int row = ui.listWidget_areas->row(item);
	int flg = Qt::LeftDockWidgetArea << row;

	//获取停靠窗口原来的位置flag，并设置新的可放置区域
	QList<QDockWidget *> allDocks = findChildren<QDockWidget *>();
	foreach(QDockWidget* dock, allDocks)
	{
		Qt::DockWidgetAreas areas = dock->allowedAreas();
		areas.setFlag((Qt::DockWidgetArea)flg, item->checkState() == Qt::Checked);
		dock->setAllowedAreas(areas);
	}
}

void Dock::on_listWidget_features_itemChanged(QListWidgetItem *item)
{
	//获取该item所代表的停靠窗口标识
	int row = ui.listWidget_features->row(item);
	int flg = QDockWidget::DockWidgetClosable << row;

	//获取停靠窗口原来的窗口flag，并设置新的标识
	QList<QDockWidget *> allDocks = findChildren<QDockWidget *>();
	foreach(QDockWidget* dock, allDocks)
	{
		QDockWidget::DockWidgetFeatures features = dock->features();
		features.setFlag((QDockWidget::DockWidgetFeature)flg, item->checkState() == Qt::Checked);
		dock->setFeatures(features);
	}
}
