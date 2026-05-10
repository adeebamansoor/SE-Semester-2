#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual double area() = 0;   // pure virtual function
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double area() override {
        return length * width;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double area() override {
        return 3.1416 * radius * radius;
    }
};

int main() {

    Shape *s;   // base class pointer

    Rectangle r(5, 4);
    Circle c(3);

    // Rectangle area
    s = &r;
    cout << "Rectangle Area: " << s->area() << endl;

    // Circle area
    s = &c;
    cout << "Circle Area: " << s->area() << endl;

    return 0;
}
