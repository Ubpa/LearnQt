#include "Window_Widget.h"

#include <QtWidgets/QPushButton>

Window_Widget::Window_Widget(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	QPushButton* buttonChild = new QPushButton(this);
	buttonChild->setText("ÎÒÊÇ¿Ø¼ş");
}
