#include<iostream>
using namespace std;

class sample
{
	public:
		string fname,lname;
		int age;
		
		sample()
		{
		
			cout<<"\nDeafult Constructor called.";
			
		}
		
		sample (string f,string l,int a)
		{
			cout<<"\nparamerterized constructor called.";
			fname = f;
			lname = l;
			age =a;
			
		}
		
		sample(const sample &obj)
		{
			cout<<"\n\ncpoy constructor called.";
			fname = obj.fname;
			lname =obj.lname;
			age = obj.age;
			
		}
				
		void display()
		{
			cout<<"\nFirst name:"<<fname<<"\nLast name:"<<lname<<"\nAge:"<<age;
			 
		}
		
};

int main()
{
	sample vivek,obj1("mann","dave",18);
	sample obj2("paresh","trivedi",48);
	obj1.display();
	obj2.display();
	sample obj3(obj1);
	obj3.display();
	return 0;
	
}







