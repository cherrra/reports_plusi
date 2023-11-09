#include <iostream>
#include <string>

using namespace std;


class Product {
    private:
        string name; //название 
    	double price; //цена 
    	double weight; //вес

    public:
	//конструкторы
    	Product() {};
    	Product(string names, double prices, double weights) {
    		name = names;
    		price = prices;
    		weight = weights;
    	}


	//инкапсуляция
	void setName(const string);

	const string getName() const;

	void setPrice(const double);

	double getPrice() const;

	void setWeight(const double);

	double getWeight() const;
};
