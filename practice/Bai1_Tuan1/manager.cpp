#include "manager.h"

Manager::Manager() {}

Manager::Manager(std::string name, int age, bool gender, std::string hometown, int salaryRate): Person(name, age, gender, hometown) {
    this->salaryRate = salaryRate;
}

int Manager::getSalaryRate() {
    return this->salaryRate;
}

void Manager::setSalaryRate(int salaryRate) {
    this->salaryRate = salaryRate;
}

int Manager::getSalary() {
    int salary = 3000000;
    return salaryRate * salary;
}