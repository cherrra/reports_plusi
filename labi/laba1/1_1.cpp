#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a=0, b=0, s=0, x=14.26, y=-1.22, z=3.5e-2;
    a = (2.*cos(x-(2./3.)))/((1./2.)+(pow(sin(y),2)));
    b = 1.+((pow(z, 2)))/(3 - (pow(z, 2)/5));
    s = a*b;
cout<<"S="<<s;

    return 0;
}
