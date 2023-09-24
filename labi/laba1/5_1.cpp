#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double s=0, a=0, b=0, x=-15.246, y=4.642e-2, z=21;
    a=log(pow(y, -sqrt(abs(x))))*(x-(y/2));
    b=pow(sin(atan(z)),2);
    s=a+b;
    cout<<"S="<<s;
    return 0;
}
