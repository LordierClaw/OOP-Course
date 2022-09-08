#include "Engineer.h"

Engineer::Engineer() {}

Engineer::Engineer(string name, int age, string gender, string phone, string address, string hometown, int salaryRate, int workDay, string major, int yearsOfExp):
	Employee(name, age, gender, phone, address, hometown, salaryRate, workDay) {
	this->major = major;
	this->yearsOfExp = yearsOfExp;
	this->id = Identity("KS", ++this->NUM_ENGINEER);
}

string Engineer::getMajor() {
	return this->major;
}

int Engineer::getYearsOfExp() {
	return this->yearsOfExp;
}

long Engineer::getSalary() {
	return (long)this->yearsOfExp * this->salaryRate * this->workDay;
}