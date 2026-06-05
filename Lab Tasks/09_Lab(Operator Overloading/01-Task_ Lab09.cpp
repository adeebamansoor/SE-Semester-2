#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance(int f = 0, int i = 0) {
        feet = f;
        inches = i;
    }

    // Overloading == operator
    bool operator==(const Distance& d) {
        return (feet == d.feet && inches == d.inches);
    }
};

int main() {
    Distance d1(5, 8);
    Distance d2(5, 8);

    if (d1 == d2)
        cout << "Distances are Equal" << endl;
    else
        cout << "Distances are Not Equal" << endl;

    return 0;
}
