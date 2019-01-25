#include "Dock.h"
#include "ui_Dock.h"

Dock::Dock(QWidget *parent) :
	QMainWindow(parent)
{
	ui.setupUi(this);
}

void Dock::on_listWidget_areas_itemChanged(QListWidgetItem *item)
{
	//��ȡ��item�������λ��flag
	int row = ui.listWidget_areas->row(item);
	int flg = Qt::LeftDockWidgetArea << row;

	//��ȡͣ������ԭ����λ��flag���������µĿɷ�������
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
	//��ȡ��item�������ͣ�����ڱ�ʶ
	int row = ui.listWidget_features->row(item);
	int flg = QDockWidget::DockWidgetClosable << row;

	//��ȡͣ������ԭ���Ĵ���flag���������µı�ʶ
	QList<QDockWidget *> allDocks = findChildren<QDockWidget *>();
	foreach(QDockWidget* dock, allDocks)
	{
		QDockWidget::DockWidgetFeatures features = dock->features();
		features.setFlag((QDockWidget::DockWidgetFeature)flg, item->checkState() == Qt::Checked);
		dock->setFeatures(features);
	}
}
