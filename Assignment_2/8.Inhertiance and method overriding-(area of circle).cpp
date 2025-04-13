#include <iostream>
#include <cmath>
using namespace std;

class Shape {
private:
    double area;

protected:
    void setArea(double a) {
        area = a;
    }

    virtual void calculateArea() = 0;

public:
    void displayArea() {
        cout << "Area: " << area << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
        calculateArea();
    }

protected:
    void calculateArea() override {
        double a = M_PI * radius * radius;
        setArea(a);
    }
};

int main() {
    double r;
    cout << "Enter radius of the circle: ";
    cin >> r;

    Circle c(r);
    cout << "\nCircle Details:" << endl;
    c.displayArea();

    return 0;
}
