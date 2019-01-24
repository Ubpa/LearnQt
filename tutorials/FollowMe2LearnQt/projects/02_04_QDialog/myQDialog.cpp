#include "myQDialog.h"
#include <qdialog.h>
#include <qdebug.h>
#include "CustomDialog.h"

myQDialog::myQDialog(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

//��������ģ̬�Ի���
void myQDialog::on_btnWindow_clicked()
{
	QDialog* dlg = new QDialog(this);
	dlg->setAttribute(Qt::WA_DeleteOnClose);//���öԻ���رպ��Զ�����
	dlg->setWindowModality(Qt::WindowModal);
	dlg->show();
	qDebug() << "��Ȼ��ʾģ̬�Ի��򣬵��Ҳ���Ҫ���û�������ͻ�����ִ��";
}

//����Ӧ��ģ̬�Ի���
void myQDialog::on_btnApp_clicked()
{
	QDialog* dlg = new QDialog(this);
	dlg->setAttribute(Qt::WA_DeleteOnClose);//���öԻ���رպ��Զ�����
	dlg->setWindowModality(Qt::ApplicationModal);//���߿���ʹ��setModel(true)
	dlg->show();
	qDebug() << "��Ȼ��ʾģ̬�Ի��򣬵���Ҳ����Ҫ���û�������ͻ�����ִ��";
}

//�Զ���Ի���
void myQDialog::on_btnCustom_clicked()
{
	CustomDialog* dlg = new CustomDialog(this);
	dlg->setAttribute(Qt::WA_DeleteOnClose);//���öԻ���رպ��Զ�����
	int ret = dlg->exec();
	if (ret == QDialog::Accepted)
	{
		ui.lineEdit->setText("������OK��ť");
	}
	else if (ret == QDialog::Rejected)
	{
		ui.lineEdit->setText("������Cancle��ť");
	}
}