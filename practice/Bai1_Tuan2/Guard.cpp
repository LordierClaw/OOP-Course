#include "Guard.h"

Guard::Guard() {}

Guard::Guard(string name, int age, string gender, string phone, string address, string hometown, int salaryRate, int workDay, string area) :
	Employee(name, age, gender, phone, address, hometown, salaryRate, workDay) {
	this->area = area;
	this->id = Identity("BV", ++NUM_GUARD);
}

string Guard::getArea() {
	return this->area;
}

long Guard::getSalary() {
	return (long)this->salaryRate * this->workDay;
}