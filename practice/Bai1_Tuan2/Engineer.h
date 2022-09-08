#pragma once

#include "Employee.h"

class Engineer: public Employee {
private:
	string major;
	int yearsOfExp;
public:
	static int NUM_ENGINEER;
	Engineer();
	Engineer(string, int, string, string, string, string, int, int, string, int);
	string getMajor();
	int getYearsOfExp();
	long getSalary();
};