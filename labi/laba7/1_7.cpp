#include <iostream>

using namespace std;

int main()
{
   int a;
   cout << "Введите а: ";
   cin >> a;
   int b;
   cout << "Введите b: ";
   cin >> b;
   
   int *ptr_a = &a;
   int *ptr_b = &b;
   
   if (*ptr_a > *ptr_b) {
       *ptr_a *= 2;
       cout << "a увеличено в 2 раза" << *ptr_a << endl;
   } else {
       *ptr_b /= 2;
       cout << "b уменьшено в 2 раза: " << *ptr_b << endl;
   }

    return 0;
}
