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
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcbutton.h"
#include "qccheckbox.h"
#include "qccombobox.h"
#include "qclistview.h"
#include "qcratiobutton.h"
#include "qctableview.h"
#include "qctreeview.h"

QT_BEGIN_NAMESPACE

class Ui_ControlsDemoClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_6;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QCButton *pushButton;
    QCCheckBox *checkBox;
    QCRatioButton *radioButton;
    QFontComboBox *fontComboBox;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QPlainTextEdit *plainTextEdit;
    QSpinBox *spinBox;
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
    QCComboBox *comboBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ControlsDemoClass)
    {
        if (ControlsDemoClass->objectName().isEmpty())
            ControlsDemoClass->setObjectName(QStringLiteral("ControlsDemoClass"));
        ControlsDemoClass->resize(1177, 825);
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
        layoutWidget = new QWidget(tab_4);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(12, 50, 556, 62));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QCButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(9);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(140, 60));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        checkBox = new QCCheckBox(layoutWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy1);
        checkBox->setMinimumSize(QSize(200, 30));

        gridLayout->addWidget(checkBox, 0, 1, 1, 1);

        radioButton = new QCRatioButton(layoutWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        sizePolicy.setHeightForWidth(radioButton->sizePolicy().hasHeightForWidth());
        radioButton->setSizePolicy(sizePolicy);
        radioButton->setMinimumSize(QSize(200, 30));

        gridLayout->addWidget(radioButton, 0, 2, 1, 1);

        fontComboBox = new QFontComboBox(tab_4);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        fontComboBox->setGeometry(QRect(30, 180, 211, 31));
        lineEdit = new QLineEdit(tab_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 240, 211, 31));
        textEdit = new QTextEdit(tab_4);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(30, 290, 211, 87));
        plainTextEdit = new QPlainTextEdit(tab_4);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(30, 390, 211, 87));
        spinBox = new QSpinBox(tab_4);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(260, 180, 181, 31));
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
        comboBox = new QCComboBox(tab_5);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(20, 20, 371, 41));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy2);
        comboBox->setMinimumSize(QSize(150, 30));
        tabWidget->addTab(tab_5, QString());

        gridLayout_6->addWidget(tabWidget, 0, 0, 1, 1);

        ControlsDemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ControlsDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1177, 26));
        ControlsDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ControlsDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ControlsDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ControlsDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ControlsDemoClass->setStatusBar(statusBar);

        retranslateUi(ControlsDemoClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ControlsDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *ControlsDemoClass)
    {
        ControlsDemoClass->setWindowTitle(QApplication::translate("ControlsDemoClass", "ControlsDemo", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ControlsDemoClass", "PushButton", Q_NULLPTR));
        checkBox->setText(QApplication::translate("ControlsDemoClass", "CheckBox", Q_NULLPTR));
        radioButton->setText(QApplication::translate("ControlsDemoClass", "RadioButton", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("ControlsDemoClass", "Buttons", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ControlsDemoClass", "treeView", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ControlsDemoClass", "tableView", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ControlsDemoClass", "listView", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("ControlsDemoClass", "Input Widgets", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ControlsDemoClass: public Ui_ControlsDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLSDEMO_H
