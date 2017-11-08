#include "ControlsDemo.h"

ControlsDemo::ControlsDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setListModel();
	connect(ui.pushButton, SIGNAL(clicked()), ui.pushButton, SIGNAL(myClick()));
	connect(ui.pushButton, SIGNAL(myClick()), this, SLOT(btnClick()));
}
void ControlsDemo::btnClick(){
	qDebug() << "button click!" << endl;
}
void ControlsDemo::setListModel()
{
	qDebug() << "set ListView Model!" << endl;
	/*ListView ����*/
	listmodel = new QStringListModel();
	QStringList stringList;
	stringList << "item1" << "item2" << "item3" << "item4" << "item5" << "item6" << "item7" << "item8";
	listmodel->setStringList(stringList);
	ui.listView->setModel(listmodel);
	/*ComboBox ����*/
	qDebug() << "set ComboBox Model!" << endl;

	combolistView = new QCListView(this);
	ui.comboBox->setEditable(false);
	ui.comboBox->setModel(listmodel);
	ui.comboBox->setMaxVisibleItems(4); //�����ʾitem��Ŀ
	ui.comboBox->setView(combolistView);
}