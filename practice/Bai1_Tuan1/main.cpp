#include <iostream>
#include "company.h"
#define endl '\n'
#define clrscr() system("cls")
#define pause() system("pause")

using namespace std;

void displayMainMenu() {
    clrscr();
    cout << "======================MENU======================" << endl;
    cout << "1. Nhap thong tin Can bo" << endl;
    cout << "2. Them moi mot Cong nhan" << endl;
    cout << "3. Hien thi thong tin Can bo" << endl;
    cout << "4. Hien thi thong tin tat ca Cong nhan" << endl;
    cout << "5. Tinh tien luong cua Can bo" << endl;
    cout << "6. Tinh tong tien luong cua Cong nhan" << endl;
    cout << "7. Sap xep lai thu tu cong nhan theo luong giam dan" << endl;
    cout << "8. Sap xep lai thu tu cong nhan theo ten (thu tu tu dien)" << endl;
    cout << "9. Thoat" << endl;
    cout << "================================================" << endl;
    cout << "Nhap lua chon: ";
}

int main() {
    system("title Baitap1");
    Company myCompany;
    int selection = 0;
    while (true) {
        displayMainMenu();
        cin >> selection;
        cout << "================================================" << endl;
        switch (selection) {
        case 1:
            cout << "Nhap thong tin Can bo" << endl;
            myCompany.setManager();
            cout << "Nhap thanh cong!" << endl;
            pause();
            break;
        case 2:
            cout << "Nhap thong tin cong nhan moi" << endl;
            myCompany.addWorker();
            cout << "Nhap thanh cong!" << endl;
            pause();
            break;
        case 3:
            cout << "Thong tin can bo: " << endl;
            myCompany.getManager();
            pause();
            break;
        case 4:
            cout << "Thong tin tat ca cong nhan: " << endl;
            myCompany.getAllWorker();
            pause();
            break;
        case 5:
            myCompany.getManagerSalary();
            pause();
            break;
        case 6:
            myCompany.getWorkerSumSalary();
            pause();
            break;
        case 7:
            myCompany.sortBySalary();
            cout << "Da sap xep" << endl;
            pause();
            break;
        case 8:
            myCompany.sortByName();
            cout << "Da sap xep" << endl;
            pause();
            break;
        case 9:
            return 0;
        default:
            cout << "Nhap sai cu phap" << endl;
            pause();
            break;
        }
    }
}