#include <QWidgetAction>
#include "Menu.h"
#include "ui_Menu.h"
#include "selectcolorwidget.h"

Menu::Menu(QWidget *parent) :
	QMainWindow(parent)
{

	ui.setupUi(this);

	m_menu = new QMenu("����˵�");

	//��� ΢�ţ�QQ����
	QStringList strs;
	strs << "wechat" << "qq";
	foreach(const QString& str, strs)
	{
		QAction* act = new QAction(str);
		//ʹ����Դ�ļ���·��Ϊ���ļ�����Դ���еĽṹ���м�ð�ſ�ͷ
		act->setIcon(QIcon(QString(":/Menu/Resources/image/%1.png").arg(str)));
		//������ͣ��ʾ
		act->setToolTip(str);
		//���뵽�˵���
		m_menu->addAction(act);
	}

	//��� ���� �� С������������Ӹ������
	m_menu->addSeparator();
	strs.clear();
	strs << "С" << "��" << "��";
	QActionGroup* group = new QActionGroup(this);
	for (int i = 0; i < strs.size(); ++i)
	{
		QString str = strs.at(i);
		QAction* act = group->addAction(str);
		act->setData(i);//����ʹ��setData��̬�洢��ǰact��index����

		//setCheckable�����ϵͳ����itemǰ����һ����򹴣���ʾ��ѡ��
		act->setCheckable(true);
		act->setToolTip(str);
		//���������뵽�������У����㼯�й���
		//����Ĭ������ͬһʱ��ֻ��һ��������ѡ��
		group->addAction(act);
		m_menu->addAction(act);
	}

	//����Ϊ��࣬ʹ����lambda���ʽ
	connect(group, &QActionGroup::triggered, [=](QAction* action) {
		QFont fnt = ui.textEdit->font();//��ȡ�ı�ԭ����
		int index = action->data().toInt();//ʹ��data��ȡ����
		if (index == 0)//С
		{
			fnt.setPointSize(9);
		}
		else if (index == 1)//��
		{
			fnt.setPointSize(14);
		}
		else//��
		{
			fnt.setPointSize(19);
		}
		ui.textEdit->setFont(fnt);
	});

	//���˵����뵽�˵���
	menuBar()->addMenu(m_menu);

	//�����ı�
	ui.textEdit->setText("��С����ѧQt");

	//ѡ���һ���������ö���������ΪС������
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
	m_menuColor = new QMenu("������ɫ");
	QWidgetAction* act = new QWidgetAction(m_menuColor);
	act->setDefaultWidget(wgt);
	connect(wgt, SIGNAL(clrButtonClicked(QColor)),
		this, SLOT(setTextColor(QColor)));

	m_menuColor->addAction(act);
	menuBar()->addMenu(m_menuColor);
}
