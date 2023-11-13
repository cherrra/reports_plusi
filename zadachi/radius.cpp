#include <iostream>
using namespace std;

class Radius {
private:
    double radius;

public:
    void setRadius(double r) {
        radius = r;
    }

    double getRadius() {
        return radius;
    }

    friend double getLength(Radius r);
    friend double getArea(Radius r);
    friend class Value;
};

double getLength(Radius r) {
    return 2 * 3.14 * r.radius;
}

double getArea(Radius r) {
    return 3.14 * r.radius * r.radius;
}

class Value {
public:
    static double getVolume(Radius r) {
        return (4.0 / 3.0) * 3.14 * r.radius * r.radius * r.radius;
    }
};

int main() {
    Radius r;
    double inputRadius;
    cout << "Введите радиус: ";
    cin >> inputRadius;
    r.setRadius(inputRadius);
    
    cout << "Длина окрудности с радиусом " << r.getRadius() << ": " << getLength(r) << endl;
    cout << "Площадь окружности с радиусом " << r.getRadius() << ": " << getArea(r) << endl;
    cout << "Объем окружности с радиусом " << r.getRadius() << ": " << Value::getVolume(r) << endl;
    return 0;
}
