#include "Quiz.h"

Quiz::Quiz(string title, int numQuestions)
{
    this->title = title;
    questions = new Question[numQuestions];
    this->numQuestions = numQuestions;
    count = 0;
}

void Quiz::addQuestion(Question q)
{
    questions[count] = q;
    count++;
}