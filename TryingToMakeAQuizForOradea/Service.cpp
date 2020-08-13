#include "Service.h"

vector <Question> Service::srv_getQuestions()
{
	vector<Question> aux = this->repo.getQuestions();
	return aux;
}

void Service::srv_addQuestion(const string& category, const string& question, const string& A, const string& B, const string& C, const string& D, const string& E, const string& correctAnswers)
{
	Question q{category, question, A, B, C, D, E, correctAnswers};
	this->repo.addQuestion(q);
}