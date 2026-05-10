#include <iostream>
using namespace std;

class Display {
public:
    void showResult() {
        cout << "Addition: " << result << endl;
        cout << "Multiplication: " << output << endl;
    }
};

class Calculator {
private:
    Display display;   //  composition

public:
    void calculate(int a, int b) {
        int result = a + b;
        int output = a * b;

        
};

int main() {
    Calculator calc;
    calc.calculate(5, 3);
    Display d1;
    d1.showResult();

    return 0;
}
