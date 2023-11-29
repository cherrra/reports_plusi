#include <iostream>
#include <string>
using namespace std;

struct DateOfBirth {
    int day;
    int month;
    int year;
};

struct Student {
    string surname;
    DateOfBirth dob;
    char gender;
};

int main() {
    Student students[25];
    
    for (int i = 0; i < 25; i++) {
        cout << "Фамилия студента " << i+1 << ": ";
        cin >> students[i].surname;
        cout << "День рождения студента " << i+1 << ": ";
        cin >> students[i].dob.day;
        cout << "Месяц рождения студента " << i+1 << ": ";
        cin >> students[i].dob.month;
        cout << "Год рождения студента " << i+1 << ": ";
        cin >> students[i].dob.year;
        cout << "Пол (m/f) студента " << i+1 << ": ";
        cin >> students[i].gender;
    }
    
    int maxAge = 0;
    string oldestSurname;
    
    for (int i = 0; i < 25; i++) {
        if (students[i].gender == 'm') {
            int age = 2023 - students[i].dob.year;
            if (age > maxAge) {
                maxAge = age;
                oldestSurname = students[i].surname;
            }
        }
    }
    
    cout << "Самый старший мальчик: " << oldestSurname << endl;
    
    return 0;
}
