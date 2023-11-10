#include <iostream>

using namespace std;

int main()
{
    float *ptr1 = new float;
    cout << "1 переменная: ";
    cin >> *ptr1;
    
    float *ptr2 = new float;
    cout << "2 переменная: ";
    cin >> *ptr2;
    
    *ptr1 *= 2;
    
    cout << "1 переменая увеличена в 2 раза: " << *ptr1 << endl;
    
    delete ptr1;
    delete ptr2;
    
    return 0;
}
