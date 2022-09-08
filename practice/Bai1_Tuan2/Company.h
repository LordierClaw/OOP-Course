#pragma once

#include "Worker.h"
#include "Engineer.h"
#include "Guard.h"
#include <vector>

class Company {
private:
	vector<Employee*> employees;
public:
	Company();
	void addEmployee(Employee*);
	vector<Employee*> findEmployee(string);
	vector<Employee*> getAllEmployee();
};