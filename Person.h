	#pragma once

	#include <string>

class Person
{
private:
	int id;
	std::string name;
public:
	// constractors
	Person();
	Person(int d, std::string n);

	// getter and settermethods
	std::string get_name();
	int get_id();
	void set_name(std::string n);
	void set_id(int d);
};
	





