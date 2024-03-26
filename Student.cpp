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

Student::Student(Student &other)
{
    course = new Course(*other.course);
    this->name = other.name;
}
Student& Student::operator=(Student &other)
{
    if(&other == this){
        return *this;
    }
    if(course !=nullptr)
    {
        course = new Course(*other.course);
    }
    this->name = other.name;
    return *this;
}
Student::~Student()
{
    delete course;
}