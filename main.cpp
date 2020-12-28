//
// Created by Kamil Nowak on 25/11/2020.
//

#include <iostream>
#include "HRMS.cpp"

int main() {

    // Inicjalizacja HRMS i jego pracownikow
        HRMS hrms = HRMS();
        string depId1 = "Department 1";
        string depId2 = "Department 2";
        string depId3 = "Department 3";
        string token = depId1;

        for (int i = 0; i < 12; i++) {
            if (i == 4) {
                token = depId2;
            } else if (i == 8) {
                token = depId3;
            }
            hrms.add(Employee(
                    "id" + to_string(i),
                    "Name" + to_string(i),
                    "Surname" + to_string(i),
                    token,
                    "position"),token, 5000.0 - i*100);
        }

    // Demonstracja
        cout << "Demonstracja" << endl << endl;
        // Wypisanie pracownikow wszystkich departamentow
        hrms.printDepartment(depId1);
        hrms.printDepartment(depId2);
        hrms.printDepartment(depId3);
        cout << endl;

    // Zmiana wynagrodzenia pracownika
        cout << "Zmieniono wynagrodzenie: Employee ID: id3; New Salary: 1999" << endl;
        hrms.changeSalary("id3", 1999);

    // Wypisanie wynagrodzen pracownikow
        hrms.printSalaries();

    // Wypisanie posortowanych malejaco wynagrodzen pracownikow
        hrms.printSalariesSorted();

    return 0;
}

