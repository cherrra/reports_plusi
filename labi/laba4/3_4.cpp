#include <iostream>
#include <string>

using namespace std;

int main() {
    string stroka = "Эх, Вот Бы Домой.";

    string result = "";
    for (char c : stroka) {
        if (c != ' ' && c != '.' && c != ',') {
            result += c;
        }
    }

    cout << result << endl;

    return 0;
}
