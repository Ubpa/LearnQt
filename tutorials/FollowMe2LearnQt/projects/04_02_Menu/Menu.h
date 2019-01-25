#pragma once

#ifdef WIN32
#pragma execution_character_set("utf-8")
#endif

#include <QtWidgets/QMainWindow>
#include <qmenu.h>
#include "ui_Menu.h"

class Menu : public QMainWindow
{
	Q_OBJECT

public:
	Menu(QWidget *parent = Q_NULLPTR);

private slots:
	void on_checkBox_separtors_toggled(bool checked);
	void on_checkBox_tear_toggled(bool checked);
	void on_checkBox_tips_toggled(bool checked);
	void setTextColor(const QColor& clr);

private:
	void createTextColorMenu();

private:
	Ui::MenuClass ui;
	QMenu* m_menu;
	QMenu* m_menuColor;
};
