#include <iostream>
using namespace std;

class Employee{
	private:
		int id;
		string name;
		int salary;
		
		public:
			Employee()
			{ 
			id=0;
			name= "not assigned";
			salary=0;
			}
			void display_details(){
				cout<<"ID : "<<id<<endl;
				cout<<"Name : "<<name<<endl;
				cout<<"Salary : "<<salary<<endl;
			}
};

int main()
{
	Employee e;
	e.display_details();
	return 0;
}
