#include "Dock.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Dock w;
	w.show();
	return a.exec();
}
