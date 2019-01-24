#pragma once

#include <QtWidgets/QMainWindow>
// 由 HelloWorld.ui 生成，定义了 HelloWorldClass
#include "ui_HelloWorld.h"

class HelloWorld : public QMainWindow
{
	/*
	* Q_OBJECT宏
	* 必须在类的私有声明中声明这个宏
	* 这样就可以使用Qt的信号槽机制，元对象系统，对象树等Qt特有的功能，否则无法使用。
	*/
	Q_OBJECT

public:
	HelloWorld(QWidget *parent = Q_NULLPTR);

private:
	// ui界面对象，内含控件对象指针
	Ui::HelloWorldClass ui;
};
