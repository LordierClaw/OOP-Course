#ifndef COMPANY_H_
#define COMPANY_H_

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "worker.h"
#include "manager.h"
#include "table.h"

class Company {
private:
    Manager manager;
    vector<Worker> workers;
public:
    void setManager();
    void getManager();
    void addWorker();
    void getAllWorker();
    void getManagerSalary();
    void getWorkerSumSalary();
    void sortBySalary();
    void sortByName();

    Company();
};

#endif