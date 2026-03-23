
#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
    // build object s1 from class Student
    Student s1(202301, "Hazem Abdelaziz", 3.8);
    // add coursess to s1;
    s1.enrollCourse("Fundamentals");
    s1.enrollCourse("Backend");
    s1.enrollCourse("Frontend");
    // print all courses s1 has enrolle in it
   s1.printCourses();

    
    return 0;
}

