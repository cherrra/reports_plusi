//2 вариант
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = 0.1, b = 1.2, h = 0.1;
    double x, y;

    for (x = a; x <= b; x += h) {
        y = 0;
        for (int n = 0; n <= 20; n++) {
            y += pow(2*x, n) / (n+1);
        }
cout<< "x = " << x << ", y = " << y <<endl;
}

return 0;
}
