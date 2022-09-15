#pragma once

#include "Officer.h"
#include "Worker.h"
#include <vector>

class Company {
private:
	vector<Employee*> employees;
public:
	Company();
	~Company();
	void addEmployee(Employee* employee);
	Employee* getEmployee(string id);
	long getSumSalary();
};

