#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Введите размер 1 массива: ";
    cin >> n;
    int* x = new int[n];
    cout << "Введите элемент 1 массива: ";
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    
    int m;
    cout << "Введите размер 2 массива: ";
    cin >> m;
    int* y = new int[m];
    cout << "Введите элемент 2 массива: ";
    for (int i = 0; i < m; i++) {
        cin >> y[i];
    }

    int count = 0;
    for (int i = 0; i < m; i++) {
        if (y[i] == x[1]) {
            count++;
        }
    }

    cout << "Второй элемент первого массива встречается " << count << " раз(а) во втором массиве " << endl;

    delete[] x;
    delete[] y;
    
    return 0;
}
