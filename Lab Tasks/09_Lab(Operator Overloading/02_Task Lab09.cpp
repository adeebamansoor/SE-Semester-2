#include <iostream>
using namespace std;

// Base Class
class Employee {
public:
    virtual double calculateSalary() {
        cout << "Base Employee salary calculation called." << endl;
        return 0;
    }

    virtual ~Employee() {}
};

// Derived Class 1
class PermanentEmployee : public Employee {
private:
    double basicSalary;
    double bonus;

public:
    PermanentEmployee(double bs, double b) {
        basicSalary = bs;
        bonus = b;
    }

    double calculateSalary() override {
        return basicSalary + bonus;
    }
};

// Derived Class 2
class ContractEmployee : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    ContractEmployee(double hr, int hw) {
        hourlyRate = hr;
        hoursWorked = hw;
    }

    double calculateSalary() override {
        return hourlyRate * hoursWorked;
    }
};

int main() {

    PermanentEmployee p1(40000, 5000);
    ContractEmployee c1(800, 30);

    Employee* emp;

    // Permanent Employee
    emp = &p1;
    cout << "Permanent Employee Salary = "
         << emp->calculateSalary() << endl;

    // Contract Employee
    emp = &c1;
    cout << "Contract Employee Salary = "
         << emp->calculateSalary() << endl;

    return 0;
}
