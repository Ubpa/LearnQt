#pragma once

#include <QtWidgets/QWidget>
#include "ui_QSS.h"

class QSS : public QWidget
{
	Q_OBJECT

public:
	QSS(QWidget *parent = Q_NULLPTR);

private:
	Ui::QSSClass ui;
};
