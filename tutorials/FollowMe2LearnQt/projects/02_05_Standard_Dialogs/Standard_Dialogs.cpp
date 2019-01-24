#include "Standard_Dialogs.h"

#include <qinputdialog.h>
#include <qcolordialog.h>
#include <qfontdialog.h>
#include <qfiledialog.h>
#include <qmessagebox.h>
#include <qprogressdialog.h>
#include <qwizard.h>

#include <qdebug.h>

Standard_Dialogs::Standard_Dialogs(QWidget *parent)
	: QWidget(parent), message(this)
{
	ui.setupUi(this);
}

void Standard_Dialogs::on_getInt_clicked()
{
	bool ok;
	int i = QInputDialog::getInt(this, tr("情况"),
		tr("几岁毕业"), 25, 16, 100, 1, &ok);
	if (ok)
		ui.label_input->setText(tr("%1").arg(i));
}

void Standard_Dialogs::on_getDouble_clicked()
{
	bool ok;
	double d = QInputDialog::getDouble(this, tr("工作"),
		tr("一天挣多少钱"), 1000, 100, 10000, 1, &ok);
	if (ok)
		ui.label_input->setText(QString("%1").arg(d));
}

void Standard_Dialogs::on_getItem_clicked()
{
	QStringList items;
	items << tr("王者荣耀") << tr("Dota") << tr("Dota2") << tr("LOL");

	bool ok;
	QString item = QInputDialog::getItem(this, tr("游戏"),
		tr("你玩哪一个"), items, 0, false, &ok);
	if (ok && !item.isEmpty())
		ui.label_input->setText(item);
}

void Standard_Dialogs::on_getText_clicked()
{
	bool ok;
	QString text = QInputDialog::getText(this, tr("发展"),
		tr("想跳槽吗"), QLineEdit::Normal,
		tr("懒"), &ok);
	if (ok && !text.isEmpty())
		ui.label_input->setText(text);
}

void Standard_Dialogs::on_getMultiText_clicked()
{
	bool ok;
	QString text = QInputDialog::getMultiLineText(this, tr("计划"),
		tr("下一步怎么做"), "走着瞧", &ok);
	if (ok && !text.isEmpty())
		ui.label_input->setText(text);
}

void Standard_Dialogs::on_getColor_clicked()
{
	QColorDialog::ColorDialogOptions option;
	if (ui.check_alpha->isChecked())
	{
		option = QColorDialog::ShowAlphaChannel;
	}
	const QColor color = QColorDialog::getColor(Qt::green, this, "选择颜色", option);

	if (color.isValid())
	{
		ui.getColor->setText(color.name());
		ui.getColor->setPalette(QPalette(color));
		ui.getColor->setAutoFillBackground(true);
	}
}

void Standard_Dialogs::on_getFont_clicked()
{
	bool ok;
	QFont font = QFontDialog::getFont(&ok, ui.label_font->font(), this, tr("选择字体"));
	if (ok)
	{
		ui.label_font->setFont(font);
	}
}

void Standard_Dialogs::on_getExistingDirectory_clicked()
{
	QString directory = QFileDialog::getExistingDirectory(this,
		tr("获取文件夹"),
		"./");
	if (!directory.isEmpty())
		ui.line_path->setText(directory);
}

void Standard_Dialogs::on_getOpenFileName_clicked()
{
	QString fileName = QFileDialog::getOpenFileName(this,
		tr("打开一个文件"),
		"./",
		tr("All Files (*);;Text Files (*.txt)"));
	if (!fileName.isEmpty())
		ui.line_path->setText(fileName);
}

void Standard_Dialogs::on_getOpenFileNames_clicked()
{
	QStringList files = QFileDialog::getOpenFileNames(
		this, tr("打开多个文件"),
		"./",
		tr("All Files (*);;Text Files (*.txt)"));
	if (files.count())
		ui.line_path->setText(QString("[%1]").arg(files.join(", ")));
}

void Standard_Dialogs::on_getSaveFileName_clicked()
{
	QString fileName = QFileDialog::getSaveFileName(this,
		tr("保存文件"),
		"./",
		tr("All Files (*);;Text Files (*.txt)"));
	if (!fileName.isEmpty())
		ui.line_path->setText(fileName);
}

void Standard_Dialogs::on_critical_clicked()
{
	QMessageBox::critical(this, tr("危险"), tr("修路危险"), tr("返回"), tr("步行"), tr("无视"));
}

void Standard_Dialogs::on_information_clicked()
{
	QMessageBox::information(this, tr("通知"), tr("会有个女朋友吗"), tr("不可能"), tr("真不可能"));
}

void Standard_Dialogs::on_question_clicked()
{
	QMessageBox::question(this, tr("问题"),
		"喜欢身材好的还是颜值高的",
		QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
}

void Standard_Dialogs::on_warning_clicked()
{
	QMessageBox msgBox(QMessageBox::Warning, tr("警告"),
		"不要调戏女朋友", 0, this);
	msgBox.setDetailedText(tr("真的别"));
	msgBox.addButton(tr("Save &Again"), QMessageBox::AcceptRole);
	msgBox.addButton(tr("&Continue"), QMessageBox::RejectRole);
	if (msgBox.exec() == QMessageBox::AcceptRole)
		qDebug() << "accept";
}


void Standard_Dialogs::on_showMessage_clicked()
{
	message.showMessage(tr("恭喜你中了5个亿，不好意思，系统出错"));
}

void Standard_Dialogs::on_progress_clicked()
{
	int numFiles = 50000;
	QProgressDialog progress("复制文件中...", "中断", 0, numFiles, this);
	progress.setWindowModality(Qt::WindowModal);
	progress.show();

	for (int i = 0; i < numFiles; i++)
	{
		progress.setValue(i);
		// 等待 events 处理完毕
		QCoreApplication::processEvents();
		if (progress.wasCanceled())
			break;
	}
	progress.setValue(numFiles);
}

void Standard_Dialogs::on_wizard_clicked()
{
	QWizard w(this);
	w.setWindowTitle("向导");

	QWizardPage* page1 = new QWizardPage();
	QWizardPage* page2 = new QWizardPage();
	QWizardPage* page3 = new QWizardPage();

	page1->setTitle("第1步");
	page2->setTitle("第2步");
	page3->setTitle("第3步");

	w.addPage(page1);
	w.addPage(page2);
	w.addPage(page3);

	w.exec();
}