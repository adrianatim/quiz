/********************************************************************************
** Form generated from reading UI file 'TryingToMakeAQuizForOradea.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRYINGTOMAKEAQUIZFORORADEA_H
#define UI_TRYINGTOMAKEAQUIZFORORADEA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TryingToMakeAQuizForOradeaClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TryingToMakeAQuizForOradeaClass)
    {
        if (TryingToMakeAQuizForOradeaClass->objectName().isEmpty())
            TryingToMakeAQuizForOradeaClass->setObjectName(QString::fromUtf8("TryingToMakeAQuizForOradeaClass"));
        TryingToMakeAQuizForOradeaClass->resize(600, 400);
        menuBar = new QMenuBar(TryingToMakeAQuizForOradeaClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        TryingToMakeAQuizForOradeaClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TryingToMakeAQuizForOradeaClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TryingToMakeAQuizForOradeaClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(TryingToMakeAQuizForOradeaClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        TryingToMakeAQuizForOradeaClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TryingToMakeAQuizForOradeaClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TryingToMakeAQuizForOradeaClass->setStatusBar(statusBar);

        retranslateUi(TryingToMakeAQuizForOradeaClass);

        QMetaObject::connectSlotsByName(TryingToMakeAQuizForOradeaClass);
    } // setupUi

    void retranslateUi(QMainWindow *TryingToMakeAQuizForOradeaClass)
    {
        TryingToMakeAQuizForOradeaClass->setWindowTitle(QCoreApplication::translate("TryingToMakeAQuizForOradeaClass", "TryingToMakeAQuizForOradea", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TryingToMakeAQuizForOradeaClass: public Ui_TryingToMakeAQuizForOradeaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRYINGTOMAKEAQUIZFORORADEA_H
