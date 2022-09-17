#include "Employee.h"

Employee::Employee() {}

Employee::~Employee() {}

Employee::Employee(string name) {
	this->name = name;
}

string Employee::getId() {
	return this->id.toString();
}

string Employee::getName() {
	return this->name;
}

void Employee::setName(string name) {
	this->name = name;
}

string Employee::getInfor() {
	string information = "";
	information += "ID: " + this->id.toString() + '\n';
	information += "Name: " + this->name + '\n';
	return information;
}