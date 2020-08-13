#pragma once

#include <QWidget>
#include "Service.h"
#include "ui_QtWidgetsClass.h"
#include "qcheckbox.h"
#include <qmessagebox.h>
#include <qpushbutton.h>
#include "QPushButton"
#include "QLabel"
#include "QLineEdit"

class QtWidgetsClass : public QWidget
{
	Q_OBJECT

public:
	QtWidgetsClass(Service& s, QWidget *parent = Q_NULLPTR);
	~QtWidgetsClass();

private:
	Service& s;
	int A=0, B=0, C=0, D=0, E=0;
	int contor = 0;
	vector<Question> questions;
	Ui::QtWidgetsClass ui;

public:
	void connectSignasAndSlots();
	void populateList();
	void cancel();
	void submit();
	void next();
	void ButtonA();
	void ButtonB();
	void ButtonC();
	void ButtonD();
	void ButtonE();

};
