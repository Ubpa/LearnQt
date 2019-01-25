#include "Displays.h"
#include "ui_Displays.h"

Displays::Displays(QWidget *parent) :
	QWidget(parent)
{
	ui.setupUi(this);

	QStringList textList;
	textList << "PlainText" << "RichText" << "AutoText";
	ui.combo_format->addItems(textList);
}

void Displays::on_lineEdit_editingFinished()
{
	ui.label_display->setText(ui.lineEdit->text());
}

void Displays::on_check_links_toggled(bool checked)
{
	ui.label_display->setOpenExternalLinks(checked);
}

void Displays::on_check_scaled_toggled(bool checked)
{
	ui.label_display->setScaledContents(checked);
}

void Displays::on_check_wordWrap_toggled(bool checked)
{
	ui.label_display->setWordWrap(checked);
}

void Displays::on_spin_indent_valueChanged(int arg1)
{
	ui.label_display->setIndent(arg1);
}

void Displays::on_combo_format_currentIndexChanged(int index)
{
	ui.label_display->setTextFormat((Qt::TextFormat)index);
}
