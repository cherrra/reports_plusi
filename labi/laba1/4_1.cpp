#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double s=0, x = 0.4e4, y = -0.875, z = -0.475e-3;
     s = (pow(abs(cos(x) - cos(y)), 1 + 2 * pow(sin(y), 2))) * (1 + z + pow(z, 2) / 2 + pow(z, 3) / 3 + pow(z, 4) / 4);
cout<< "S = "<<s;
return 0;
}
