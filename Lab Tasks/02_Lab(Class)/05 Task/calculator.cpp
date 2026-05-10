#include "Calculator.h"

int main()
{
    Calculator c;
    c.setNumbers();
    int choice;
    cout << "Choose Operation: 1.Add 2.Subtract 3.Multiply 4.Divide\n";
    cin >> choice;

    switch(choice)
    {
        case 1: cout << "Result: " << c.add() << endl; break;
        case 2: cout << "Result: " << c.subtract() << endl; break;
        case 3: cout << "Result: " << c.multiply() << endl; break;
        case 4: cout << "Result: " << c.divide() << endl; break;
        default: cout << "Invalid choice\n";
    }
    return 0;
}
