#include <iostream>
using namespace std;

// Calculator class (shared object)
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int multiply(int a, int b) {
        return a * b;
    }
};

// Student class (uses Calculator via pointer)
class Student {
public:
    Calculator *calc;   // pointer (aggregation)

    // constructor to store address
    Student(Calculator *c) {
        calc = c;
    }

    void showAdd(int a, int b) {
        cout << "Addition: " << calc->add(a, b) << endl;
    }

    void showMultiply(int a, int b) {
        cout << "Multiplication: " << calc->multiply(a, b) << endl;
    }
};

int main() {
    // Step 1: create calculator object
    Calculator c1;

    // Step 2: pass its address to students
    Student s1(&c1);
    Student s2(&c1);

    // Step 3: use calculator through pointer
    s1.showAdd(2, 3);        // calls add via ->
    s2.showMultiply(4, 5);   // calls multiply via ->

    return 0;
}
