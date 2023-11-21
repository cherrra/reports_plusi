#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> cities(10); //массив для городов

    cout << "Введите названия десяти городов:\n";
    for (int i = 0; i < cities.size(); i++) {
       cin >> cities[i];
    }

   vector<int> indexes; //массив для индексов

    for (int i = 0; i < cities.size(); i++) {
        if (cities[i].length() >= 2 && cities[i][1] == 'o') {
            indexes.push_back(i); 
        }
    }

    cout << "Номера городов, в названии которых вторая буква <о>:\n";
    for (int i = 0; i < indexes.size(); i++) {
        cout << (indexes[i] + 1) << " ";
    }

    return 0;
}
