/********************************************************************************
** Form generated from reading UI file 'ControlsDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLSDEMO_H
#define UI_CONTROLSDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "qcbutton.h"
#include "qccheckbox.h"
#include "qccombobox.h"
#include "qcdial.h"
#include "qclistview.h"
#include "qcratiobutton.h"
#include "qctableview.h"
#include "qctabwidget.h"
#include "qctreeview.h"

QT_BEGIN_NAMESPACE

class Ui_ControlsDemoClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_6;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QFormLayout *formLayout;
    QGridLayout *gridLayout;
    QCButton *pushButton;
    QCCheckBox *checkBox;
    QCRatioButton *radioButton;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QCTreeView *treeView;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QCTableView *tableView;
    QWidget *tab_3;
    QGridLayout *gridLayout_4;
    QCListView *listView;
    QWidget *tab_5;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_5;
    QPlainTextEdit *plainTextEdit;
    QTextEdit *textEdit;
    QFontComboBox *fontComboBox;
    QCComboBox *comboBox;
    QSpinBox *spinBox;
    QLineEdit *lineEdit;
    QCComboBox *comboBox_style;
    QWidget *tab_6;
    QGridLayout *gridLayout_7;
    QCDial *dial;
    QMenuBar *menuBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents_2;
    QGridLayout *gridLayout_9;
    QCTabWidget *tabWidget_3;
    QWidget *tab_11;
    QWidget *tab_12;
    QWidget *tab_13;
    QLabel *label_2;
    QWidget *tab_14;

    void setupUi(QMainWindow *ControlsDemoClass)
    {
        if (ControlsDemoClass->objectName().isEmpty())
            ControlsDemoClass->setObjectName(QStringLiteral("ControlsDemoClass"));
        ControlsDemoClass->resize(984, 751);
        centralWidget = new QWidget(ControlsDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_6 = new QGridLayout(centralWidget);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QLatin1String("QTabWidget::pane{\n"
"background:#1e3c6e;border-left:1px solid gray;border-right:1px solid gray;\n"
"border-bottom:1px solid gray\n"
"}\n"
"QTabWidget::tab-bar{\n"
"background:#4e6c9e;left:5px;min-height:30px;\n"
"}\n"
"QTabBar::tab{\n"
"background:#2e4c7e;padding:3px;color:white;border: 1px solid #C4C4C3;\n"
"border-bottom-color: #1e3c6e; /* same as the pane color */\n"
"border-top-left-radius: 4px;\n"
"border-top-right-radius: 4px;\n"
"min-width: 8ex;min-height: 5ex;\n"
"padding: 2px;\n"
"}\n"
"QTabBar::tab:selected,QTabWidget::tab:hover{\n"
"background:#1e3c6e\n"
"}\n"
"QTabBar::tab:selected{\n"
"border-color:#9b9b9b;border-bottom-color:#1e3c6e\n"
"}\n"
"QTabBar::tab:!selected{\n"
"margin-top:2px\n"
"}\n"
"QTabBar::tab:selected {\n"
"margin-left: -4px;\n"
"margin-right: -4px;\n"
"}\n"
"QTabBar::tab:first:selected {\n"
"margin-left: 0; /* the first selected tab has nothing to overlap with on the left */\n"
"}\n"
"QTabBar::tab:last:selected{\n"
"margin-right: 0; /* the last selected tab has nothing to overlap"
                        " with on the right */\n"
