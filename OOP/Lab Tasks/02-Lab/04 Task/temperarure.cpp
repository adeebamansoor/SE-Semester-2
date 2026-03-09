#include "Temperature.h"

int main()
{
    Temperature t;
    cout << "Enter Celsius: ";
    cin >> t.celsius;
    t.convert();
    t.display();
    return 0;
}
