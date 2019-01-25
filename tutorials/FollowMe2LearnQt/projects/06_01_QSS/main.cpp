#include "QSS.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QSS w;
	w.show();
	return a.exec();
}
