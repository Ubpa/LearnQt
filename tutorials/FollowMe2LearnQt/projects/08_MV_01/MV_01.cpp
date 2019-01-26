#include "MV_01.h"

#include <qfilesystemmodel.h>
#include <qdebug.h>

MV_01::MV_01(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	model = new QFileSystemModel;
	model->setRootPath(QDir::currentPath());

	ui.treeView->setModel(model);
	ui.treeView->setRootIndex(model->index(QDir::currentPath()));

	ui.listView->setModel(model);
	ui.listView->setRootIndex(model->index(QDir::currentPath()));

	// Unlike QDirModel, QFileSystemModel uses a separate thread to populate itself
	// so it will not cause the main thread to hang as the file system is being queried.
	// Calls to rowCount() will return 0 until the model populates a directory.
	connect(model, &QFileSystemModel::directoryLoaded, [this]() {
		QModelIndex parentIndex = model->index(QDir::currentPath());
		int numRows = model->rowCount(parentIndex);
		int numCols = model->columnCount(parentIndex);
		for (int row = 0; row < numRows; ++row) {
			QModelIndex index = model->index(row, 0, parentIndex);
			QString text = model->data(index, Qt::DisplayRole).toString();
			// Display the text in a widget.
			qDebug() << text;
		}
	});
}
