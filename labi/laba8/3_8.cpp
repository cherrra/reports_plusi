#include <iostream>
using namespace std;

struct Circle {
    float radius;
    struct {
        float x;
        float y;
    } center;
};

int main() {
    const int SIZE = 10;
    Circle circles[SIZE];

    // Ввод информации по 10 окружностям
    for (int i = 0; i < SIZE; i++) {
        cout << "Введите радиус окружности " << i+1 << ": ";
        cin >> circles[i].radius;

        cout << "Введите координату X центра окружности " << i+1 << ": ";
        cin >> circles[i].center.x;

        cout << "Введите координату Y центра окружности " << i+1 << ": ";
        cin >> circles[i].center.y;
    }

    Circle filteredCircles[SIZE]; // Массив для окружностей, центры которых лежат в 1-ой четверти
    int filteredCount = 0; // Счетчик заполненных окружностей в filteredCircles

    for (int i = 0; i < SIZE; i++) {
        if (circles[i].center.x > 0 && circles[i].center.y > 0) {
            filteredCircles[filteredCount] = circles[i];
            filteredCount++;
        }
    }

    // Вывод информации о выбранных окружностях
    cout << "Окружности, центры которых лежат в 1-ой четверти:" << endl;
    for (int i = 0; i < filteredCount; i++) {
        cout << "Окружность " << i+1 << ":" << endl;
        cout << "Радиус: " << filteredCircles[i].radius << endl;
        cout << "Координата X центра: " << filteredCircles[i].center.x << endl;
        cout << "Координата Y центра: " << filteredCircles[i].center.y << endl;
        cout << endl;
    }

    return 0;
}
