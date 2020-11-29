//
// Created by Kamil Nowak on 25/11/2020.
//

#ifndef EX2_EMPLOYEE_H
#define EX2_EMPLOYEE_H
#include <string>
using namespace std;

class Employee {
public:
    Employee(string id, string name, string surname, string departmentId, string position);
    Employee(const Employee &employee);
    ~Employee();
    string getId();
    string getName();
    string getSurname();
    string getDepartmentId();
    string getPosition();
private:
    string id;
    string name;
    string surname;
    string departmentId;
    string position;
};

#endif //EX2_EMPLOYEE_H
