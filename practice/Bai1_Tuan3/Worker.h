#pragma once
#include "Employee.h"
class Worker: public Employee {
private:
	int numProduct;
	int priceProduct;
public:
	static int NUM_WORKER;
	Worker();
	Worker(string name, int numProduct, int priceProduct);
	void setNumProduct(int numProduct);
	void setPriceProduct(int priceProduct);
	int getNumProduct();
	int getPriceProduct();
	long getSalary();
	string getInfor();
};

