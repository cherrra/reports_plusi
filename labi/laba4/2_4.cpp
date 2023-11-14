#include <iostream>
#include <string>
using namespace std;

int main() {
    string word1, word2, word3;
    cout << "Введите первое слово: ";
    cin >> word1;
    cout << "Введите второе слово: ";
    cin >> word2;
    cout << "Введите третье слово: ";
    cin >> word3;

    string result = "";
    result += word1[word1.length() - 1];
    result += word2[word2.length() - 1];
    result += word3[word3.length() - 1];

    cout << result << endl;

    return 0;
}
