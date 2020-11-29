#include <iostream>
#include "HRMS.cpp"

int main() {
    HRMS hrms = HRMS();
    //setting up departments and employees
    string depId1 = "3mf94mf";
    string depId2 = "k3f22lo";
    string depId3 = "p2do34o";
    string token = depId1;
    for (int i = 0; i < 12; i++) {
        if (i == 4) {
            token = depId2;
        } else if (i == 8) {
            token = depId3;
        }
        hrms.add(Employee("id" + to_string(i), "Name" + to_string(i), "Surname" + to_string(i),
                          token, "position"),token, 5000.0 - i*100);
    }

    //demo
    hrms.printDepartment(depId1);
    hrms.printDepartment(depId2);
    hrms.printDepartment(depId3);
    cout << endl;

    //changing and printing salaries
    cout << "Zmieniono wynagrodzenie: Employee ID: id3; New Salary: 1999" << endl;
    hrms.changeSalary("id3", 1999);

    //printing salaries after salary change
    hrms.printSalaries();

    //sorting and printing salaries
    hrms.printSalariesSorted();
    return 0;
}

