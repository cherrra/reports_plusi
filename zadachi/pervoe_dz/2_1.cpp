//треугольник паскаля

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите кол-во строк треугольника Паскаля: ";
    cin >> n;

    for (int line = 0; line < n; line++) {
        int coef = 1;
        for (int i = 0; i <= line; i++) {
            cout << coef << " ";
            coef = coef * (line - i) / (i + 1);
        }
        cout << endl;
    }

    return 0;
}
