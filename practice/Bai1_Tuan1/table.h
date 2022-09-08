#ifndef TABLE_H_
#define TABLE_H_

#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

class Table {
private:
    int numCol;
    int numRow;
    std::vector<std::string> headers;
    std::vector<std::vector<std::string>> rows;
    std::vector<int> widths;
public:
    Table();
    Table(int numCol);
    void setHeaders(std::vector<std::string> headers);
    void addRow(std::vector<std::string> row);
    void print();
};

#endif