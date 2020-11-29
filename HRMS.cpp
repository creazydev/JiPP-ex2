//
// Created by Kamil Nowak on 25/11/2020.
//

#include <iostream>
#include <algorithm>
#include "HRMS.h"

void HRMS::add(Employee employee, string departmentId, double salary) {
    employees[employee.getId()] = new Employee(employee);
    departmentsEmployees[departmentId].push(employee.getId());
    employeesSalaries[employee.getId()] = salary;
}

void HRMS::printDepartment(string departmentId) {
    queue<string> departmentEmployees = departmentsEmployees[departmentId];
    cout << "Pracownicy departamentu:  " << departmentId << endl;
    while (!departmentEmployees.empty()) {
        cout << " -" << departmentEmployees.front() << endl;
        departmentEmployees.pop();
    }
}

void HRMS::printSalaries() {
    cout << "Wynagrodzenia pracownikow: " << endl;
    for (auto const& iterator : employeesSalaries) {
        Employee *employee = employees[iterator.first];

        cout << "ID: " << employee->getId() << endl;
        cout << "Name: " <<  employee->getName() << endl;
        cout << "Surname: " << employee->getSurname() << endl;
        cout << "Department ID: " << employee->getDepartmentId() << endl;
        cout << "Salary: " << iterator.second << endl << endl;
    }
}

void HRMS::changeSalary(string employeeId, double salary) {
    employeesSalaries[employeeId] = salary;
}

void HRMS::printSalariesSorted() {
    cout << "Posortowane wynagrodzenia pracownikow: " << endl;
    for (auto const& x : sortDsc()) {
        Employee *employee = employees[x.first];
        cout << "ID: " << employee->getId() << endl;
        cout << "Name: " <<  employee->getName() << endl;
        cout << "Surname: " << employee->getSurname() << endl;
        cout << "Department ID: " << employee->getDepartmentId() << endl;
        cout << "Salary: " << x.second << endl << endl;
    }
}

vector<Salary> HRMS::sortDsc() {
    vector<Salary> sortedSalaries;
    for (auto const &x : employeesSalaries) {
        sortedSalaries.emplace_back(Salary(x.first, x.second));
    }

    sort(sortedSalaries.begin(), sortedSalaries.end(), [](Salary &first, Salary &second) {
        return first.second > second.second;
    });
    return sortedSalaries;
}
