#pragma once

#include "Repository.h"

class Service
{
private:
	Repository& repo;

public:
	Service(Repository& r) : repo{ r } {};
	vector<Question> srv_getQuestions();
	void srv_addQuestion(const string& category, const string& question, const string& A, const string& B, const string& C, const string& D, const string& E, const string& correctAnswers);
};