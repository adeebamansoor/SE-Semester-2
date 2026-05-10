#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // Create and write into file
    ofstream file("students.txt");

    file << "Ali 101" << endl;
    file << "Ahmed 102" << endl;
    file << "Sara 103" << endl;

    file.close();

    cout << "Student data written successfully.\n" << endl;

    // Open file in read mode
    ifstream readFile("students.txt");

    string name;
    int rollNo;

    cout << "Student Details:\n" << endl;

    // Read data from file
    while (readFile >> name >> rollNo) {

        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << endl;
    }

    readFile.close();

    return 0;
}

