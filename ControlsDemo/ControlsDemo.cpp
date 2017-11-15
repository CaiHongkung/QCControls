#include "ControlsDemo.h"
#include"qdebug.h"
#include "qstringlist.h"
#include "connection.h"

ControlsDemo::ControlsDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setListModel();
	connect(ui.pushButton, SIGNAL(clicked()), ui.pushButton, SIGNAL(myClick()));
	connect(ui.pushButton, SIGNAL(myClick()), this, SLOT(btnClick()));
}
ControlsDemo::ControlsDemo(QApplication &app, QWidget *parent)
: QMainWindow(parent)
{
	ui.setupUi(this);
	setListModel();
	setTableModel();
	connect(ui.pushButton, SIGNAL(clicked()), ui.pushButton, SIGNAL(myClick()));
	connect(ui.pushButton, SIGNAL(myClick()), this, SLOT(btnClick()));
	setTreeModel(app);
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
	ui.comboBox->setMaxVisibleItems(6); //最大显示item数目
	ui.comboBox->setView(combolistView);

}
void ControlsDemo::setTableModel()
{
	if (!createConnection())
		return;

	editableTableModel.setQuery("select * from person");
	editableTableModel.setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
	editableTableModel.setHeaderData(0, Qt::Horizontal, QObject::tr("First name"));
	editableTableModel.setHeaderData(0, Qt::Horizontal, QObject::tr("Last name"));

	ui.tableView->setModel(&editableTableModel);
}

void ControlsDemo::setTreeModel(QApplication &app)
{
	QCommandLineParser parser;
	QCommandLineOption dontUseCustomDirectoryIconsOption("c", "Set QFileIconProvider::DontUseCustomDirectoryIcons");
	parser.addOption(dontUseCustomDirectoryIconsOption);

	parser.addPositionalArgument("directory", "The directory to start in.");
	parser.process(app);

	const QString rootPath = parser.positionalArguments().isEmpty()
		? QString() : parser.positionalArguments().first();
	systemModel.setRootPath("");
	if (parser.isSet(dontUseCustomDirectoryIconsOption))
		systemModel.iconProvider()->setOptions(QFileIconProvider::DontUseCustomDirectoryIcons);
	ui.treeView->setModel(&systemModel);

	if (!rootPath.isEmpty())
	{
		const QModelIndex rootIndex = systemModel.index(QDir::cleanPath(rootPath));
		if (rootIndex.isValid())
		{
			ui.treeView->setRootIndex(rootIndex);
		}
	}

}