#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    string name;

public:
    static string companyName;

    Employee(int i, string n) {
        id = i;
        name = n;
    }

    void display() {
        cout << id << " - " << name 
             << " works in " << companyName << endl;
    }

    static void showCompany() {
        cout << "Company Name: " << companyName << endl;
    }
};

string Employee::companyName = "Tech Solutions";

int main() {
    Employee e1(1, "Ali");
    Employee e2(2, "Sara");

    e1.display();
    e2.display();

    Employee::showCompany();

    return 0;
}
