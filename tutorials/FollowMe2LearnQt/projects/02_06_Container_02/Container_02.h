#pragma once

#ifdef WIN32
#pragma execution_character_set("utf-8")
#endif

#include <QtWidgets/QWidget>
#include "ui_Container_02.h"

class Container_02 : public QFrame
{
	Q_OBJECT

public:
	Container_02(QWidget *parent = Q_NULLPTR);

private slots:
	void on_combo_h_currentIndexChanged(int index);
	void on_combo_v_currentIndexChanged(int index);
	void on_combo_size_currentIndexChanged(int index);
	void on_comboBox_aligment_currentIndexChanged(int index);
	void on_checkBox_flat_toggled(bool checked);

private:
	Ui::Container_02Class ui;
};
