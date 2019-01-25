#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Dock.h"

class Dock : public QMainWindow
{
	Q_OBJECT

public:
	Dock(QWidget *parent = Q_NULLPTR);

private slots:
	void on_listWidget_areas_itemChanged(QListWidgetItem *item);
	void on_listWidget_features_itemChanged(QListWidgetItem *item);

private:
	Ui::DockClass ui;
};
