//
// Created by Kamil Nowak on 25/11/2020.
//

#include "Employee.h"

Employee::Employee(string id, string name, string surname, string departmentId, string position) {
    Employee::id = id;
    Employee::name = name;
    Employee::surname = surname;
    Employee::departmentId = departmentId;
    Employee::position = position;
}

Employee::Employee(const Employee &employee) {
    Employee::id = employee.id;
    Employee::name = employee.name;
    Employee::surname = employee.surname;
    Employee::departmentId = employee.departmentId;
    Employee::position = employee.position;
}

string Employee::getId() {
    return Employee::id;
}

string Employee::getName() {
    return Employee::name;
}

string Employee::getSurname() {
    return Employee::surname;
}

string Employee::getDepartmentId() {
    return Employee::departmentId;
}

string Employee::getPosition() {
    return Employee::position;
}