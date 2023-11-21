#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> surnames; 
    vector<string> filteredSurnames; 
    
    int n;
    cout << "Введите количество сотрудников: ";
    cin >> n; 
    
    cout << "Введите фамилии сотрудников: " << endl;
    for (int i = 0; i < n; i++) {
        string surname;
        cin >> surname; 
        surnames.push_back(surname); 
    }
    
    for (const auto& surname : surnames) {
        if (surname.back() == 'a') {
            filteredSurnames.push_back(surname);
        }
    }
    
    sort(filteredSurnames.begin(), filteredSurnames.end());
    
    cout << "Отфильтрованные фамилии сотрудников:" << endl;
    for (const auto& surname : filteredSurnames) {
        cout << surname << endl; 
    }
    
    return 0;
}
