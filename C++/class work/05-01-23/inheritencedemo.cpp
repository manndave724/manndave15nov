#include<iostream>
using namespace std;

class a 
{
	public:
		int a;
		
		void getA()
		{
			cout<<"\nEnter A : ";
			cin >>a;
		}
		
		void putA()
		{
			cout<<"A = "<<a;
			
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

int main ()
{
	B obj2;
	obj2.getA();
	obj2.getB();
	obj2.putA();
	obj2.putB();
	obj2.
	return 0;
	
}
  







