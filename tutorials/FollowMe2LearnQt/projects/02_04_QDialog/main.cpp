#include "myQDialog.h"
#include <QtWidgets/QApplication>
#include <QDialog>
#include <QDebug>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	myQDialog w;
	w.show();

	//��ģ̬�Ի���
	QDialog modelLessDlg;
	modelLessDlg.setWindowTitle("��ģ̬�Ի���");
	modelLessDlg.show();
	modelLessDlg.resize(200, 100);
	qDebug() << "��ʾ���ģ̬�Ի���󣬲���Ҫ���û������ͻ�����ִ����";

	return a.exec();
}
