
#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
    // إنشاء كائن من كلاس Student
    Student s1(202301, "Hazem Abdelaziz", 3.8);

    // طباعة البيانات للتأكد من عمل الـ Getters والوراثة
    cout << "--- Student Information ---" << endl;
    cout << "ID: " << s1.get_id() << endl;
    cout << "Name: " << s1.get_name() << endl;
    cout << "GPA: " << s1.get_gpa() << endl;

    // اختبار تعديل البيانات باستخدام الـ Setters
    s1.set_gpa(3.9);
    cout << "\nUpdated GPA: " << s1.get_gpa() << endl;
    return 0;
}

