#include <iostream>
using namespace std;

class BankAccount{
	private:
		int accountnumber;
		string accountholder;
		int balance;
		
		public:
			BankAccount(int a,string b,int c)
			{
				accountnumber=a;
				accountholder=b;
				balance=c;
				
			}
			    void showAccountDetails(){
				cout<<"Account Number : "<<accountnumber<<endl;
				cout<<"Account Holder : "<<accountholder<<endl;
				cout<<"Balance: "<<balance<<endl;
			}
};

int main()
{
    BankAccount x(12345,"Adeeba",15000);
     x.showAccountDetails();
	return 0;
}
