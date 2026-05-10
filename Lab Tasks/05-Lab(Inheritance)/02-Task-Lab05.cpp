#include <iostream>
using namespace std;

class Employee{
	public:
		
		string name;
		int salary;
		
	public:
		
		void input()
		{
			cout <<"Enter Name : "<<endl;
			cin>>name;
			cout<<"Enter Salary : "<<endl;
			cin>>salary;
			
		}
		
		void display_employee()
		{
			cout<<"   Info   "<<endl ;
			cout<<"Name : "<<name<<endl;
		    cout<<"Salary : "<<salary<<endl;
		}
};

class Developer:public Employee{
	public:
	      string programming_languange;
		
	public:
		void data(){
			Employee::input();
			cout<<"Enter Programming Languange  : "<<endl;
			cin>>programming_languange;
		
		}  
		
			void display_developer(){
				Employee::display_employee();
				cout<<"Programming Languange : "<<programming_languange<<endl;
			}
		
};

class Designer:public Employee{
	public:
	     string design_tool;
		
	public:
		     
			 
		     void info(){
			cout<<"Enter Design Tool : "<<endl;
			cin>>design_tool;
		
		}  
		
			void display_designer(){
				cout<<"Design Tool  : "<< design_tool<<endl;
			}
	
};

int main()
{
	Developer d1;
	d1.data();
	Designer m;
    m.info();
	d1.display_developer();
	m.display_designer();
	
	
	return 0;
}
