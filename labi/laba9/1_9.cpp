#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    string word = "ПК";
    string replacement = "компьютер";
    int count = 0;

    cout << "Введите текст: ";
    getline(cin, text);

    //смотрим вхождения слова пк
    size_t pos = text.find(word);
    while (pos != string::npos) {
        //заменяем пк на компьютер
        text.replace(pos, word.length(), replacement);
        count++;

        //ищем следующее пк
        pos = text.find(word, pos + replacement.length());
    }

    cout << "Измененный текст: " << text << endl;
    cout << "Количество замен: " << count << endl;

    return 0;
}
