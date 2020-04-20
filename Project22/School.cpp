#include "School.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include "Student.h"


using namespace std;


void School::sort()
{	
	for (int i = 0; i < students.size() - 1; i++)
	{
		for (int j = i + 1; j < students.size(); j++)
		{
			if ((students[i].getGpa() ) < (students[j].getGpa() ))
			{
				swap(students[i], students[j]);
			}

		}
	}
	
	
}

Student& School::findStudentWithName(string str)
{
	vector<Student>::iterator iter = students.begin();
	for (iter = students.begin(); iter != students.end(); ++iter) {
		if ((iter->getName()) == str) {
			cout << "finding name :" << str << endl;
			return *iter;
		}
	}
	 cout << "error : no name included" << endl;
	
}

void School::print()
{
	cout << schoolName << endl;
	vector<Student>::iterator iter = students.begin();
	for (iter = students.begin(); iter != students.end(); ++iter) {
		cout << "name: " << iter->getName() << endl;
		cout << "GPA: " << iter->getGpa() << endl;
	}
}
void School::addStudent(string str)
{
	Student std;
	std.setName(str);
	std.setGPA(0);
	students.push_back(std);

}

void School::addStudent(string str, float fl)
{
	Student std;
	std.setName(str);
	std.setGPA(fl);
	students.push_back(std);
	
}

School::School(string schoolname)
{
	schoolName = schoolname;
}

School::School()
{
}

School::~School()
{
}
