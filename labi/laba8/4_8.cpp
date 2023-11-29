#include <iostream>
#include <algorithm>
using namespace std;

struct FlightSchedule {
    string destination;
    string departureTime;
    string arrivalTime;
    int duration;
    float ticketPrice;
};

int main() {
    FlightSchedule flights[10];
    for (int i = 0; i < 10; i++) {
        cout << "Введите место назначения: ";
        cin >> flights[i].destination;
        cout << "Введите время отправления: ";
        cin >> flights[i].departureTime;
        cout << "Введите время прибытия: ";
        cin >> flights[i].arrivalTime;
        cout << "Введите время полета: ";
        cin >> flights[i].duration;
        cout << "Введите стоимость: ";
        cin >> flights[i].ticketPrice;
};

    FlightSchedule filteredFlights[10];
    int count = 0;

    for (int i = 0; i < 10; i++) {
        if (flights[i].destination.find("A") != string::npos && flights[i].destination.find("A", flights[i].destination.find("A") + 1) != string::npos) {
            filteredFlights[count] = flights[i];
            count++;
        }
    }

    sort(filteredFlights, filteredFlights + count, [](const FlightSchedule& a, const FlightSchedule& b) {
        return a.destination < b.destination;
    });

    for (int i = 0; i < count; i++) {
        cout << "Место назначения: " << filteredFlights[i].destination << ", Время отправления: " << filteredFlights[i].departureTime << ", Время прибытия: " 
        << filteredFlights[i].arrivalTime <<", Время полета: " << filteredFlights[i].duration << ", Стоимость: " << filteredFlights[i].ticketPrice << endl;
    }

    return 0;

}
