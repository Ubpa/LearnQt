#include "Buttons.h"
#include "ui_Buttons.h"

Buttons::Buttons(QWidget *parent) :
    QWidget(parent)
{
    ui.setupUi(this);
    //�����Զ������ť
    ui.pushButton->setAutoRepeat(true);
    //���°�ť���ɿ���2���ʼ�Զ������ź�
    ui.pushButton->setAutoRepeatDelay(2000);
    //ÿ��1�뷢��һ�ε���ź�
    ui.pushButton->setAutoRepeatInterval(1000);
}

void Buttons::on_pushButton_clicked()
{
    int val = ui.spinBox->value();
    ui.spinBox->setValue(val+1);
}

void Buttons::on_check_flat_stateChanged(int arg1)
{
    ui.pushButton->setFlat(arg1==Qt::Checked);
}
