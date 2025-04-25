#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int writeFile(string filename) {
    int numEmployees;
    cout << "enter number of employees: ";
    cin >> numEmployees;

    do {
        cout << "enter number of employees (positive number): ";
        cin >> numEmployees;
        if (numEmployees <= 0) {
            cout << "invalid input! enter positive number. " << endl;
        }
    } while (numEmployees <= 0);

    ofstream file(filename);
    if (!file.is_open()) {
        cerr << "error: could not open file for writing. " << endl;
        return 0;
    }

    file << numEmployees << endl;
    for (int i = 0; i < numEmployees; i++) {
        int empID;
        string empName, empDept;
        double empSalary;

        cout << "enter employee id, name, department, and salary. ";
        cin >> empID >> empName >> empDept >> empSalary;

        file << empID << " " << empName << " " << empDept << " " << empSalary << endl;
    }
    file.close();
    return numEmployees;
}

