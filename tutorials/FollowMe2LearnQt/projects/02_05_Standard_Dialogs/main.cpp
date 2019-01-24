#include "Standard_Dialogs.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Standard_Dialogs w;
	w.show();
	return a.exec();
}
