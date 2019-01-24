#pragma once

#ifdef WIN32
#pragma execution_character_set("utf-8")
#endif

#include <QtWidgets/QWidget>
#include "ui_Standard_Dialogs.h"
#include <qerrormessage.h>

class Standard_Dialogs : public QWidget
{
	Q_OBJECT

public:
	Standard_Dialogs(QWidget *parent = Q_NULLPTR);

private slots:
	void on_getInt_clicked();
	void on_getDouble_clicked();
	void on_getItem_clicked();
	void on_getText_clicked();
	void on_getMultiText_clicked();

	void on_getColor_clicked();

	void on_getFont_clicked();

	void on_getExistingDirectory_clicked();
	void on_getOpenFileName_clicked();
	void on_getOpenFileNames_clicked();
	void on_getSaveFileName_clicked();

	void on_critical_clicked();
	void on_information_clicked();
	void on_question_clicked();
	void on_warning_clicked();
	void on_showMessage_clicked();

	void on_progress_clicked();

	void on_wizard_clicked();

private:
	QErrorMessage message;
	Ui::Standard_DialogsClass ui;
};
