//8 вариант
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, s;
cout<< "Введите x и y через пробел ";
cin>> x >> y;

    if (x/y < 0) {
        s = pow((pow(x,2)+ y),3);
    } else if (x/y > 0) {
        s = log(abs(x/y)) + (x/y);
    } else {
        s = cbrt(abs(sin(y)));
}

cout<< "S = "<<s;

return 0;
}
