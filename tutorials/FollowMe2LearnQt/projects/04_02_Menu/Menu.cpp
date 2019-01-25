#include <QWidgetAction>
#include "Menu.h"
#include "ui_Menu.h"
#include "selectcolorwidget.h"

Menu::Menu(QWidget *parent) :
	QMainWindow(parent)
{

	ui.setupUi(this);

	m_menu = new QMenu("点击菜单");

	//添加 微信，QQ动作
	QStringList strs;
	strs << "wechat" << "qq";
	foreach(const QString& str, strs)
	{
		QAction* act = new QAction(str);
		//使用资源文件，路径为该文件在资源树中的结构，切记冒号开头
		act->setIcon(QIcon(QString(":/Menu/Resources/image/%1.png").arg(str)));
		//设置悬停提示
		act->setToolTip(str);
		//加入到菜单中
		m_menu->addAction(act);
	}

	//添加 “大 中 小”动作，先添加个间隔线
	m_menu->addSeparator();
	strs.clear();
	strs << "小" << "中" << "大";
	QActionGroup* group = new QActionGroup(this);
	for (int i = 0; i < strs.size(); ++i)
	{
		QString str = strs.at(i);
		QAction* act = group->addAction(str);
		act->setData(i);//可以使用setData动态存储当前act的index索引

		//setCheckable会根据系统，在item前出现一个点或勾，表示已选中
		act->setCheckable(true);
		act->setToolTip(str);
		//将动作加入到动作组中，方便集中管理，
		//并且默认设置同一时间只有一个动作被选中
		group->addAction(act);
		m_menu->addAction(act);
	}

	//这里为简洁，使用了lambda表达式
	connect(group, &QActionGroup::triggered, [=](QAction* action) {
		QFont fnt = ui.textEdit->font();//获取文本原字体
		int index = action->data().toInt();//使用data获取索引
		if (index == 0)//小
		{
			fnt.setPointSize(9);
		}
		else if (index == 1)//中
		{
			fnt.setPointSize(14);
		}
		else//大
		{
			fnt.setPointSize(19);
		}
		ui.textEdit->setFont(fnt);
	});

	//将菜单加入到菜单栏
	menuBar()->addMenu(m_menu);

	//设置文本
	ui.textEdit->setText("跟小豆君学Qt");

	//选择第一个字体设置动作，设置为小号字体
	group->actions().first()->setChecked(true);

	createTextColorMenu();
}

void Menu::on_checkBox_separtors_toggled(bool checked)
{
	m_menu->setSeparatorsCollapsible(checked);
}

void Menu::on_checkBox_tear_toggled(bool checked)
{
	m_menu->setTearOffEnabled(checked);
}

void Menu::on_checkBox_tips_toggled(bool checked)
{
	m_menu->setToolTipsVisible(checked);
}

void Menu::setTextColor(const QColor &clr)
{
	QPalette palette = ui.textEdit->palette();
	palette.setColor(QPalette::Text, clr);
	ui.textEdit->setPalette(palette);

	m_menuColor->close();
}

void Menu::createTextColorMenu()
{
	SelectColorWidget* wgt = new SelectColorWidget;
	m_menuColor = new QMenu("文字颜色");
	QWidgetAction* act = new QWidgetAction(m_menuColor);
	act->setDefaultWidget(wgt);
	connect(wgt, SIGNAL(clrButtonClicked(QColor)),
		this, SLOT(setTextColor(QColor)));

	m_menuColor->addAction(act);
	menuBar()->addMenu(m_menuColor);
}
