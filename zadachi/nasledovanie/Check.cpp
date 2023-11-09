#include "Buy.h"
#include <iomanip>

using namespace std;

class Check : public Buy {
	public:
		void printProductInfo() {
			cout << "товар: " << Product::getName() << "цена: " << getPrice() << "вес: " << getWeight() << endl;
		}

		void printBuyInfo() {
			cout << "кол-во товара: " << getSum() << "итоговая сумма: " << getSum_price() << "итоговый вес: " << getSum_weight();
		}

		void printInfo() {
			cout << setw(10) << getName() << setw(15) << getPrice() << setw(15) << getWeight() << setw(15) 
			<< getSum() << setw(20) << getSum_price() << setw(17) << getSum_weight() << endl;
		}
};	
