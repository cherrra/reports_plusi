#include <iostream>
using namespace std;

//функция для сортировки массива по возрастанию
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) { 
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // меняем местами элементы, если они не упорядочены
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
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

    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    //упорядоч последнюю строку массива по возрастанию
    sortArray(a[n - 1], n);

    cout << "Отсортированный массив:\n";
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
