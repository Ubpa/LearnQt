#pragma once

#ifdef WIN32
#pragma execution_character_set("utf-8")
#endif

#include <QtWidgets/QMainWindow>
#include "ui_myQWidget.h"

class myQWidget : public QMainWindow
{
	Q_OBJECT

public:
	myQWidget(QWidget *parent = Q_NULLPTR);

private:
	Ui::myQWidgetClass ui;
};
