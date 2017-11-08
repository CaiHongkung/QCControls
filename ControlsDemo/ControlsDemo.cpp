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
	/*ListView 设置*/
	listmodel = new QStringListModel();
	QStringList stringList;
	stringList << "item1" << "item2" << "item3" << "item4" << "item5" << "item6" << "item7" << "item8";
	listmodel->setStringList(stringList);
	ui.listView->setModel(listmodel);
	/*ComboBox 设置*/
	qDebug() << "set ComboBox Model!" << endl;

	combolistView = new QCListView(this);
	ui.comboBox->setEditable(false);
	ui.comboBox->setModel(listmodel);
	ui.comboBox->setMaxVisibleItems(4); //最大显示item数目
	ui.comboBox->setView(combolistView);
}