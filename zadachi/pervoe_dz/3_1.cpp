//калькулятор простой

#include <iostream>
using namespace std;

int main() { 
    cout << "Введите два числа через пробел: ";
    double num1, num2;
    cin >> num1 >> num2;
    
    char operation;
    cout << "Введите операцию (+, -, *, /): ";
    cin >> operation;
    
    if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
        double result;
        if (operation == '+') {
            result = num1 + num2;
        } else if (operation == '-') {
            result = num1 - num2;
        } else if (operation == '*') {
            result = num1 * num2;
        } else {
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Делить на 0 нельзя((" << endl;
                return 1; 
            }
        }

        cout << "Результат: " << result << endl;
    } 
    return 0;
}
