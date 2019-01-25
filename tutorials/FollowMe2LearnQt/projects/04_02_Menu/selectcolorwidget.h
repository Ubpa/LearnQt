#ifndef SELECTCOLORWIDGET_H
#define SELECTCOLORWIDGET_H

#include <QWidget>
#include "ui_selectcolorwidget.h"

class QButtonGroup;

class SelectColorWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SelectColorWidget(QWidget *parent = 0);

signals:
    void clrButtonClicked(const QColor& clr);

private:
    Ui::SelectColorWidget ui;
    QButtonGroup* m_btnGroup;
};

#endif // SELECTCOLORWIDGET_H
