#include "Worker.h"

Worker::Worker() {}

Worker::Worker(string name, int age, string gender, string phone, string address, string hometown, int salaryRate, int workDay, int level): 
	Employee(name, age, gender, phone, address, hometown, salaryRate, workDay) {
	this->level = level;
	this->id = Identity("CN", ++this->NUM_WORKER);
}

int Worker::getLevel() {
	return this->level;
}

long Worker::getSalary() {
	return (long)this->level * this->salaryRate * this->workDay;
}