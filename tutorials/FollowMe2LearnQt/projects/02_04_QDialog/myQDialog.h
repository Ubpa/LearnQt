#pragma once

#ifdef WIN32
#pragma execution_character_set("utf-8")
#endif

#include <QtWidgets/QWidget>
#include "ui_myQDialog.h"

class myQDialog : public QWidget
{
	Q_OBJECT

public:
	myQDialog(QWidget *parent = Q_NULLPTR);

private slots:
	void on_btnWindow_clicked();
	void on_btnApp_clicked();
	void on_btnCustom_clicked();

private:
	Ui::myQDialogClass ui;
};
