#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    double balance;

public:
    static int totalAccounts;

    BankAccount(string n, double b) {
        name = n;
        balance = b;
        totalAccounts++;
    }

    void display() {
        cout << name << " has balance " << balance << endl;
    }

    static void showTotalAccounts() {
        cout << "Total Accounts Created: " << totalAccounts << endl;
    }
};

int BankAccount::totalAccounts = 0;

int main() {
    BankAccount a1("Ali", 1000);
    BankAccount a2("Sara", 2000);
    BankAccount a3("Ahmed", 3000);

    a1.display();
    a2.display();
    a3.display();

    BankAccount::showTotalAccounts();

    return 0;
}
