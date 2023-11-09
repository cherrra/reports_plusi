#include <iostream>
#include <string>
#include "Product.h"
using namespace std;

class Buy : public Product { //открытое наследование

	private:
		int sum; //кол-во купл товара 
		double sum_price; //цена за весь товар
		double sum_weight; //общий вес

	public:
		Buy(); 

		//инкапсуляция
		void setSum(const int);

		int getSum() const;

		double getSum_price() const;

		double getSum_weight() const;

};
