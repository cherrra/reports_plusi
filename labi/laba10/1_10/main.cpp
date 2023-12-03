#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Employee {
public:
    string surname;
    string department;
    int birthYear;
    int experience;
    string position;
    double salary;

    friend ostream& operator<<(ostream& os, const Employee& employee) {
        os << employee.surname << " " << employee.department << " " << employee.birthYear << " "
           << employee.experience << " " << employee.position << " " << employee.salary;
        return os;
    }

    friend istream& operator>>(istream& is, Employee& employee) {
        is >> employee.surname >> employee.department >> employee.birthYear >> employee.experience
           >> employee.position >> employee.salary;
        return is;
    }
};

int main() {
    ofstream file("employees.txt");
    file << "Котов бухгалтерия 1950 25 Engineer 1000\n";
    file << "Рыбов HR 1975 20 Manager 1500\n";
    file << "Собаков HR 1975 20 Manager 1500\n";
    file << "Рыбов IT 1975 12 Manager 1500\n";
    file << "Птичкин бухгалтерия 1955 20 Manager 1500\n";
    file << "Кроликов учебка 1975 20 Manager 1500\n";
    file << "Мышкин IT 1975 20 Manager 1500\n";
    file << "Крысов учебка 1975 20 Manager 1500\n";
    file << "Кротов IT 1975 10 Manager 1500\n";
    file << "Жуков IT 1990 8 Programmer 1200\n";
    file.close();

    ifstream inputFile("employees.txt");
    Employee employees[10];
    for (int i = 0; i < 10; ++i) {
        inputFile >> employees[i];
    }
    inputFile.close();

    int currentYear = 2023;

    cout << "Сотрудники пенсинного возраста и стаж:" << endl;
    for (const auto& employee : employees) {
        if (currentYear - employee.birthYear >= 60) {
            cout << employee.surname << ", " << employee.experience << " лет" << endl;
        }
    }

    string departmentToCheck = "IT";
    int totalExperience = 0;
    int count = 0;
    for (const auto& employee : employees) {
        if (employee.department == departmentToCheck) {
            totalExperience += employee.experience;
            count++;
        }
    }
    
    if (count > 0) {
        double averageExperience = static_cast<double>(totalExperience) / count;
        cout << "Средний стаж сотрудников, работающих в отделе " << departmentToCheck << ": "
                  << averageExperience << " лет" << endl;
    } else {
        cout << "Сотрудники не найдены" << endl;
    }

    return 0;
}
