#include <iostream>
using namespace std;

struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo() {
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;   // structure variable

    // Assign values
    s1.firstName = "Ali";
    s1.lastName = "Khan";
    s1.rollNumber = 101;
    s1.marks = 85.5;

    // Call function
    s1.displayStudentInfo();

    return 0;
}
