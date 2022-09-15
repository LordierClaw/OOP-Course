#include "Worker.h"

int Worker::NUM_WORKER = 0;

Worker::Worker() {}

Worker::Worker(string name, int numProduct, int priceProduct): Employee(name) {
	this->numProduct = numProduct;
	this->priceProduct = priceProduct;
	this->id = Identity("SX", ++this->NUM_WORKER);
}

int Worker::getNumProduct() {
	return this->numProduct;
}

int Worker::getPriceProduct() {
	return this->priceProduct;
}

void Worker::setNumProduct(int numProduct) {
	this->numProduct = numProduct;
}

void Worker::setPriceProduct(int priceProduct) {
	this->priceProduct = priceProduct;
}

long Worker::getSalary() {
	return (long)numProduct*priceProduct;
}

string Worker::getInfor() {
	string information = "";
	information += "ID: " + this->id.toString() + '\n';
	information += "Name: " + this->name + '\n';
	information += "Number of products: " + to_string(this->numProduct) + '\n';
	information += "Price per product: " + to_string(this->priceProduct) + '\n';
	information += "Salary: " + to_string(getSalary()) + '\n';
	return information;
}
