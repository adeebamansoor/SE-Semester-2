#include <iostream>
using namespace std;

class BankAccount
{
private:
    float balance;

public:
    BankAccount()  // constructor to initialize balance
    {
        balance = 100;
    }

    void deposit()
    {
        float amount;
        cout<<"Enter amount to deposit: ";
        cin>>amount;
        if(amount > 0)
        {
            balance += amount;
            cout<<"Deposit successful. New balance: "<<balance<<endl;
        }
        else
        {
            cout<<"Invalid deposit amount"<<endl;
        }
    }

    void withdraw()
    {
        float amount;
        cout<<"Enter amount to withdraw: ";
        cin>>amount;
        if(amount > balance)
        {
            cout<<"Insufficient balance"<<endl;
        }
        else if(amount <= 0)
        {
            cout<<"Invalid withdrawal amount"<<endl;
        }
        else
        {
            balance -= amount;
            cout<<"Withdrawal successful. New balance: "<<balance<<endl;
        }
    }

    void checkBalance()
    {
        cout<<"Current balance: "<<balance<<endl;
    }
};

int main()
{
    BankAccount account;
    int choice;

    do
    {
        cout<<"\n--- Bank Menu ---\n";
        cout<<"1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1: account.deposit(); break;
            case 2: account.withdraw(); break;
            case 3: account.checkBalance(); break;
            case 4: cout<<"Exiting program..."<<endl; break;
            default: cout<<"Invalid choice! Please try again."<<endl;
        }
    } while(choice != 4);

    return 0;
}
