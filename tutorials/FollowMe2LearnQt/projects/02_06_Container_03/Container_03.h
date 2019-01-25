#pragma once

#ifdef WIN32
#pragma execution_character_set("utf-8")
#endif

#include <QtWidgets/QWidget>
#include "ui_Container_03.h"

class Container_03 : public QWidget
{
	Q_OBJECT

public:
	Container_03(QWidget *parent = Q_NULLPTR);

private slots:
	void on_combo_elide_currentIndexChanged(int index);
	void on_combo_tabposition_currentIndexChanged(int index);
	void on_combo_tabshape_currentIndexChanged(int index);
	void on_check_document_toggled(bool checked);
	void on_check_autohide_toggled(bool checked);
	void on_check_moveable_toggled(bool checked);
	void on_check_closable_toggled(bool checked);
	void on_check_scrollBtns_toggled(bool checked);
	void on_btn_addItem_clicked();
	void on_btn_delItem_clicked();

private:
	Ui::Container_03Class ui;
};
