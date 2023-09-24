#include <iostream>

using namespace std;

int main()
{
    int month, year;
    cout<<"Введите номер месяца и год: ";
    cin>>month>>year;
    switch(month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: cout<<"31\n"; break;
        case 2:
         if((year%400==0 || year%100!=0)&& year%4==0)
            cout<<"29\n";
        else
            cout<<"28\n";
        break;
    default: cout<<"30\n";
    }

    return 0;
}

