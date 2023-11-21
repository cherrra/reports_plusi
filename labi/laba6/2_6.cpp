#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    int** a = new int*[n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[n];
    }

    cout << "Введите элементы:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    //ищем мин элемент побочной диагонали
    int minElement = a[1][n-2];
    int minRow = 1;
    int minCol = n-2;
    for (int i = 2; i < n; i++) {
        for (int j = n - i; j < n; j++) {
            if (a[i][j] < minElement) {
                minElement = a[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }
 
    cout << "Индекс мин элемента побочной диагонали: (" << minRow << ", " << minCol << ")" << endl;

    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}
