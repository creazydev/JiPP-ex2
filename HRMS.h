//
// Created by creazy on 25/11/2020.
//

#ifndef EX2_HRMS_H
#define EX2_HRMS_H
#include <stack>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <string>
#include "Employee.cpp"

using namespace std;
typedef map<string, queue<string>> DepartmentsEmployees;
typedef map<string, double> EmployeesSalaries;
typedef map<string, Employee*> Employees;
typedef pair<string, double> Salary;

class HRMS {
public:
    void add(Employee employee, string departmentId, double salary);
    void printDepartment(std::string departmentId);
    void changeSalary(std::string employeeId, double salary);
    void printSalaries();
    void printSalariesSorted();
private:
    DepartmentsEmployees departmentsEmployees;
    EmployeesSalaries employeesSalaries;
    Employees employees;
    vector<Salary> sortDsc();
};
#endif //EX2_HRMS_H
