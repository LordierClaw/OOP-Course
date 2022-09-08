#include "company.h"

bool cmpSalary(Worker w1, Worker w2) {
    return w1.getSalary() > w2.getSalary();
}

bool cmpName(Worker w1, Worker w2) {
    return w1.getName() < w2.getName();
}

Company::Company() {}

void Company::setManager() {
    string name; int age; bool gender; string hometown; int salaryRate;
    cout << "Nhap ten: ";
    cin.ignore();
    getline(cin, name);
    cout << "Nhap tuoi: ";
    cin >> age;
    cout << "Nhap gioi tinh (1 la Nam, 0 la Nu): ";
    cin >> gender;
    cout << "Nhap que quan: ";
    cin.ignore();
    getline(cin, hometown);
    cout << "Nhap he so luong: ";
    cin >> salaryRate;
    manager = Manager(name, age, gender, hometown, salaryRate);
}

void Company::getManager() {
    if (manager.getName() == "") {
        cout << "Chua nhap thong tin cho Can bo" << '\n';
        return;
    }
    Table table(5);
    table.setHeaders({"Ten", "Tuoi", "Gioi tinh", "Que quan", "He so luong"});
    string name = manager.getName();
    string age = to_string(manager.getAge());
    string gender = "Nam";
    if (manager.getGender() == 0) gender = "Nu";
    string hometown = manager.getHometown();
    string salaryRate = to_string(manager.getSalaryRate());
    table.addRow({name, age, gender, hometown, salaryRate});
    table.print();
}

void Company::addWorker() {
    string name; int age; bool gender; string hometown; int workDay;
    cout << "Nhap ten: ";
    cin.ignore();
    getline(cin, name);
    cout << "Nhap tuoi: ";
    cin >> age;
    cout << "Nhap gioi tinh (1 la Nam, 0 la Nu): ";
    cin >> gender;
    cout << "Nhap que quan: ";
    cin.ignore();
    getline(cin, hometown);
    cout << "Nhap so ngay lam: ";
    cin >> workDay;
    workers.emplace_back(Worker(name, age, gender, hometown, workDay));
}

void Company::getAllWorker() {
    if (workers.size() == 0) {
        cout << "Khong co cong nhan nao" << '\n';
        return;
    }
    Table table(5);
    table.setHeaders({"Ten", "Tuoi", "Gioi tinh", "Que quan", "So ngay lam"});
    for(auto worker: workers) {
        string name = worker.getName();
        string age = to_string(worker.getAge());
        string gender = "Nam";
        if (worker.getGender() == 0) gender = "Nu";
        string hometown = worker.getHometown();
        string workDay = to_string(worker.getWorkday());
        table.addRow({name, age, gender, hometown, workDay});
    }
    table.print();
}

void Company::getManagerSalary() {
    if (manager.getName() == "") {
        cout << "Chua nhap thong tin cho Can bo" << '\n';
        return;
    }
    cout << "Tien luong cua can bo: " << manager.getSalary() << '\n';
}

void Company::getWorkerSumSalary() {
    long salarySum = 0;
    for(auto worker: workers) {
        salarySum += worker.getSalary();
    }
    cout << "Tien luong cua toan bo cong nhan la: " << salarySum << '\n';
}

void Company::sortBySalary() {
    sort(workers.begin(), workers.end(), cmpSalary);
}

void Company::sortByName() {
    sort(workers.begin(), workers.end(), cmpName);
}