"}\n"
"QTabBar::tab:only-one {\n"
"margin: 0; /* if there is only one tab, we don't want overlapping margins */\n"
"}\n"
"\n"
""));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        formLayout = new QFormLayout(tab_4);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton = new QCButton(tab_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(9);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(140, 60));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        checkBox = new QCCheckBox(tab_4);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy1);
        checkBox->setMinimumSize(QSize(200, 30));

        gridLayout->addWidget(checkBox, 0, 1, 1, 1);

        radioButton = new QCRatioButton(tab_4);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(9);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(radioButton->sizePolicy().hasHeightForWidth());
        radioButton->setSizePolicy(sizePolicy2);
        radioButton->setMinimumSize(QSize(200, 30));

        gridLayout->addWidget(radioButton, 0, 2, 1, 1);


        formLayout->setLayout(0, QFormLayout::LabelRole, gridLayout);

        tabWidget->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        treeView = new QCTreeView(tab);
        treeView->setObjectName(QStringLiteral("treeView"));

        gridLayout_2->addWidget(treeView, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableView = new QCTableView(tab_2);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout_3->addWidget(tableView, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        listView = new QCListView(tab_3);
        listView->setObjectName(QStringLiteral("listView"));

        gridLayout_4->addWidget(listView, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        layoutWidget = new QWidget(tab_5);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(21, 21, 616, 311));
        gridLayout_5 = new QGridLayout(layoutWidget);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        plainTextEdit = new QPlainTextEdit(layoutWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout_5->addWidget(plainTextEdit, 4, 1, 1, 1);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout_5->addWidget(textEdit, 4, 2, 1, 1);

        fontComboBox = new QFontComboBox(layoutWidget);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(fontComboBox->sizePolicy().hasHeightForWidth());
        fontComboBox->setSizePolicy(sizePolicy3);
        fontComboBox->setMinimumSize(QSize(200, 30));
        fontComboBox->setStyleSheet(QLatin1String("QFontComboBox{background:#1e3c6e;color:white;border:2px solid gray;border-radius:3px}\n"
"QFontComboBox::editable{background:#23b8ff;}\n"
"QFontComboBox::drop-down{border-radius:3px;min-width:30px;border-image:url(:/ControlsDemo/Resources/pics/DownArrow.bmp);}\n"
"QFontComboBox::drop-down:pressed{position:relative;top:1px;left:1px}\n"
"QFontComboBox::drop-down:on {top: 1px;left: 1px}\n"
"QListView{color:white;outline:0px;background: #1e3c6e}\n"
"QListView::item{color:white;min-height:30px;border-top:1px solid #63709c;}\n"
"QListView::item:selected{color:red;background:#295dab;}\n"
"QListView::item:hover{background:#295dab;}\n"
"QScrollBar::vertical{min-width:24px;min-height:80px;background:#1e3c6e;margin:24px 0 24px 0;}\n"
"QScrollBar::handle:vertical{margin:2px;min-height:50px;background:#295dab;border-radius:5px}\n"
"QScrollBar::handle:vertical:hover{background:#125ddb}\n"
"QScrollBar::handle:vertical:pressed{background:#125ddb}\n"
"QScrollBar::sub-line:vertical{border-image:url(:/ControlsDemo/Resources/pics"
                        "/listUpArrow.png);height:24px;subcontrol-position:top;subcontrol-origin:margin}\n"
"QScrollBar::add-line:vertical{border-image:url(:/ControlsDemo/Resources/pics/listDownArrow.png);height:24px;subcontrol-position:bottom;subcontrol-origin:margin}\n"
"QScrollBar::sub-page:vertical{background:#1e3c6e;}\n"
"QScrollBar::add-page:vertical{background:#1e3c6e;}\n"
"QScrollBar::horizontal{min-width:50px;min-height:24px;background:#1e3c6e;margin:0px 24px 0 24px;}\n"
"QScrollBar::handle:horizontal{margin:2px;height:24px;background:#295dabaa;border-radius:5px}\n"
"QScrollBar::handle:horizontal:hover{background:#295dab88}\n"
"QScrollBar::handle:horizontal:pressed{background:#295dabaa}\n"
"QScrollBar::sub-line:horizontal{border-image:url(:/ControlsDemo/Resources/pics/listLeftArrow.png);width:24px;subcontrol-position:left;subcontrol-origin:margin}\n"
"QScrollBar::add-line:horizontal{border-image:url(:/ControlsDemo/Resources/pics/listRightArrow.png);width:24px;subcontrol-position:right;subcontrol-origin:margin}\n"
"QScrollBar:"
                        ":sub-page:horizontal{background:#1e3c6e;}\n"
"QScrollBar::add-page:horizontal{background:#1e3c6e;}\n"
""));

        gridLayout_5->addWidget(fontComboBox, 0, 2, 1, 1);

        comboBox = new QCComboBox(layoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        sizePolicy3.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy3);
        comboBox->setMinimumSize(QSize(150, 30));

        gridLayout_5->addWidget(comboBox, 0, 0, 1, 2);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimumSize(QSize(200, 40));
        spinBox->setStyleSheet(QLatin1String("QSpinBox{font:bold 19px;background:#1e3c6e;color:white;border:2px solid gray;border-radius:3px;padding-right:15px;selection-background-color: red;}\n"
"QSpinBox::down-button{border-radius:3px;min-width:30px;border-image:url(:/ControlsDemo/Resources/pics/DownArrow.bmp);}\n"
"QSpinBox::down-button:pressed{position:relative;top:1px;left:1px}\n"
"QSpinBox::up-button{border-radius:3px;min-width:30px;border-image:url(:/ControlsDemo/Resources/pics/UpArrow.bmp);}\n"
"QSpinBox::up-button:pressed{position:relative;top:1px;left:1px}\n"
""));

        gridLayout_5->addWidget(spinBox, 3, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(200, 40));
        lineEdit->setStyleSheet(QLatin1String("QLineEdit{font:bold 19px;background:#1e3c6e;color:white;border:2px solid gray;border-radius:3px;}\n"
""));

        gridLayout_5->addWidget(lineEdit, 3, 1, 1, 1);

        comboBox_style = new QCComboBox(layoutWidget);
        comboBox_style->setObjectName(QStringLiteral("comboBox_style"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(comboBox_style->sizePolicy().hasHeightForWidth());
        comboBox_style->setSizePolicy(sizePolicy4);
        comboBox_style->setMinimumSize(QSize(0, 40));

        gridLayout_5->addWidget(comboBox_style, 3, 2, 1, 1);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        gridLayout_7 = new QGridLayout(tab_6);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        dial = new QCDial(tab_6);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setStyleSheet(QLatin1String("border-image: url(:/ControlsDemo/Resources/pics/dialBg.png);\n"
"image: url(:/ControlsDemo/Resources/pics/dial.png);\n"
"background-image: url(:/ControlsDemo/Resources/pics/dial.png);"));

        gridLayout_7->addWidget(dial, 0, 0, 1, 1);

        tabWidget->addTab(tab_6, QString());

        gridLayout_6->addWidget(tabWidget, 1, 0, 1, 1);

        ControlsDemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ControlsDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 984, 26));
        ControlsDemoClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(ControlsDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ControlsDemoClass->setStatusBar(statusBar);
        dockWidget = new QDockWidget(ControlsDemoClass);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        gridLayout_9 = new QGridLayout(dockWidgetContents_2);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        tabWidget_3 = new QCTabWidget(dockWidgetContents_2);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setStyleSheet(QStringLiteral(""));
        tabWidget_3->setTabPosition(QTabWidget::West);
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        tab_11->setStyleSheet(QStringLiteral(""));
        tabWidget_3->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QStringLiteral("tab_12"));
        tabWidget_3->addTab(tab_12, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName(QStringLiteral("tab_13"));
        tab_13->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(tab_13);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 72, 15));
        tabWidget_3->addTab(tab_13, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName(QStringLiteral("tab_14"));
        tabWidget_3->addTab(tab_14, QString());

        gridLayout_9->addWidget(tabWidget_3, 0, 0, 1, 1);

        dockWidget->setWidget(dockWidgetContents_2);
        ControlsDemoClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        retranslateUi(ControlsDemoClass);

        tabWidget->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(ControlsDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *ControlsDemoClass)
    {
        ControlsDemoClass->setWindowTitle(QApplication::translate("ControlsDemoClass", "ControlsDemo", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ControlsDemoClass", "PushButton", Q_NULLPTR));
        checkBox->setText(QApplication::translate("ControlsDemoClass", "CheckBox", Q_NULLPTR));
        radioButton->setText(QApplication::translate("ControlsDemoClass", "RadioButton", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("ControlsDemoClass", "Simple Controls", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ControlsDemoClass", "treeView", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ControlsDemoClass", "tableView", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ControlsDemoClass", "listView", Q_NULLPTR));
        comboBox_style->clear();
        comboBox_style->insertItems(0, QStringList()
         << QApplication::translate("ControlsDemoClass", "Normal", Q_NULLPTR)
         << QApplication::translate("ControlsDemoClass", "Dark", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("ControlsDemoClass", "Input Widgets", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("ControlsDemoClass", "Page", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_11), QApplication::translate("ControlsDemoClass", "Tab 1", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_12), QApplication::translate("ControlsDemoClass", "Tab 2", Q_NULLPTR));
        label_2->setText(QApplication::translate("ControlsDemoClass", "TextLabel", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_13), QApplication::translate("ControlsDemoClass", "Tab3", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_14), QApplication::translate("ControlsDemoClass", "Tab 4", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ControlsDemoClass: public Ui_ControlsDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLSDEMO_H
