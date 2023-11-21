#include <iostream>
#include <string>
using namespace std;

int main() {
    const int numCities = 10;
    string cities[numCities];

cout << "Введите названия городов:\n";
for (int i = 0; i < numCities; i++) {
    cin >> cities[i];
}

int minLen = cities[0].length(); // предполагаем что первый город имеет минимальное число букв
int minIndex = 0; //индекс города с минимальным числом букв

for (int i = 1; i < numCities; i++) {
    int cityLen = cities[i].length();
    if (cityLen < minLen) {
        minLen = cityLen;
        minIndex = i;
}
}

cout << "Номер города с минимальным числом букв: " << (minIndex + 1) << endl;

return 0;
}
