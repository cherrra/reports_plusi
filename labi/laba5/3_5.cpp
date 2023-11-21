#include <iostream>
#include <string>
using namespace std;
int main() { 
    const int size = 10; 
    string cities[size]; 
    int count = 0;

cout << "Введите список из 10 городов:" << endl;
for (int i = 0; i < size; i++) {
    getline(cin, cities[i]);
}

for (int i = 0; i < size; i++) {
    string lowercaseCity;
    
    for (char c : cities[i]) {
        lowercaseCity += tolower(c);
}

int aCount = 0;
for (char c : lowercaseCity) {
    if (c == 'a') { 
        aCount++;
    }
}

if (aCount == 2) {
    count++;
    }
}

cout << "Количество городов с двумя буквами 'а': "<< count << endl;

return 0;
}
