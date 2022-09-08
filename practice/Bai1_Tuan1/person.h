#ifndef PERSON_H_
#define PERSON_H_

#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;
    bool gender;
    string hometown;
public:
    Person();
    Person(string name, int age, bool gender, string hometown);
    string getName();
    int getAge();
    bool getGender();
    string getHometown();
    void setName(string name);
    void setAge(int age);
    void setGender(bool gender);
    void setHometown(string hometown);
};

#endif