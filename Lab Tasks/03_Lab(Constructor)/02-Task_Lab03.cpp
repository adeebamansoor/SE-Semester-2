#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // 1. Default constructor
    Rectangle() {
        length = 1.0;
        width = 1.0;
    }

    // 2. Parameterized constructor
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    // 3. Single parameter constructor (square)
    Rectangle(float side) {
        length = side;
        width = side;
    }

    float area() {
        return length * width;
    }

    void display() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << area() << endl;
        cout << "-------------------" << endl;
    }
};

int main() {
    Rectangle r1;          // default
    Rectangle r2(4, 5);    // parameterized
    Rectangle r3(6);       // square

    r1.display();
    r2.display();
    r3.display();

    return 0;
}
