#include <iostream>
#include <fstream>
#include <limits>
using namespace std;

int main() {
    ifstream file("f.txt"); 

    double max_value = numeric_limits<double>::lowest();
    double min_value_even = numeric_limits<double>::max();
    double max_abs_value_odd = 0;

    double value;
    int component_number = 1;

    while (file >> value) {
        if (value > max_value) {
            max_value = value;
        }

        if (component_number % 2 == 0 && value < min_value_even) {
            min_value_even = value;
        }

        if (component_number % 2 == 1 && abs(value) > max_abs_value_odd) {
            max_abs_value_odd = abs(value);
        }

        component_number++;
    }

    file.close();

    file.open("f.txt"); 
    double first_value, last_value;

    file >> first_value;
    while (file >> value) {
        last_value = value;
    }

    file.close();

    double sum_max_min = max_value + min_value_even;
    double diff_first_last = first_value - last_value;

    cout << "Наибольшее значение компонентов файла: " << max_value << endl;
    cout << "Наименьшее значение компонентов с четными номерами: " << min_value_even << endl;
    cout << "Наибольшее значение модуля компонентов с нечетными номерами: " << max_abs_value_odd << endl;
    cout << "Сумма наибольшего и наименьшего значений компонентов файла: " << sum_max_min << endl;
    cout << "Разность первой и последней компоненты файла: " << diff_first_last << endl;

    return 0;
}
