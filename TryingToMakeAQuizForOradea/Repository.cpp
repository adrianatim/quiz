#include "Repository.h"

Repository::Repository() {}

void Repository::addQuestion(Question& q)
{
	this->questions.push_back(q);

}

vector<Question> Repository::getQuestions()
{
	return this->questions;
}