#include <iostream>
#include <vector>
#include "School.h"
#include "Student.h"

using namespace std;


int main() {

	School pnu("PNU");
	pnu.addStudent("Kim", 2.7F);
	pnu.addStudent("Hong", 3.5F);
	pnu.addStudent("Lee");
	pnu.addStudent("Joo", 1.5F);
	pnu.print();
	pnu.sort(); 
	cout << "after sort==" << endl;
	pnu.print();
	// descending pnu.print() ;
	School knu("KNU") ;	
	knu.addStudent("Seo", 2.5F) ;
	knu.addStudent("Lee", 3.8F) ;
	knu.print() ;
	Student& lee = pnu.findStudentWithName("Lee");
	lee.setGPA(3.3F);
	lee.setName("Yoon");
	pnu.print();
	knu.addStudent("Hong", 4.3F);
	Student& hong = knu.findStudentWithName("Hong");
	hong.setGPA(3.3F);
	hong.setName("Joon");
	//knu.print();*/
	system("pause");
}
