#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    int* a = new int[n];
    int* b = new int[n];
    int b_index = 0;

    cout << "Введите элемент массива: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > 0) {
            b[b_index] = a[i] * 3;
            b_index++;
        }
    }

    //сортировка
    for (int i = 0; i < b_index - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < b_index; j++) {
            if (b[j] < b[min_index]) {
                min_index = j;
            }
        }
        int temp = b[i];
        b[i] = b[min_index];
        b[min_index] = temp;
    }

    cout << "Элементы, умноженные на 3 и по возрастанию: ";
    for (int i = 0; i < b_index; i++) {
        cout << b[i] << " ";
    }

    delete[] a;
    delete[] b;

    return 0;
}
