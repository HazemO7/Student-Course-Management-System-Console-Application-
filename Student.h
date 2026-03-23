#pragma once
#include "Person.h"
#include <string>
#include <vector>

class Student:public Person
{
private:
	// atrriputes
	double gpa;
	std::vector<std::string> courses;

public:
	// constracotr default and prams
	Student();
	Student(int sd, std::string sn, double g);
	// enrollment method to allow student enrolle in courses
	void enrollCourse(std::string coursName);
	// print method ot print all courses student enroll it;
    void printCourses();
	// set fucntion prototype
	void set_gpa(double g);
	// get function prototype
	double get_gpa();
};





