#pragma once

#include <QtWidgets/QWidget>
#include "ui_Displays.h"

class Displays : public QWidget
{
	Q_OBJECT

public:
	Displays(QWidget *parent = Q_NULLPTR);

private slots:
	void on_lineEdit_editingFinished();
	void on_check_links_toggled(bool checked);
	void on_check_scaled_toggled(bool checked);
	void on_check_wordWrap_toggled(bool checked);
	void on_spin_indent_valueChanged(int arg1);
	void on_combo_format_currentIndexChanged(int index);

private:
	Ui::DisplaysClass ui;
};
