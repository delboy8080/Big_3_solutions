#pragma once
#include "Structures.h"
class Student
{
	Course *course;
	string name;
public:
	Student(Course* c, string name = "Default");
	void setCourse(Course *c);
	Course* getCourse();
	void setName(string n);
	string getName() ;
    Student(Student &other);
    Student& operator=(Student &other);
	~Student();
};

