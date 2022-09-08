#ifndef MANAGER_H_
#define MANAGER_H_

#include "person.h"

class Manager: public Person {
private:
    int salaryRate;
public:
    Manager();
    Manager(std::string name, int age, bool gender, std::string hometown, int salaryRate);
    int getSalaryRate();
    void setSalaryRate(int salaryRate);
    int getSalary();
};

#endif