#pragma once
#include "Person.h"
#include <string>

class Student:public Person
{
private:
	double gpa;
public:
	Student();
	Student(int sd, std::string sn, double g);
	
	void set_gpa(double g);
	

	double get_gpa();
};





