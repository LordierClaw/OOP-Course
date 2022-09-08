#ifndef WORKER_H_
#define WORKER_H_

#include "person.h"

class Worker: public Person {
private:
    int workDay;
public:
    Worker();
    Worker(string name, int age, bool gender, string hometown, int workDay);
    int getWorkday();
    void setWorkday(int workDay);
    int getSalary();
};

#endif