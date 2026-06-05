#include <iostream>
using namespace std;

template <typename T>
void printTwice(T val) {
    cout << val << endl;
    cout << val << endl;
}

int main() {
    printTwice(10);          // int
    printTwice(5.5);         // double
    printTwice(string("Hi"));// string

    return 0;
}
