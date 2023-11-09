#include "Check.cpp"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Введите кол-во продуктов: ";
    int numProducts;
    cin >> numProducts;

    Check *products = new Check[numProducts];

    for (int i = 0; i < numProducts; i++)
    {
        string name;
        double price;
        double weight;
        int sum;

        cout << "Введите название: ";
        cin >> name;
        cout << "Введите цену: ";
        cin >> price;
        cout << "Введите вес: ";
        cin >> weight;
        cout << "Введите кол-во товаров: ";
        cin >> sum;

        products[i].setName(name);
        products[i].setPrice(price);
        products[i].setWeight(weight);
        products[i].setSum(sum);

        cout << "\n";
    }

    cout << setw(20) << "название" << setw(20) << "цена" << setw(20) << "вес" << setw(20) << "кол-во" << setw(30) 
    << "итоговая цена" << setw(30) << "итоговый вес" << endl;
    for (int j = 0; j < numProducts; j++)
    {
        products[j].printInfo();
    }
}
