#include "HelloWorld.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	/*
	* ����һ��QApplicationʵ��
	* �������������һ������Ӧ�ó�����ô����Ҫ����ֻ��һ��������ʵ��
	* �ڴ���QApplicationʵ���󣬻��Զ���ָ�븳ֵ��Qt��ȫ�ֱ���qApp
	* ������������ط�ʹ��QApplicationʵ���������ֱ�ӵ���qApp��
	*
	* ��ΪQApplicationʵ������д����ĳ�ʼ������������Ҫ��ʹ���κζ���֮ǰ�ʹ���QApplicationʵ��
	* ��ˣ�main������ͷ�㴴����QApplicationʵ����
	*/
	QApplication a(argc, argv);

	// ���� Widget
	HelloWorld w;
	// ��ʾ Widget
	w.show();

	/*
	* ����Qt����ѭ���¼���
	* ������exit()����ʱ���Ż��˳�ѭ�����˳�main������
	* ��������׼���˳���ѭ��ʱ���ᷢ��aboutToQuit()�źţ�
	* �����ĳЩ���˳�����ǰҪ��������飬�����Ӵ��źŽ��д���
	* ������ѭ���⣬Qt���б���ѭ�����������Ϊ��ѭ����
	*/
	return a.exec();
}
