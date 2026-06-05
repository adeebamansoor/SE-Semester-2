#include <iostream>
using namespace std;

template <typename T>
T findMin(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    cout << findMin(10, 20) << endl;
    cout << findMin(5.5, 2.3) << endl;
    cout << findMin('a', 'z') << endl;

    return 0;
}
