#pragma once

#include "Identity.h"

class Employee {
protected:
	Identity id;
	string name;
	int age;
	string gender;
	string phone;
	string address;
	string hometown;
	int salaryRate;
	int workDay;
public:
	Employee();
	Employee(string, int, string, string, string, string, int, int);
	string getId();
	string getName();
	void getInfor(string*, int*, string*, string*);
	virtual long getSalary();
};