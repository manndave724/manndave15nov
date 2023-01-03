#include<iostream>
using namespace std;

class student;
{
	public;
		int eid;
		string name;
		float salary;
		
		void getdetails()
		{
			cout<<"\nenter id : ";
			cin>>eid;
			fflush(stdin);
			cout<<"\nenter name : ";
			//cin>>name;
			getline (cin,name);
			cout<<"\nenter salary : ";
			cin>>salary;
				
		} 
		
		void showdetails()
		{
			cout<<"\nid : "<<eid;
			cout<<"\nname : "<<name;
			cout<<"\nsalary : "<<salary;
			
		}
		
}