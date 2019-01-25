#pragma once

#include <QtWidgets/QWidget>
#include "ui_Container_01.h"

class Container_01 : public QWidget
{
	Q_OBJECT

public:
	Container_01(QWidget *parent = Q_NULLPTR);

private slots:
	void on_pushButton_clicked();

	void on_pushButton_2_clicked();

private:
	Ui::Container_01Class ui;
};
