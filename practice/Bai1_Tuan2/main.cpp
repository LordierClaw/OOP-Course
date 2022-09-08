#include <iostream>
#include "Company.h"
#include "utils/Table.h"
using namespace std;

Company company;

void displayMainMenu() {
    cout << "======================MENU======================" << endl;
    cout << "1. Add new employee" << endl;
    cout << "2. Find employee by name" << endl;
    cout << "3. Show all employee" << endl;
    cout << "0. Exit" << endl;
    cout << "================================================" << endl;
}

void addNewEmployee() {
    string name; int age; string gender; string phone; string address; string hometown; int salaryRate; int workDay;
    cout << "Enter new employee's information:" << endl;
    cout << "Name: "; cin.ignore(); getline(cin, name);
    cout << "Age: "; cin >> age;
    cout << "Gender: "; cin.ignore(); getline(cin, gender);
    cout << "Phone: "; cin >> phone;
    cout << "Address: "; cin.ignore(); getline(cin, address);
    cout << "Hometown: "; cin.ignore(); getline(cin, hometown);
    cout << "Salary Rate: "; cin >> salaryRate;
    cout << "Work Day: "; cin >> workDay;
    cout << "================================================" << endl;
    cout << "Enter new employee's job details: " << endl;
    int job;
    cout << "Choose a job:\n 1. Worker\n 2. Engineer\n 3. Worker" << endl;
    cout << "Job: "; cin >> job;
    Employee* employee = new Employee();
    if (job == 1) {
        int level;
        cout << "Level: "; cin >> level;
        employee = new Worker(name, age, gender, phone, address, hometown, salaryRate, workDay, level);
    } else if (job == 2) {
        string major; int yearsOfExp;
        cout << "Major: "; cin.ignore(); getline(cin, major);
        cout << "Years of Experience: "; cin >> yearsOfExp;
        employee = new Engineer(name, age, gender, phone, address, hometown, salaryRate, workDay, major, yearsOfExp);
    } else if (job == 3) {
        string area;
        cout << "Guard area: "; cin.ignore(); getline(cin, area);
        employee = new Guard(name, age, gender, phone, address, hometown, salaryRate, workDay, area);
    }
    company.addEmployee(employee);
    cout << "New employee is added!" << endl;
}

void findEmployee() {
    string keyword;
    cout << "Find employee by name: " << endl;
    cout << "Enter name: "; cin.ignore(); getline(cin, keyword);
    vector<Employee*> found = company.findEmployee(keyword);
    if (found.size() == 0) {
        cout << "No results." << endl;
        return;
    }
    Table table(6);
    table.setHeaders({ "ID", "Name", "Age", "Gender", "Phone", "Salary" });
    for (auto employee : found) {
        string id = employee->getId();
        string name; int age; string gender; string phone;
        employee->getInfor(&name, &age, &gender, &phone);
        long salary = employee->getSalary();
        table.addRow({ id, name, to_string(age), gender, phone, to_string(salary) });
    }
    table.print();
}

void showAllEmployee() {
    vector<Employee*> employees = company.getAllEmployee();
    if (employees.size() == 0) {
        cout << "There is no employee." << endl;
        return;
    }
    cout << "All employee's basic information:" << endl;
    Table table(6);
    table.setHeaders({ "ID", "Name", "Age", "Gender", "Phone", "Salary" });
    for (auto employee: employees) {
        string id = employee->getId();
        string name; int age; string gender; string phone;
        employee->getInfor(&name, &age, &gender, &phone);
        long salary = employee->getSalary();
        table.addRow({ id, name, to_string(age), gender, phone, to_string(salary) });
    }
    table.print();
}

int main() {
    system("title Bai1_Tuan2");
    while (true) {
        system("cls");
        displayMainMenu();
        int selection;
        cout << "Enter your selection: ";
        cin >> selection;
        cout << "================================================" << endl;
        switch (selection) {
        case 1:
            addNewEmployee();
            system("pause");
            break;
        case 2:
            findEmployee();
            system("pause");
            break;
        case 3:
            showAllEmployee();
            system("pause");
            break;
        case 0:
            return 0;
        default:
            cout << "Invalid Input." << endl;
            system("pause");
            break;
        }
    }
}
