#pragma once

#include <QtWidgets/QWidget>
#include "ui_Buttons.h"

class Buttons : public QWidget
{
	Q_OBJECT

public:
	Buttons(QWidget *parent = Q_NULLPTR);

private slots:
	void on_pushButton_clicked();
	void on_check_flat_stateChanged(int arg1);

private:
	Ui::ButtonsClass ui;
};
