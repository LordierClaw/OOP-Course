#pragma once

#include "Identity.h"

class Employee {
protected:
	Identity id;
	string name;
public:
	Employee();
	virtual ~Employee();
	Employee(string name);
	void setName(string name);
	string getId();
	string getName();
	virtual long getSalary() = 0;
	virtual string getInfor();
};

