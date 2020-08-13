#pragma once

#include <iostream>
#include <string>

using namespace std;

class Question
{
private:
	string category;
	string question;
	string A;
	string B;
	string C;
	string D;
	string E;
	string correctAnswers;
	//string wrongAnswers;

public:
	
	Question() {}

	Question(const string& category,const string& question,const string& A,const string& B,const string& C,const string& D,const string& E,const string& correctAnswers /*string wrongAnswers*/)
	{
		this->category = category;
		this->question = question;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
		this->E = E;
		this->correctAnswers = correctAnswers;
		//this->wrongAnswers = wrongAnswers;
	}

	string get_category() const
	{
		return category;
	}

	string get_question() const
	{
		return question;
	}

	string get_A() const
	{
		return A;
	}

	string get_B() const
	{
		return B;
	}

	string get_C() const
	{
		return C;
	}

	string get_D() const
	{
		return D;
	}

	string get_E() const
	{
		return E;
	}

	string get_correctAnswers() const
	{
		return correctAnswers;
	}
};