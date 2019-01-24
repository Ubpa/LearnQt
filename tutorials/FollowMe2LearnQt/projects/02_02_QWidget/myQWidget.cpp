#include "myQWidget.h"

myQWidget::myQWidget(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//设置窗口的背景颜色
	setAutoFillBackground(true);
	QPalette pa = this->palette();
	pa.setBrush(QPalette::Background, QBrush(Qt::green));
	setPalette(pa);

	//设置窗口透明度
	setWindowOpacity(0.9);

	//设置窗口标题
	setWindowTitle("窗口属性");

	//设置悬停提示
	setToolTip("悬停");

	//重设大小
	resize(600, 400);

	//移动
	move(0, 0);
}
