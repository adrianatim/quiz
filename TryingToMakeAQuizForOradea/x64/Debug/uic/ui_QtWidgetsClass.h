/********************************************************************************
** Form generated from reading UI file 'QtWidgetsClass.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGETSCLASS_H
#define UI_QTWIDGETSCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWidgetsClass
{
public:
    QPushButton *CancelButton;
    QPushButton *SubmitButton;
    QPushButton *ButtonA;
    QPushButton *ButtonB;
    QPushButton *ButtonC;
    QPushButton *ButtonD;
    QPushButton *ButtonE;
    QLabel *label;
    QLabel *labelA;
    QLabel *labelB;
    QLabel *labelC;
    QLabel *labelD;
    QLabel *labelE;
    QLabel *questionLabel;
    QPushButton *NextButton;

    void setupUi(QWidget *QtWidgetsClass)
    {
        if (QtWidgetsClass->objectName().isEmpty())
            QtWidgetsClass->setObjectName(QString::fromUtf8("QtWidgetsClass"));
        QtWidgetsClass->resize(696, 575);
        CancelButton = new QPushButton(QtWidgetsClass);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));
        CancelButton->setGeometry(QRect(50, 470, 161, 81));
        SubmitButton = new QPushButton(QtWidgetsClass);
        SubmitButton->setObjectName(QString::fromUtf8("SubmitButton"));
        SubmitButton->setGeometry(QRect(250, 470, 161, 81));
        ButtonA = new QPushButton(QtWidgetsClass);
        ButtonA->setObjectName(QString::fromUtf8("ButtonA"));
        ButtonA->setGeometry(QRect(60, 210, 75, 23));
        ButtonB = new QPushButton(QtWidgetsClass);
        ButtonB->setObjectName(QString::fromUtf8("ButtonB"));
        ButtonB->setGeometry(QRect(60, 250, 75, 23));
        ButtonC = new QPushButton(QtWidgetsClass);
        ButtonC->setObjectName(QString::fromUtf8("ButtonC"));
        ButtonC->setGeometry(QRect(60, 300, 75, 23));
        ButtonD = new QPushButton(QtWidgetsClass);
        ButtonD->setObjectName(QString::fromUtf8("ButtonD"));
        ButtonD->setGeometry(QRect(60, 350, 75, 23));
        ButtonE = new QPushButton(QtWidgetsClass);
        ButtonE->setObjectName(QString::fromUtf8("ButtonE"));
        ButtonE->setGeometry(QRect(60, 400, 75, 23));
        label = new QLabel(QtWidgetsClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 20, 211, 31));
        labelA = new QLabel(QtWidgetsClass);
        labelA->setObjectName(QString::fromUtf8("labelA"));
        labelA->setGeometry(QRect(180, 210, 451, 16));
        labelB = new QLabel(QtWidgetsClass);
        labelB->setObjectName(QString::fromUtf8("labelB"));
        labelB->setGeometry(QRect(180, 250, 431, 16));
        labelC = new QLabel(QtWidgetsClass);
        labelC->setObjectName(QString::fromUtf8("labelC"));
        labelC->setGeometry(QRect(180, 300, 451, 16));
        labelD = new QLabel(QtWidgetsClass);
        labelD->setObjectName(QString::fromUtf8("labelD"));
        labelD->setGeometry(QRect(180, 350, 451, 16));
        labelE = new QLabel(QtWidgetsClass);
        labelE->setObjectName(QString::fromUtf8("labelE"));
        labelE->setGeometry(QRect(180, 400, 461, 16));
        questionLabel = new QLabel(QtWidgetsClass);
        questionLabel->setObjectName(QString::fromUtf8("questionLabel"));
        questionLabel->setGeometry(QRect(80, 70, 561, 61));
        NextButton = new QPushButton(QtWidgetsClass);
        NextButton->setObjectName(QString::fromUtf8("NextButton"));
        NextButton->setGeometry(QRect(460, 470, 161, 81));

        retranslateUi(QtWidgetsClass);

        QMetaObject::connectSlotsByName(QtWidgetsClass);
    } // setupUi

    void retranslateUi(QWidget *QtWidgetsClass)
    {
        QtWidgetsClass->setWindowTitle(QCoreApplication::translate("QtWidgetsClass", "QtWidgetsClass", nullptr));
        CancelButton->setText(QCoreApplication::translate("QtWidgetsClass", "CANCEL", nullptr));
        SubmitButton->setText(QCoreApplication::translate("QtWidgetsClass", "SUBMIT", nullptr));
        ButtonA->setText(QCoreApplication::translate("QtWidgetsClass", "A", nullptr));
        ButtonB->setText(QCoreApplication::translate("QtWidgetsClass", "B", nullptr));
        ButtonC->setText(QCoreApplication::translate("QtWidgetsClass", "C", nullptr));
        ButtonD->setText(QCoreApplication::translate("QtWidgetsClass", "D", nullptr));
        ButtonE->setText(QCoreApplication::translate("QtWidgetsClass", "E", nullptr));
        label->setText(QCoreApplication::translate("QtWidgetsClass", "qlabel", nullptr));
        labelA->setText(QCoreApplication::translate("QtWidgetsClass", "TextLabel", nullptr));
        labelB->setText(QCoreApplication::translate("QtWidgetsClass", "TextLabel", nullptr));
        labelC->setText(QCoreApplication::translate("QtWidgetsClass", "TextLabel", nullptr));
        labelD->setText(QCoreApplication::translate("QtWidgetsClass", "TextLabel", nullptr));
        labelE->setText(QCoreApplication::translate("QtWidgetsClass", "TextLabel", nullptr));
        questionLabel->setText(QCoreApplication::translate("QtWidgetsClass", "                                                              TEEEEEEXT", nullptr));
        NextButton->setText(QCoreApplication::translate("QtWidgetsClass", "Next Question", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsClass: public Ui_QtWidgetsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETSCLASS_H
