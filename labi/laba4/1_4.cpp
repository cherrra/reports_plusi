#include <iostream>
#include <string>
using namespace std;

int countSentences(const string& text) {
    int count = 0;
    for (char c : text) {
        if (c == '.' || c == '!' || c == '?') {
            count++;
        }
    }
    return count;
}

int main() {
    string text1, text2;
    cout << "Введите первый текст: ";
    getline(cin, text1);
    cout << "Введите второй текст: ";
    getline(cin, text2);

    int sentences1 = countSentences(text1);
    int sentences2 = countSentences(text2);

    cout << "Кол-во предложений в 1 тексте: " << sentences1 << endl;
    cout << "Кол-во предложений во 2 тексте: " << sentences2 << endl;

    return 0;
}
