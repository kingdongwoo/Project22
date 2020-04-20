#include "Student.h"
#include <iostream>
#include <vector>
#include "string"
#include <algorithm>
using namespace std;


class School {
private: 
	string schoolName;
	vector<Student> students;
public: 
	bool cmp(Student &a, Student &b);
	void sort();
	Student& findStudentWithName(string str);
	void print();
	void addStudent(string str);
	 void addStudent(string str, float fl) ;
	 
	School(string schoolname);
	School();
	~School();

};