#include<iostream>
using namespace std;

class scopedemo{
	public:
		string name,adderess="veraval",district="somnath";
		int age=20;
		
		void getname();
		void deatils();
		
};

void scopedemo::getname()
{
	cout<<"\nenter name : ";
	getline(cin,name);
}

void scopedemo::deatils()
{
	cout<<"\nname : "<<name;
	cout<<"\nage : "<<age;
	cout<<"\nadderess : "<<adderess;
	cout<<"\ndistrict : "<<district;
}

int main()
{
	scopedemo s1;
	s1.getname();
	s1.deatils();
	return 0;
}
