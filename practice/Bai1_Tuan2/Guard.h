#pragma once

#include "Employee.h"

class Guard: public Employee {
private:
	string area;
public:
	static int NUM_GUARD;
	Guard();
	Guard(string, int, string, string, string, string, int, int, string);
	string getArea();
	long getSalary();
};