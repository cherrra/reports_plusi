#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Employee {
     string name;
     string position;
     string birthDate;
     double salary;
 };

int main() {
     vector<Employee> employees;

     int numEmployees;
     cout << "Введите количество сотрудников: ";
     cin >> numEmployees;

   for (int i = 0; i < numEmployees; i++) {
         string name, position, birthDate;
         double salary;

     cout << "Ф.И.О. сотрудника: ";
         cin.ignore();
         getline(cin, name);

         cout << "Должность сотрудника: ";
         getline(cin, position);

         cout << "Дата рождения сотрудника: ";
         cin >> birthDate;

         cout << "Заработная плата сотрудника: ";
         cin >> salary;

         employees.push_back({name, position, birthDate, salary});
     }

     double totalSalary = 0.0;
     for (const auto& employee : employees) {
         totalSalary += employee.salary;
     }

     double averageSalary = totalSalary / employees.size();

     cout << "Средняя зарплата: " << averageSalary << endl;

     cout << "Зарплата выше средней у: " << endl;
     for (const auto& employee : employees) {
         if (employee.salary > averageSalary) {
             cout << employee.name << " - " << employee.salary << endl;
         }
     }

     return 0;
 }
