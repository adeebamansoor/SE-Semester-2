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
			cout<<"  \n Student Info   "<<endl ;
			cout<<"Name : "<<name<<endl;
		    cout<<"Age : "<<age<<endl;
		}
};

class Student:public person{
	public:
		int id;
		
		void data(){
			cout<<"Enter ID : "<<endl;
			cin>>id;
		
		}  
		
			void display_student_info(){
				cout<<"student ID : "<<id<<endl;
			}
		
};

int main()
{
	Student s;
	s.input();
	s.data();
	s.display_person_info();
	s.display_student_info();
		
	
	
	
	return 0;
}
