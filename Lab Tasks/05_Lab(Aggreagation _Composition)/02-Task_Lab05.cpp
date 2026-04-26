#include <iostream>
using namespace std;

// Display class
class Display {
private:
    int lastResult;

public:
    void show(int result) {
        lastResult = result;
        cout << "Result: " << lastResult << endl;
    }
};

// Calculator class (owns Display)
class Calculator {
private:
    Display d;   // composition (object inside object)

public:
    int add(int a, int b) {
        int result = a + b;
        d.show(result);   // delegation to Display
        return result;
    }

    int multiply(int a, int b) {
        int result = a * b;
        d.show(result);   // delegation to Display
        return result;
    }
};

int main() {
    Calculator c;

    c.add(5, 3);
    c.multiply(4, 2);

    return 0;
}
