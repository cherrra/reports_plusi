#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Введите строку текста: ";
    getline(cin, str); 

    size_t pos = str.find('&'); 
    if (pos == string::npos) { 
        cout << "Символ '&' не найден." << endl;
    } else {
        string sub = str.substr(pos + 1); 
        sort(sub.begin(), sub.end()); 

        cout << "Символ '&' находится на позиции " << pos << endl;
        cout << "Отсортированные символы после '&' : " << sub << endl;
    }

    return 0;
}
