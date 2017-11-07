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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcbutton.h"

QT_BEGIN_NAMESPACE

class Ui_ControlsDemoClass
{
public:
    QWidget *centralWidget;
    QCButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ControlsDemoClass)
    {
        if (ControlsDemoClass->objectName().isEmpty())
            ControlsDemoClass->setObjectName(QStringLiteral("ControlsDemoClass"));
        ControlsDemoClass->resize(600, 400);
        centralWidget = new QWidget(ControlsDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QCButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 50, 131, 71));
        ControlsDemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ControlsDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
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
    } // retranslateUi

};

namespace Ui {
    class ControlsDemoClass: public Ui_ControlsDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLSDEMO_H
