#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    // Ввод строк с клавиатуры
    cout << "Введите первую строку: ";
    getline(cin, str1);

    cout << "Введите вторую строку: ";
    getline(cin, str2);

// Создание массива для подсчета встречаемости символов
    int count[256] = {0};

// Подсчет встречаемости символов из str1 в str2
for (char c : str2) {
    if (isalnum(c)) { // Проверка на буквы и цифры
        count[c]++;
    }
}

// Вывод результата
cout << "Результат:\n";
for (char c : str1) {
    if (isalnum(c)) { // Проверка на буквы и цифры
        cout << c << " - " << count[c] << " раз\n";
    }
}

return 0;
}
