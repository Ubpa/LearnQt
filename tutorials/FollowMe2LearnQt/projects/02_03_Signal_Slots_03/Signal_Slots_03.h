#pragma once

#include <QtWidgets/QWidget>
#include "ui_Signal_Slots_03.h"

class Signal_Slots_03 : public QWidget
{
	Q_OBJECT

public:
	Signal_Slots_03(QWidget *parent = Q_NULLPTR);

private:
	Ui::Signal_Slots_03Class ui;
};
