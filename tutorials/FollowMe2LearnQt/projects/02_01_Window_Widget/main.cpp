#include "Window_Widget.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Window_Widget w;
	w.show();

	QPushButton buttonWindow;
	buttonWindow.setText("ÎÒÊÇ´°¿Ú");
	buttonWindow.show();
	buttonWindow.resize(200, 100);

	return a.exec();
}
