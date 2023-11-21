#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Введите количество строк: ";
    cin >> n;
    cout << "Введите количество столбцов: ";
    cin >> m;

   
    int **a = new int*[n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
    }

    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    //создание массива для хранения произведений 
    int *proizvedenie = new int[m];
    for (int j = 0; j < m; j++) {
        proizvedenie[j] = 1; 
    }

    //вычисление произведений
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (a[i][j] > 0) {
                proizvedenie[j] *= a[i][j];
            }
        }
    }

    cout << "Произведения положительных элементов столбцов:" << endl;
    for (int j = 0; j < m; j++) {
        cout << "Столбец " << j + 1 << ": " << proizvedenie[j] << endl;
    }

    for (int i = 0; i < n; i++) {
        delete [] a[i];
    }
    
    delete [] a;
    delete [] proizvedenie;

    return 0;
}
