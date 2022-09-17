#include "Company.h"

Company::Company() {}

Company::~Company() {
	for (Employee* employee : this->employees) {
		delete employee;
	}
	employees.clear();
}

void Company::addEmployee(Employee* employee) {
	this->employees.push_back(employee);
}

Employee* Company::getEmployee(string id) {
	for (Employee* employee : this->employees) {
		if (employee->getId() == id) return employee;
	}
	return nullptr;
}

long Company::getSumSalary() {
	long sumSalary = 0;
	for (Employee* employee : this->employees) {
		sumSalary += employee->getSalary();
	}
	return sumSalary;
}
