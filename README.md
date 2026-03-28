\# 🎓 Student Course Management System



A robust, interactive console-based C++ application designed to manage student records and course enrollments efficiently. This project was built from scratch to demonstrate proficiency in core C++ concepts, Object-Oriented Programming (OOP), and data management.



\## 🚀 Features



\- \*\*Student Management:\*\* Add, remove, and display students with ease.

\- \*\*Course Enrollment:\*\* Assign courses to students. The system automatically prevents duplicate course registrations for the same student.

\- \*\*Smart Search:\*\* Quickly find any student's details and enrolled courses using their unique ID.

\- \*\*Data Sorting:\*\* Automatically rank and display students in descending order based on their GPA using C++ STL algorithms.

\- \*\*Bulletproof Error Handling:\*\* The application features robust input validation to prevent crashes from invalid user inputs (e.g., entering letters instead of numbers) and ensures data integrity (e.g., GPA must be between 0.0 and 4.0, IDs must be unique).



\## 🛠️ Technologies \& Concepts Applied



\- \*\*Language:\*\* C++ 

\- \*\*Object-Oriented Programming (OOP):\*\* - \*\*Inheritance:\*\* `Student` class derived from a base `Person` class.

&#x20; - \*\*Encapsulation:\*\* Private attributes with public getters and setters.

\- \*\*Standard Template Library (STL):\*\* - Dynamic data storage using `std::vector`.

&#x20; - Sorting algorithms using `std::sort` with custom lambda comparators.

\- \*\*Memory \& Input Management:\*\* Handling `cin` fail states, buffer clearing, and dynamic string inputs via `getline`.



\## 📂 Project Structure



\- `main.cpp`: The entry point of the application.

\- `SystemManager.h` / `.cpp`: The core engine handling the interactive menu, vectors, and system logic.

\- `Person.h` / `.cpp`: Base class defining common human attributes (ID, Name).

\- `Student.h` / `.cpp`: Derived class handling student-specific data (GPA) and course lists.



\## 💻 How to Run



1\. Clone this repository:

&#x20;  ```bash

&#x20;  git clone https://github.com/HazemO7/Student-Course-Management-System-Console-Application-.git

