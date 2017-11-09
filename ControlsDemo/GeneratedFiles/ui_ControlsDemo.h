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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcbutton.h"
#include "qccheckbox.h"
#include "qccombobox.h"
#include "qclistview.h"
#include "qcratiobutton.h"

QT_BEGIN_NAMESPACE

class Ui_ControlsDemoClass
{
public:
    QWidget *centralWidget;
    QCButton *pushButton;
    QCRatioButton *radioButton;
    QCCheckBox *checkBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QCListView *listView;
    QLabel *label_2;
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
        pushButton = new QCButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 30, 111, 41));
        radioButton = new QCRatioButton(centralWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(40, 90, 115, 31));
        checkBox = new QCCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(40, 130, 131, 31));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(210, 20, 258, 266));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        listView = new QCListView(widget);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout->addWidget(listView);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        comboBox = new QCComboBox(widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout->addWidget(comboBox);

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

        QMetaObject::connectSlotsByName(ControlsDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *ControlsDemoClass)
    {
        ControlsDemoClass->setWindowTitle(QApplication::translate("ControlsDemoClass", "ControlsDemo", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ControlsDemoClass", "PushButton", Q_NULLPTR));
        radioButton->setText(QApplication::translate("ControlsDemoClass", "RadioButton", Q_NULLPTR));
        checkBox->setText(QApplication::translate("ControlsDemoClass", "CheckBox", Q_NULLPTR));
        label->setText(QApplication::translate("ControlsDemoClass", "ListView", Q_NULLPTR));
        label_2->setText(QApplication::translate("ControlsDemoClass", "ComboBox", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ControlsDemoClass: public Ui_ControlsDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLSDEMO_H
