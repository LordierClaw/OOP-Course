#include "Officer.h"

int Officer::NUM_OFFICER = 0;

Officer::Officer() {}

Officer::Officer(string name, int workDay, int salaryRate): Employee(name) {
	this->workDay = workDay;
	this->salaryRate = salaryRate;
	this->id = Identity("VP", ++this->NUM_OFFICER);
}

void Officer::setWorkDay(int workDay) {
	this->workDay = workDay;
}

void Officer::setSalaryRate(int salaryRate) {
	this->salaryRate = salaryRate;
}

int Officer::getWorkDay() {
	return this->workDay;
}

int Officer::getSalaryRate() {
	return this->salaryRate;
}

long Officer::getSalary() {
	return (long)salaryRate*workDay;
}

string Officer::getInfor() {
	string information = "";
	information += "ID: " + this->id.toString() + '\n';
	information += "Name: " + this->name + '\n';
	information += "Salary Rate: " + to_string(this->salaryRate) + '\n';
	information += "Working Day: " + to_string(this->workDay) + '\n';
	information += "Salary: " + to_string(getSalary()) + '\n';
	return information;
}