#include "Buttons.h"
#include "ui_Buttons.h"

Buttons::Buttons(QWidget *parent) :
    QWidget(parent)
{
    ui.setupUi(this);
    //启动自动点击按钮
    ui.pushButton->setAutoRepeat(true);
    //按下按钮不松开，2秒后开始自动发送信号
    ui.pushButton->setAutoRepeatDelay(2000);
    //每隔1秒发送一次点击信号
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
