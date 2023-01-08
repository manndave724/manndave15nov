#include<iostream>
using namespace std;

class a 
{
	
	public:
		int a;
		
		void geta()
		{
			cout<<"\nenter a :";
			cin>>a;
			
		}
		
		void puta()
		{
			cout<<"a = "<<a;
			
		}
		
};
class B : public A
{
	public :
		int b;
		
		void getB()
		{
			cout<<"\nEnter B : ";
			cin>>b;
			
		}
		
		void putB()
		{
			cout<<"B = "<<b;	
		}		
		
};

class c 
{
	
	public:
		int c;
		
		void getc()
		{
			cout<<"\nenter c :";
			cin>>c;
			
		}
		
		void putc()
		{
			cout<<"c = "<<c;
			
		}


int main ()
{
	c obj2;
	obj2.getA();
	obj2.getB();
	obj2.getc();
	
	obj2.putA();
	obj2.putB();
	obj2.putc();
	
	return 0;
	
}