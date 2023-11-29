#include <iostream>
#include <string>
#include <cctype> //обработка символов
using namespace std;

int main() {
    string inputText;
    cout << "Введите текст с ошибками: ";
    getline(cin, inputText);

    int wordCount = 0;
    int sentenceCount = 0;
    /*если символ - буква, преобразует его в верхний или нижний регистр 
    в зависимости от того, должна ли следующая буква быть заглавной*/
    bool capitalizeNext = true;

    for (char& c : inputText) {
        if (isalpha(c)) {
            if (capitalizeNext) {
                c = toupper(c);
                capitalizeNext = false;
            } else {
                c = tolower(c);
            }
        } else if (c == '.') {
            capitalizeNext = true;
            sentenceCount++;
        } else if (c == ' ') {
            wordCount++;
        }
    }

    wordCount++;

    cout << "Исходный текст с исправленными ошибками: " << inputText << endl;
    cout << "Количество слов: " << wordCount << endl;
    cout << "Количество предложений: " << sentenceCount << endl;

    return 0;
} 
