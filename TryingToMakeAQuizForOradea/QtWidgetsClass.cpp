#include "QtWidgetsClass.h"

QtWidgetsClass::QtWidgetsClass(Service& s, QWidget* parent)
	: QWidget(parent), s{ s }
{
	ui.setupUi(this);
	this->questions = this->s.srv_getQuestions();
	this->ui.ButtonA->setStyleSheet("background-color:white");
	this->ui.ButtonB->setStyleSheet("background-color:white");
	this->ui.ButtonC->setStyleSheet("background-color:white");
	this->ui.ButtonD->setStyleSheet("background-color:white");
	this->ui.ButtonE->setStyleSheet("background-color:white");
	this->populateList();
	this->connectSignasAndSlots();
}

QtWidgetsClass::~QtWidgetsClass()
{
}

void QtWidgetsClass::connectSignasAndSlots()
{
	QObject::connect(this->ui.CancelButton, &QPushButton::clicked, this, &QtWidgetsClass::cancel);
	QObject::connect(this->ui.NextButton, &QPushButton::clicked, this, &QtWidgetsClass::next);
	QObject::connect(this->ui.ButtonA, &QPushButton::clicked, this, &QtWidgetsClass::ButtonA);
	QObject::connect(this->ui.ButtonB, &QPushButton::clicked, this, &QtWidgetsClass::ButtonB);
	QObject::connect(this->ui.ButtonC, &QPushButton::clicked, this, &QtWidgetsClass::ButtonC);
	QObject::connect(this->ui.ButtonD, &QPushButton::clicked, this, &QtWidgetsClass::ButtonD);
	QObject::connect(this->ui.ButtonE, &QPushButton::clicked, this, &QtWidgetsClass::ButtonE);
}

void QtWidgetsClass::cancel()
{
	this->A = 0;
	this->B = 0;
	this->C = 0;
	this->D = 0;
	this->E = 0;
	this->ui.ButtonA->setStyleSheet("background-color:white");
	this->ui.ButtonB->setStyleSheet("background-color:white");
	this->ui.ButtonC->setStyleSheet("background-color:white");
	this->ui.ButtonD->setStyleSheet("background-color:white");
	this->ui.ButtonE->setStyleSheet("background-color:white");
	
}

void QtWidgetsClass::populateList()
{

	Question firstQuestion = this->questions.at(0);
	ui.label->setText(QString::fromStdString(firstQuestion.get_category()));
	ui.questionLabel->setText(QString::fromStdString(firstQuestion.get_question()));
	ui.labelA->setText(QString::fromStdString(firstQuestion.get_A()));
	ui.labelB->setText(QString::fromStdString(firstQuestion.get_B()));
	ui.labelC->setText(QString::fromStdString(firstQuestion.get_C()));
	ui.labelD->setText(QString::fromStdString(firstQuestion.get_D()));
	ui.labelE->setText(QString::fromStdString(firstQuestion.get_E()));
	
}

void QtWidgetsClass::ButtonA()
{
	this->A = 1;
	this->ui.ButtonA->setStyleSheet("background-color:lightGreen");
}

void QtWidgetsClass::ButtonB()
{
	this->B = 1;
	this->ui.ButtonB->setStyleSheet("background-color:lightGreen");
}
void QtWidgetsClass::ButtonC()
{
	this->C = 1;
	this->ui.ButtonC->setStyleSheet("background-color:lightGreen");
}

void QtWidgetsClass::ButtonD()
{
	this->D = 1;
	this->ui.ButtonD->setStyleSheet("background-color:lightGreen");
}

void QtWidgetsClass::ButtonE()
{
	this->E = 1;
	this->ui.ButtonE->setStyleSheet("background-color:lightGreen");
}

void QtWidgetsClass::next()
{
	this->cancel();
	this->contor += 1;
	Question question = this->questions.at(this->contor);
	ui.label->textFormat();
	ui.label->setText(QString::fromStdString(question.get_category()));
	ui.questionLabel->setText(QString::fromStdString(question.get_question()));
	ui.labelA->setText(QString::fromStdString(question.get_A()));
	ui.labelB->setText(QString::fromStdString(question.get_B()));
	ui.labelC->setText(QString::fromStdString(question.get_C()));
	ui.labelD->setText(QString::fromStdString(question.get_D()));
	ui.labelE->setText(QString::fromStdString(question.get_E()));
}

