#include "Displays.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Displays w;
	w.show();
	return a.exec();
}
