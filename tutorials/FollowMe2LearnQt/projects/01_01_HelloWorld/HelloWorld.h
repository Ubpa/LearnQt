#pragma once

#include <QtWidgets/QMainWindow>
// �� HelloWorld.ui ���ɣ������� HelloWorldClass
#include "ui_HelloWorld.h"

class HelloWorld : public QMainWindow
{
	/*
	* Q_OBJECT��
	* ���������˽�����������������
	* �����Ϳ���ʹ��Qt���źŲۻ��ƣ�Ԫ����ϵͳ����������Qt���еĹ��ܣ������޷�ʹ�á�
	*/
	Q_OBJECT

public:
	HelloWorld(QWidget *parent = Q_NULLPTR);

private:
	// ui��������ں��ؼ�����ָ��
	Ui::HelloWorldClass ui;
};
