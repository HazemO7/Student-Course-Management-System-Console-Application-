#include "SystemManger.h"
using namespace std;

// 1 add student implemntaion
void SystemManger::addStudent() {
	int id;
	string name;
	double gpa;

	cout << "Enter Student Id: ";
	cin >> id;
	cout << "Enter Student Name: ";
	cin.ignore();
	getline(cin, name);
	cout << "Enter Student GPA: ";
	cin >> gpa;

	Student newStudent(id, name, gpa);
	students.push_back(newStudent);

	cout << "Student added successfully" << endl;
}

// 2 remove student implemntaion
void SystemManger::removeStudent() {
    int id ;
    cout << "Enter the Student Id you want to remove: ";
    cin >> id;
    for (int i = 0; i < students.size(); i++) {
        if (id == students[i].get_id()) {
            students.erase(students.begin() + i);
            cout << "Student remaoved successfully \n";
            return;
        }
    }
    cout << "Student not found";
}

// 3 find student implementaion
void SystemManger::searchStudent() {
    int id;
    cout << "Enter Student Id you need to search: ";
    cin >> id;
    for (int i = 0; i < students.size(); i++) {
        if (id == students[i].get_id()) {
            cout << "///////// Student info //////////" << endl;
            cout <<"ID: " << students[i].get_id() << endl;
            cout <<"Name: " << students[i].get_name() << endl;
            cout << "GPA: " << students[i].get_gpa() << endl;
            return;
        } 
    }
    cout << "Studnet not founde \n";
}

// 4 show all student implementaion
void SystemManger::displayAllStudents() {

		if (students.empty()) {
			cout << "No students in the system." << endl;
			return;
		}

		for (int i = 0; i < students.size(); i++) {
            cout << "The sutdent information" << endl;
			cout << "ID: " << students[i].get_id() << endl;
			cout << "Name: " << students[i].get_name() << endl;
			cout << "GPA: " << students[i].get_gpa() << endl;
            cout << "-----------------------------------------------\n";
		}
	}
// 5 enroll studnets in courses
void SystemManger::enrollStudent() {
    int studentId;
    cout << "Entre Student ID: ";
    cin >> studentId;
    for (int i = 0; i < students.size(); i++) {
        if (studentId == students[i].get_id()) {
            cout << "\n Enter course Name \n";
            string courseName;
            cin.ignore();
            getline(cin, courseName);
            students[i].enrollCourse(courseName);
            cout << "Course added successfully" << endl;
            return;
        }
    }
    cout << "Student not found" << endl;

}

// 6 show students courses
void SystemManger::showCourses() {
    int id;
    cout << "Enter student id: ";
    cin >> id;
    for (int i = 0; i < students.size(); i++) {
        if (id == students[i].get_id()) {
            cout << "\n Corses for this Studnet: \n";
            students[i].printCourses();
                return;
        }
    }
    cout << "Student not found \n";
}

// 7 sort students by gpa
void SystemManger::sortStudentsByGpa() {
    sort(students.begin(), students.end(), [](Student& a, Student& b) {
        return a.get_gpa() > b.get_gpa();
        });
    cout << "Students sorted successfully \n";
    displayAllStudents();
}

// ////////////menu list ////////////////////
void SystemManger::showMenu() {
        int choice;

        while (true) {
            cout << "\n===== Student System Menu =====\n";
            cout << "1. Add Student\n";
            cout << "2. Remove Student\n";
            cout << "3. Search Student\n";
            cout << "4. Display All Students\n";
            cout << "5. Enroll Student in Course\n";
            cout << "6. Show Student Courses\n";
            cout << "7. Sort Students by GPA\n";
            cout << "8. Exit\n";

            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                removeStudent();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                displayAllStudents();
                break;
            case 5:
                enrollStudent();
                break;
            case 6:
                showCourses();
                break;
            case 7:
                sortStudentsByGpa();
                break;
            case 8:
                cout << "Exiting...\n";
                return;

            default:
                cout << "Invalid choice. Please try again.\n";
            }
        }
    }

