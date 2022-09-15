#pragma once
#include "Employee.h"
class Officer: public Employee {
private:
	int workDay;
	int salaryRate;
public:
	static int NUM_OFFICER;
	Officer();
	Officer(string name, int workDay, int salaryRate);
	void setWorkDay(int workDay);
	void setSalaryRate(int salaryRate);
	int getWorkDay();
	int getSalaryRate();
	long getSalary();
	string getInfor();
};

