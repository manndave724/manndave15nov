#include<iostream>
using namespace std;

class method{

	public:
		
		void common()
		{
			int a = 3,b=6;
			cout<<"\naddition is "<<(a+b);
		}
		
		void common(int a)
		{
			if(a%2==0)
			{
				cout<<"\nit is even.";
			}
			else
			{
				cout<<"\nit is odd. ";
			}
		}
			void common(int a,int b)
			{
				cout<<"\nmultiplication is.";
				
			}
			
		
		
};


int main()
{
	method md;
	md.common();
	md.common(8);
	md.common();
	md.common(87,19);
	
} 