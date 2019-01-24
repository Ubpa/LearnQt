#include "Signal_Slots_02.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Signal_Slots_02 w;
	w.show();
	return a.exec();
}
