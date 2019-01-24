#pragma once

#ifdef WIN32
#pragma execution_character_set("utf-8")
#endif

#include <QtWidgets/QMainWindow>
#include "ui_Window_Widget.h"

class Window_Widget : public QMainWindow
{
	Q_OBJECT

public:
	Window_Widget(QWidget *parent = Q_NULLPTR);

private:
	Ui::Window_WidgetClass ui;
};
