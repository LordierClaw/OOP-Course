#include "Employee.h"

Employee::Employee() {}

Employee::Employee(string name, int age, string gender, string phone, string address, string hometown, int salaryRate, int workDay) {
	this->name = name;
	this->age = age;
	this->gender = gender;
	this->phone = phone;
	this->address = address;
	this->hometown = hometown;
	this->salaryRate = salaryRate;
	this->workDay = workDay;
}

string Employee::getName() {
	return this->name;
}

string Employee::getId() {
	return this->id.getId();
}

void Employee::getInfor(string *name, int *age, string *gender, string *phone) {
	*name = this->name;
	*age = this->age;
	*gender = this->gender;
	*phone = this->phone;
}

long Employee::getSalary() {
	return (long)this->salaryRate * this->workDay;
}