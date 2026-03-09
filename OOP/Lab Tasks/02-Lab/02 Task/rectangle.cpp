#include "Rectangle.h"

int main()
{
    Rectangle r;
    r.setDimensions();
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
    return 0;
}
