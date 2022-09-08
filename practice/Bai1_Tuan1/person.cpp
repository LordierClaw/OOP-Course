#include "person.h"

Person::Person() {}

Person::Person(string name, int age, bool gender, string hometown) {
    this->name = name;
    this->age = age;
    this->gender = gender;
    this->hometown = hometown;
}

string Person::getName() {
    return this->name;
}

int Person::getAge() {
    return this->age;
}

bool Person::getGender() {
    return this->gender;
}

string Person::getHometown() {
    return this->hometown;
}

void Person::setName(string name) {
    this->name = name;
}

void Person::setAge(int age) {
    this->age = age;
}

void Person::setGender(bool gender) {
    this->gender = gender;
}

void Person::setHometown(string hometown) {
    this->hometown = hometown;
}