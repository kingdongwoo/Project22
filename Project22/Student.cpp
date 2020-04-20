#include "Student.h"

void Student::setGPA(float Gpa)
{
	gpa = Gpa;
}

void Student::setName(string str)
{
	name = str;
}

string Student::getName()
{
	return name;
}

float Student::getGpa()
{
	return gpa;
}

Student::Student()
{
}

Student::~Student()
{
}
