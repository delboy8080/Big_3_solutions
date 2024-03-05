#pragma once
#include "Structures.h"
class Quiz
{
	string title;
	Question * questions;
	int numQuestions;
	int count;
public:
	Quiz(string title, int numQuestions);
	void addQuestion(Question q);
};
