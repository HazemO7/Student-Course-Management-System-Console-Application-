#include "SystemManger.h"
using namespace std;

// add student implemntaion
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

// show all student implementaion
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
		}
	}

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

            case 4:
                displayAllStudents();
                break;

            case 8:
                cout << "Exiting...\n";
                return;

            default:
                cout << "Invalid choice. Please try again.\n";
            }
        }
    }

