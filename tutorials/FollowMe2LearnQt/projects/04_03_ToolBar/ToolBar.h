#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ToolBar.h"

class QListWidgetItem;

class ToolBar : public QMainWindow
{
	Q_OBJECT

public:
	ToolBar(QWidget *parent = Q_NULLPTR);

private slots:
	//放置区域槽函数
	void on_listWidget_area_itemChanged(QListWidgetItem *item);
	//工具栏图标样式槽函数
	void onBtnStyleChanged(QListWidgetItem *item);
	void on_check_floatable_toggled(bool checked);
	void on_check_movable_toggled(bool checked);

private:
	Ui::ToolBarClass ui;
};
