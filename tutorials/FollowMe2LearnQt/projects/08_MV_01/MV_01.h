#pragma once

#include <QtWidgets/QWidget>
#include "ui_MV_01.h"

class QFileSystemModel;

class MV_01 : public QWidget
{
	Q_OBJECT

public:
	MV_01(QWidget *parent = Q_NULLPTR);

private:
	Ui::MV_01Class ui;

	QFileSystemModel * model;
};
