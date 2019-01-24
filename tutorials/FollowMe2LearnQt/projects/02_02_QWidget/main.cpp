#include "myQWidget.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	myQWidget w;
	w.show();
	return a.exec();
}
