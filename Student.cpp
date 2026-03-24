#include "Student.h"
#include <iostream>
using namespace std;


//default constrctor
Student::Student() :Person() {
	gpa = 0.0;
}
// prams constractor
Student::Student(int sid, string sn, double g) :Person(sid, sn) {
	gpa = g;
}
// enrollment method to allow student enrolle in courses
void Student::enrollCourse(string coursName) {
	courses.push_back(coursName);
}
// print method-> ot print all courses student enroll it;
void Student::printCourses() {
	if (courses.empty()) {
		cout << "This student has no courses yet";
	}else {
		for (string course: courses) {
			cout << course<<endl;
		}
	}	
};


void Student::set_gpa(double g) {
	gpa = g;
}

double Student::get_gpa() {
	return gpa;
}