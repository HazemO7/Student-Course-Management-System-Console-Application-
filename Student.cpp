#include "Student.h"


Student::Student() :Person() {
	gpa = 0.0;
}
Student::Student(int sd, std::string sn, double g) :Person(sd, sn) {
	gpa = g;
}



void Student::set_gpa(double g) {
	gpa = g;
}

double Student::get_gpa() {
	return gpa;
}