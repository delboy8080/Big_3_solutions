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

Quiz::Quiz(Quiz &other)
{
    this->title = other.title;
    this->numQuestions= other.numQuestions;
    this->count= other.count;
    this->questions = new Question[this->numQuestions];
    for(int i = 0; i < count;i++)
    {
        this->questions[i] = other.questions[i];
    }
}
Quiz& Quiz::operator=(Quiz& other)
{
    if(&other == this)
    {
        return *this;
    }
    this->title = other.title;
    this->numQuestions= other.numQuestions;
    this->count= other.count;
    if(this->questions!=nullptr)
    {
        delete[] questions;
    }
    this->questions = new Question[this->numQuestions];
    for(int i = 0; i < count;i++)
    {
        this->questions[i] = other.questions[i];
    }
    return *this;
}
Quiz::~Quiz()
{
    delete[] questions;
}