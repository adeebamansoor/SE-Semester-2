#include <iostream>
using namespace std;

class Locker {
public:
    // Constructor
    Locker() {
        cout << "Locker allocated to customer." << endl;
    }

    // Destructor
    ~Locker() {
        cout << "Locker returned by customer." << endl;
    }
};

int main() {

    
    {
        Locker l;
    } 

    cout << "------" << endl;

    Locker *l2 = new Locker();

    delete l2;  

    return 0;
}
