#ifndef VOTER_H
#define VOTER_H

#include <iostream>
using namespace std;

class Voter
{
private:
    string name;
    int age;

public:
    void setData()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    bool isEligible() { return age > 18; }
};

#endif
