#pragma once

#include <QtWidgets/QWidget>
#include "ui_MV_02.h"

class QStringListModel;

class MV_02 : public QWidget
{
	Q_OBJECT

public:
	MV_02(QWidget *parent = Q_NULLPTR);

private:
	Ui::MV_02Class ui;
	QStringListModel * model;
};
