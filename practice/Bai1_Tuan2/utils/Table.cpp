#include "table.h"

Table::Table() {
    numCol = 0;
};

Table::Table(int numCol) {
    this->numCol = numCol;
    headers.resize(numCol);
    widths.resize(numCol, 5);
}

void Table::setHeaders(std::vector<std::string> headers) {
    for(int i = 0; i < headers.size(); i++) {
        this->headers[i] = headers[i];
        if (headers[i].length()+4 > widths[i]) widths[i] = headers[i].length()+4;
    }
}

void Table::addRow(std::vector<std::string> row) {
    this->rows.emplace_back(row);
    for(int i = 0; i < row.size(); i++) {
        if (row[i].length()+4 > widths[i]) widths[i] = row[i].length()+4;
    }
}

void Table::print() {
    // print header
    for(int i = 0; i < headers.size(); i++) {
        std::cout << std::setw(widths[i]) << std::left << headers[i] << std::right << "| ";
    }
    std::cout << '\n';
    //print line break
    for(int i = 0; i < headers.size(); i++) {
        std::cout << std::setfill('-');
        if (i == 0)  std::cout << std::setw(widths[i]+1);
        else std::cout << std::setw(widths[i]+2);
        if (i != headers.size()-1) std::cout << std::right << '+';
        else std::cout << std::right << "--";
    }
    std::cout << std::setfill(' ') << '\n';
    // print all rows
    for(auto row: rows) {
        for(int i = 0; i < row.size(); i++) {
                std::cout << std::setw(widths[i]) << std::left << row[i];
                std::cout << std::right << "| ";
        }
        std::cout << '\n';
    }
}