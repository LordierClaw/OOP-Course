#include "Company.h"

int Worker::NUM_WORKER = 0;
int Engineer::NUM_ENGINEER = 0;
int Guard::NUM_GUARD = 0;

Company::Company() {}

void Company::addEmployee(Employee* person) {
	this->employees.emplace_back(person);
}

string getLower(string args) {
	for (int i = 0; i < args.size(); i++) args[i] = tolower(args[i]);
	return args;
}

vector<Employee*> Company::findEmployee(string name) {
	name = getLower(name);
	vector<Employee*> found;
	for (int i = 0; i < employees.size(); i++) {
		string personName = getLower(employees[i]->getName());
		size_t position = personName.find(name);
		if (position != string::npos) found.emplace_back(employees[i]);
	}
	return found;
}

vector<Employee*> Company::getAllEmployee() {
	return this->employees;
}