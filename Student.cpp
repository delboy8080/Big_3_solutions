//
// Created by floodd on 05/03/2024.
//
#include "Student.h"

Student::Student(Course* c, string name)
{
    this->name = name;
    this->course = c;
}
void Student::setCourse(Course *c)
{
    course = c;
}
Course*  Student::getCourse()
{
    return course;
}
void  Student::setName(string n)
{
    name = n;
}
string  Student::getName()
{
    return name;
}