#pragma once

#include <iostream>
#include <string>

using namespace std;

class Identity {
private:
	string idName;
	string idNum;
public:
	Identity();
	Identity(string, int);
	string toString();
};