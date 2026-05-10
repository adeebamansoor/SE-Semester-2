#include <iostream>
using namespace std;

class person{
	public:
		
		string name;
		int age;
		
	public:
		
		void input()
		{
			cout <<"Enter Name : "<<endl;
			cin>>name;
			cout<<"Enter Age : "<<endl;
			cin>>age;
			
		}
		
		void display_person_info()
		{
			cout<<"   Info   "<<endl ;
			cout<<"Name : "<<name<<endl;
		    cout<<"Age : "<<age<<endl;
		}
};

class Employee:public person{
	public:
		int employee_id;
		
	public:
		void input(){
			cout<<"Enter Employee-ID : "<<endl;
			cin>>employee_id;
		
		}  
		
			void display_employee_info(){
				cout<<"Employee ID : "<<employee_id<<endl;
			}
		
};

class Manager:public Employee{
	public:
	     string department;
		
	public:
		void input(){
			person::input();
			Employee::input();
			cout<<"Enter Department Name : "<<endl;
			cin>>department;
		
		}  
		
			void display_manager_info(){
				person::display_person_info();
				Employee::display_employee_info();
				cout<<"Department  : "<< department<<endl;
			}
	
};

int main()
{
	Manager m;
	m.input();
	m.display_manager_info();
	
	
	return 0;
}
