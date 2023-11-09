#include <iostream>
#include <string>
#include "Buy.h"

using namespace std;


Buy::Buy() {
	sum = 0;
	sum_price = 0;
	sum_weight = 0;
}


void Buy::setSum(const int count) {
	sum = count;
	sum_price = sum * Buy::getPrice();
	sum_weight = Buy::getWeight() * sum;
}

int Buy::getSum() const {
	return Buy::sum;
}


double Buy::getSum_price() const {
	return Buy::sum_price;
}

double Buy::getSum_weight() const {
	return Buy::sum_weight;
}
