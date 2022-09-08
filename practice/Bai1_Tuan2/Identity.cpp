#include "Identity.h"

Identity::Identity() {}

Identity::Identity(string idName, int idNum) {
	string number = to_string(idNum);
	while (number.length() < 3) number = '0' + number;
	this->idNum = number;
	this->idName = idName;
}

string Identity::getId() {
	return this->idName + this->idNum;
}
