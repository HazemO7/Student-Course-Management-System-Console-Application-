#pragma once
#include <vector>
#include <iostream>
#include "Student.h"

class SystemManger
{
private:
	std::vector<Student> students;
public:
	// methods and operaions prototypes
	void addStudent();
	void displayAllStudents();
	void showMenu();

};

