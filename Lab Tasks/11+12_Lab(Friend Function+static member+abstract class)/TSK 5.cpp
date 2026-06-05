#include <iostream>
using namespace std;

class HospitalStaff {
protected:
    string name;

public:
    HospitalStaff(string n) {
        name = n;
    }

    virtual void performDuty() = 0; // pure virtual function
};

class Doctor : public HospitalStaff {
public:
    Doctor(string n) : HospitalStaff(n) {}

    void performDuty() {
        cout << name << " is treating patients." << endl;
    }
};

class Nurse : public HospitalStaff {
public:
    Nurse(string n) : HospitalStaff(n) {}

    void performDuty() {
        cout << name << " is taking care of patients." << endl;
    }
};

class Receptionist : public HospitalStaff {
public:
    Receptionist(string n) : HospitalStaff(n) {}

    void performDuty() {
        cout << name << " is managing appointments." << endl;
    }
};

int main() {
    Doctor d("Dr. Ahmed");
    Nurse n("Fatima");
    Receptionist r("Ali");

    d.performDuty();
    n.performDuty();
    r.performDuty();

    return 0;
}
