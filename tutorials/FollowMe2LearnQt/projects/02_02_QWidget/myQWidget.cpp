#include "myQWidget.h"

myQWidget::myQWidget(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//���ô��ڵı�����ɫ
	setAutoFillBackground(true);
	QPalette pa = this->palette();
	pa.setBrush(QPalette::Background, QBrush(Qt::green));
	setPalette(pa);

	//���ô���͸����
	setWindowOpacity(0.9);

	//���ô��ڱ���
	setWindowTitle("��������");

	//������ͣ��ʾ
	setToolTip("��ͣ");

	//�����С
	resize(600, 400);

	//�ƶ�
	move(0, 0);
}
