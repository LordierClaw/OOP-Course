#include <iostream>
#include "Company.h"

Company* company = new Company();

void displayMainMenu() {
	cout << "==================MENU==================" << endl;
	cout << "1. Add new Employee" << endl;
	cout << "2. Edit employee's information" << endl;
	cout << "3. Show employee's information" << endl;
	cout << "4. Show sum of all employees's salary" << endl;
	cout << "0. Exit" << endl;
	cout << "========================================" << endl;
}

// selection 1
void addNewEmployee() {
	string name; int jobOption = 0;
	cout << "Enter new employee's infomation:" << endl;
	cout << "Name: "; cin.ignore(); getline(cin, name);
	cout << "Job (1 is Worker, 2 is Officer): "; cin >> jobOption;
	if (jobOption == 1) {
		int numProduct, priceProduct;
		cout << "Number of products: "; cin >> numProduct;
		cout << "Price per product: "; cin >> priceProduct;
		Worker* worker = new Worker(name, numProduct, priceProduct);
		company->addEmployee(worker);
	}
	else if (jobOption == 2) {
		int salaryRate, workDay;
		cout << "Salary Rate: "; cin >> salaryRate;
		cout << "Working Day: "; cin >> workDay;
		Officer* officer = new Officer(name, salaryRate, workDay);
		company->addEmployee(officer);
	}
	else {
		cout << "Invalid Input. ";
		return;
	}
}

// selection 2
void editWorkerInfor(Employee* worker) {
	cout << "Select information to change" << endl;
	cout << "1. Name" << endl;
	cout << "2. Number of products" << endl;
	cout << "3. Price per product" << endl;
	cout << "========================================" << endl;
	int selection;
	cout << "Input: "; cin >> selection;
	string name; int numProduct; int priceProduct;
	switch (selection) {
	case 1:
		cout << "Enter new Name: "; cin.ignore(); getline(cin, name);
		worker->setName(name);
		cout << worker->getId() << " | Name has been changed to " << name << endl;
		break;
	case 2:
		cout << "Enter new Number of products: "; cin >> numProduct;
		((Worker*)worker)->setNumProduct(numProduct);
		cout << worker->getId() << " | Number of products has been changed to " << numProduct << endl;
		break;
	case 3:
		cout << "Enter new Price per product: "; cin >> priceProduct;
		((Worker*)worker)->setPriceProduct(priceProduct);
		cout << worker->getId() << " | Price per product has been changed to " << priceProduct << endl;
		break;
	default:
		cout << "Invalid input. ";
		return;
	}
}

void editOfficerInfor(Employee* officer) {
	cout << "Select information to change:" << endl;
	cout << "1. Name" << endl;
	cout << "2. Salary rate" << endl;
	cout << "3. Working day" << endl;
	cout << "========================================" << endl;
	int selection;
	cout << "Input: "; cin >> selection;
	string name; int salaryRate; int workDay;
	switch (selection) {
	case 1:
		cout << "Enter new name: "; cin.ignore(); getline(cin, name);
		officer->setName(name);
		cout << officer->getId() << " | Name has been changed to " << name << endl;
		break;
	case 2:
		cout << "Enter new Salary rate: "; cin >> salaryRate;
		((Officer*)officer)->setSalaryRate(salaryRate);
		cout << officer->getId() << " | Salary rate has been changed to " << salaryRate << endl;
		break;
	case 3:
		cout << "Enter new Working day: "; cin >> workDay;
		((Officer*)officer)->setWorkDay(workDay);
		cout << officer->getId() << " | Working day has been changed to " << workDay << endl;
		break;
	default:
		cout << "Invalid input. ";
		return;
	}
}

void editEmployee() {
	string id;
	cout << "Enter employee's ID: "; cin.ignore(); getline(cin, id);
	Employee* employee = company->getEmployee(id);
	if (employee == nullptr) {
		cout << "No results. ";
		return;
	}
	if (id.substr(0, 2) == "SX") {
		editWorkerInfor(employee);
	}
	else if (id.substr(0, 2) == "VP") {
		editOfficerInfor(employee);
	}
}

// selection 3
void showEmployee() {
	string id;
	cout << "Enter employee's ID: "; cin.ignore(); getline(cin, id);
	Employee* employee = company->getEmployee(id);
	if (employee == nullptr) {
		cout << "No results. ";
		return;
	}
	cout << employee->getInfor() << endl;
}

// selection 4
void showSumSalary() {
	cout << "Sum of all employee's salary: " << company->getSumSalary() << endl;
}

int main() {
	system("title Bai1_Tuan3");
	while (true) {
		system("cls");
		displayMainMenu();
		cout << "Input: ";
		int selection;
		cin >> selection;
		cout << "========================================" << endl;
		switch (selection) {
		case 0:
			delete company;
			return 0;
		case 1:
			addNewEmployee();
			system("pause");
			break;
		case 2:
			editEmployee();
			system("pause");
			break;
		case 3:
			showEmployee();
			system("pause");
			break;
		case 4:
			showSumSalary();
			system("pause");
			break;
		default:
			cout << "Invalid Input. ";
			system("pause");
			break;
		}
	}
}
