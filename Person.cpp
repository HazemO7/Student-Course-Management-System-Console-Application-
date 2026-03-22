#include "Person.h"


using namespace std;

// constractors
Person::Person() {
	id = 0;
	name = "";
};
Person::Person(int d, string n) {
	id = d;
	name = n;
};

// getter 
string Person:: get_name() {
	return name;
}
 int Person::get_id() {
	return id;
}

// settermethod
void Person::set_name(string n) {
	name = n;
}
void Person::set_id(int d) {
	id = d;
}


