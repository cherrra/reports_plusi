/* Создать структуру маршрут с полями: пункт отправления, время отправления, вид транспорта, пункт прибытия, время прибытия, цена поездки. 

1. Пользователь вручную вводит информацию о маршрутах, заранее не знаю, сколько маршрутов он введет.

2. Вывести всю введенную информацию в табличном виде на экран.

3. После вывода информации предложить пользователю ввести тип транспорта. После чего выдать информацию о маршрутах, по которым ездит данный тип транспорта. */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Route {
    string departure;
    string departureTime;
    string transportType;
    string destination;
    string arrivalTime;
    double price;
};

int main() {
    vector<Route> routes;
    Route route;

    // Ввод информации о маршрутах
    char choice = 'y';
    while (choice == 'y') {
        cout << "Введите отправление: ";
        cin >> route.departure;
        cout << "Введите время отправления: ";
        cin >> route.departureTime;
        cout << "Введите транспорт: ";
        cin >> route.transportType;
        cout << "Введите пункт назначения: ";
        cin >> route.destination;
        cout << "Введите время прибытия: ";
        cin >> route.arrivalTime;
        cout << "Введите цену: ";
        cin >> route.price;

        routes.push_back(route);

        cout << "Продолжить? (y/n): ";
        cin >> choice;
    }

    // вывод информации о маршрутах
    cout << "\nМаршруты:\n";
    cout << "Отправления\tВремя отправления\tТранспорт\tМесто назначения\tВремя прибытия\tЦена\n";
    for (int i = 0; i < routes.size(); i++) {
        cout << routes[i].departure << "\t\t" << routes[i].departureTime << "\t\t" << routes[i].transportType << "\t\t"
             << routes[i].destination << "\t\t" << routes[i].arrivalTime << "\t\t" << routes[i].price << endl;
    }

    // поиск маршрутов по типу транспорта
    string transport;
    cout << "\nВведите транспорт для поиска: ";
    cin >> transport;

    cout << "\nМаршруты на " << transport << ":\n";
    cout << "Отправления\tВремя отправления\tТранспорт\tМесто назначения\tВремя прибытия\tЦена\n";
    for (int i = 0; i < routes.size(); i++) {
        if (routes[i].transportType == transport) {
            cout << routes[i].departure << "\t\t" << routes[i].departureTime << "\t\t" << routes[i].transportType << "\t\t"
                 << routes[i].destination << "\t\t" << routes[i].arrivalTime << "\t\t" << routes[i].price << endl;
        }
    }

    return 0;
}
