#pragma once
#include <iostream>
using namespace std;

class Student {
private:
		string name; 
		float gpa;
public:
		void setGPA(float Gpa);
		void setName(string str);
		string getName();
		float getGpa();
		Student();
		~Student();
};
