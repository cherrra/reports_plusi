#include <iostream>
using namespace std;

void sortDiagonal(int** a, int n) {
    // сортировка главной диагонали
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j][j] > a[j + 1][j + 1]) {
                int temp = a[j][j];
                a[j][j] = a[j + 1][j + 1];
                a[j + 1][j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Введите размерность массива: ";
    cin >> n;

    int** a = new int*[n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[n];
    }

    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    sortDiagonal(a, n);
    
    cout << "Отсортированный массив: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}
