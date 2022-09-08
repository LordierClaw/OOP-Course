#include "worker.h"

Worker::Worker() {};

Worker::Worker(std::string name, int age, bool gender, std::string hometown, int workDay): Person(name, age, gender, hometown) {
    this->workDay = workDay;
}

int Worker::getWorkday() {
    return this->workDay;
}

void Worker::setWorkday(int workDay) {
    this->workDay = workDay;
}

int Worker::getSalary() {
    int salary = 100000;
    return workDay * salary;
}