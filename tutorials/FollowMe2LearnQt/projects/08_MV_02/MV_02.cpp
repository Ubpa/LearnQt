#include "MV_02.h"

#include "SpinBoxDelegate.h"

#include <qstringlistmodel.h>
#include <qmessagebox.h>

MV_02::MV_02(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	QStringList data;
	data << "0" << "1" << "2";
	model = new QStringListModel(this);
	model->setStringList(data);

	ui.listView->setModel(model);

	// listView 自带的 editor 允许任意的输入，为了限制，故自定义了 ItemDelegate
	ui.listView->setItemDelegate(new SpinBoxDelegate(ui.listView));

	connect(ui.btn_ShowModel, &QPushButton::clicked, [this]() {
		int rowNum = model->rowCount();
		QStringList strL;
		for (int i = 0; i < rowNum; ++i) {
			auto idx = model->index(i);
			int val = model->data(idx, Qt::DisplayRole).toInt();
			strL.append(std::to_string(val).c_str());
		}
		QMessageBox::information(this, tr("Model Data"), tr(strL.join(", ").toStdString().c_str()), tr("ok")); ;
	});
}
