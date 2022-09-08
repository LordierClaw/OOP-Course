#pragma once

#include "Employee.h"

class Worker: public Employee {
private:
	int level;
public:
	static int NUM_WORKER;
	Worker();
	Worker(string, int, string, string, string, string, int , int, int);
	int getLevel();
	long getSalary();
};