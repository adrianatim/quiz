#pragma once

#include "Entity.h"
#include <vector>

class Repository
{
private:
	vector <Question> questions;

public:
	Repository();
	void addQuestion(Question& q);
	vector<Question> getQuestions();
};