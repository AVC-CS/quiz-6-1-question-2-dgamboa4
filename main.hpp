#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    ifstream ifs;

    ifs.open("employee.txt");
    if (!ifs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    int numEmployees;
    ifs >> numEmployees;
    cout << "ID\t\tName\t\tDepartment\tSalary" << endl;

    int id;
    string name, department;
    double salary, totalSalary = 0;

    while (ifs >> id >> name >> department >> salary) {
        cout << id << "\t\t" << name << "\t\t" << department << "\t\t" << salary << endl;
        totalSalary += salary;
    }

    ifs.close();
    cout << "Total: " << totalSalary << "Avg: " << totalSalary / numEmployees << endl;

    
}