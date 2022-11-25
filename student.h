#pragma once
#include "persoana.h"
class Student :public Persoana {
	int grupa;
	
public:
	Student(char*, char*, Data* dn, int gr);
	Student(const Student& src);
	Student& operator=(const Student& src);
	void afisare();
	void sortare(Student std[]);
};