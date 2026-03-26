#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include "Student.h"

class SystemManger
{
private:
	std::vector<Student> students;
public:
	// ///////// methods and operaions prototypes ///////////
	// 1 to add new student
	void addStudent();

	// 2 to remove students
	void removeStudent();

	// 3 to find student by id
	void searchStudent();

	// 4 to show all students
	void displayAllStudents();

	// 5 enroll studnets in courses
	void enrollStudent();

	// 6 show students courses
	void showCourses();

	// 7 sort students by gpa
	void sortStudentsByGpa();

	// nav menue contain all choices
	void showMenu();

};

