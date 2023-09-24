#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a=0, s=0, x=-4.5, y=0.75e-4, z=-0.845e2;
    a = (cbrt(9.+pow((x-y),2)))/(pow(x,2)+pow(y,2)+2.);
    s = a - (exp(abs(x-y)))*(pow(tan(z),3));
cout<<"S="<<s;

    return 0;
}

