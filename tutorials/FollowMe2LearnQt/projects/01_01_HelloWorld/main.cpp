#include "HelloWorld.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	/*
	* 创建一个QApplication实例
	* 如果所创建的是一个窗口应用程序，那么必须要有且只有一个这样的实例
	* 在创建QApplication实例后，会自动将指针赋值给Qt的全局变量qApp
	* 如果想在其它地方使用QApplication实例，则可以直接调用qApp。
	*
	* 因为QApplication实例会进行大量的初始化工作，所以要在使用任何对象之前就创建QApplication实例
	* 因此，main函数开头便创建了QApplication实例。
	*/
	QApplication a(argc, argv);

	// 创建 Widget
	HelloWorld w;
	// 显示 Widget
	w.show();

	/*
	* 进入Qt的主循环事件。
	* 当调用exit()函数时，才会退出循环，退出main函数。
	* 当程序在准备退出主循环时，会发出aboutToQuit()信号，
	* 如果有某些在退出程序前要处理的事情，可链接此信号进行处理。
	* 除了主循环外，Qt还有本地循环，可以理解为子循环。
	*/
	return a.exec();
}
