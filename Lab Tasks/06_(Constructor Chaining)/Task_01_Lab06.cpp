#include <iostream>
using namespace std;

class Product {
public:
    string name;
    float price;

    Product(string n, float p) {
        name = n;
        price = p;
    }
};

class Electronics : public Product {
public:
    int warrantyYears;

    Electronics(string n, float p, int w)
        : Product(n, p)   // constructor chaining
    {
        warrantyYears = w;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Warranty: " << warrantyYears << " years" << endl;
    }
};

int main() {
    Electronics e1("Laptop", 1200.5, 2);
    e1.display();
    return 0;
}
