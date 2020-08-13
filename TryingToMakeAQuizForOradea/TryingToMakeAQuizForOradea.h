#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TryingToMakeAQuizForOradea.h"

class TryingToMakeAQuizForOradea : public QMainWindow
{
    Q_OBJECT

public:
    TryingToMakeAQuizForOradea(QWidget *parent = Q_NULLPTR);

private:
    Ui::TryingToMakeAQuizForOradeaClass ui;
};
