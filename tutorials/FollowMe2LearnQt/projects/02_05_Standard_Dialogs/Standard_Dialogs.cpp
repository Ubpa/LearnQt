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
	int i = QInputDialog::getInt(this, tr("���"),
		tr("�����ҵ"), 25, 16, 100, 1, &ok);
	if (ok)
		ui.label_input->setText(tr("%1").arg(i));
}

void Standard_Dialogs::on_getDouble_clicked()
{
	bool ok;
	double d = QInputDialog::getDouble(this, tr("����"),
		tr("һ��������Ǯ"), 1000, 100, 10000, 1, &ok);
	if (ok)
		ui.label_input->setText(QString("%1").arg(d));
}

void Standard_Dialogs::on_getItem_clicked()
{
	QStringList items;
	items << tr("������ҫ") << tr("Dota") << tr("Dota2") << tr("LOL");

	bool ok;
	QString item = QInputDialog::getItem(this, tr("��Ϸ"),
		tr("������һ��"), items, 0, false, &ok);
	if (ok && !item.isEmpty())
		ui.label_input->setText(item);
}

void Standard_Dialogs::on_getText_clicked()
{
	bool ok;
	QString text = QInputDialog::getText(this, tr("��չ"),
		tr("��������"), QLineEdit::Normal,
		tr("��"), &ok);
	if (ok && !text.isEmpty())
		ui.label_input->setText(text);
}

void Standard_Dialogs::on_getMultiText_clicked()
{
	bool ok;
	QString text = QInputDialog::getMultiLineText(this, tr("�ƻ�"),
		tr("��һ����ô��"), "������", &ok);
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
	const QColor color = QColorDialog::getColor(Qt::green, this, "ѡ����ɫ", option);

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
	QFont font = QFontDialog::getFont(&ok, ui.label_font->font(), this, tr("ѡ������"));
	if (ok)
	{
		ui.label_font->setFont(font);
	}
}

void Standard_Dialogs::on_getExistingDirectory_clicked()
{
	QString directory = QFileDialog::getExistingDirectory(this,
		tr("��ȡ�ļ���"),
		"./");
	if (!directory.isEmpty())
		ui.line_path->setText(directory);
}

void Standard_Dialogs::on_getOpenFileName_clicked()
{
	QString fileName = QFileDialog::getOpenFileName(this,
		tr("��һ���ļ�"),
		"./",
		tr("All Files (*);;Text Files (*.txt)"));
	if (!fileName.isEmpty())
		ui.line_path->setText(fileName);
}

void Standard_Dialogs::on_getOpenFileNames_clicked()
{
	QStringList files = QFileDialog::getOpenFileNames(
		this, tr("�򿪶���ļ�"),
		"./",
		tr("All Files (*);;Text Files (*.txt)"));
	if (files.count())
		ui.line_path->setText(QString("[%1]").arg(files.join(", ")));
}

void Standard_Dialogs::on_getSaveFileName_clicked()
{
	QString fileName = QFileDialog::getSaveFileName(this,
		tr("�����ļ�"),
		"./",
		tr("All Files (*);;Text Files (*.txt)"));
	if (!fileName.isEmpty())
		ui.line_path->setText(fileName);
}

void Standard_Dialogs::on_critical_clicked()
{
	QMessageBox::critical(this, tr("Σ��"), tr("��·Σ��"), tr("����"), tr("����"), tr("����"));
}

void Standard_Dialogs::on_information_clicked()
{
	QMessageBox::information(this, tr("֪ͨ"), tr("���и�Ů������"), tr("������"), tr("�治����"));
}

void Standard_Dialogs::on_question_clicked()
{
	QMessageBox::question(this, tr("����"),
		"ϲ����ĺõĻ�����ֵ�ߵ�",
		QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
}

void Standard_Dialogs::on_warning_clicked()
{
	QMessageBox msgBox(QMessageBox::Warning, tr("����"),
		"��Ҫ��ϷŮ����", 0, this);
	msgBox.setDetailedText(tr("��ı�"));
	msgBox.addButton(tr("Save &Again"), QMessageBox::AcceptRole);
	msgBox.addButton(tr("&Continue"), QMessageBox::RejectRole);
	if (msgBox.exec() == QMessageBox::AcceptRole)
		qDebug() << "accept";
}


void Standard_Dialogs::on_showMessage_clicked()
{
	message.showMessage(tr("��ϲ������5���ڣ�������˼��ϵͳ����"));
}

void Standard_Dialogs::on_progress_clicked()
{
	int numFiles = 50000;
	QProgressDialog progress("�����ļ���...", "�ж�", 0, numFiles, this);
	progress.setWindowModality(Qt::WindowModal);
	progress.show();

	for (int i = 0; i < numFiles; i++)
	{
		progress.setValue(i);
		// �ȴ� events �������
		QCoreApplication::processEvents();
		if (progress.wasCanceled())
			break;
	}
	progress.setValue(numFiles);
}

void Standard_Dialogs::on_wizard_clicked()
{
	QWizard w(this);
	w.setWindowTitle("��");

	QWizardPage* page1 = new QWizardPage();
	QWizardPage* page2 = new QWizardPage();
	QWizardPage* page3 = new QWizardPage();

	page1->setTitle("��1��");
	page2->setTitle("��2��");
	page3->setTitle("��3��");

	w.addPage(page1);
	w.addPage(page2);
	w.addPage(page3);

	w.exec();
}