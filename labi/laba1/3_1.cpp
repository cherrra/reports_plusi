#include <iostream>
#include <cmath>

using namespace std;

int main() {
 double a = 0, b = 0, s = 0, x = 3.74e-2, y = -0.825, z = 0.16e2;
    a = (1 + pow(sin(x + y), 2)) / (abs(x - (2 * y)) / (1 + (pow(x, 2)) * (pow(y, 2))));
    b = a * pow(x, abs(y));
    s = b + pow(cos(atan(1 / z)), 2);
cout<< "S = " << s;
    return 0;
}
