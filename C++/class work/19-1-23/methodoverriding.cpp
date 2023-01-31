#include<iostream>
using namespace std;

class a{
	public:
		
		a()
		{
			cout<<"\n a's constructor called.";
			
		}
		
		void show()
		{
			cout<<"\na's method called .";
		}
};

class b : public a{
	public:
	 
		b()
       {
			cout<<"\n b's constructor called.";
			
	   }
	   
	   void show()
	   {
	   		a::show();
	   		cout<<"\nb's method called .";
	   }
};

class c : public b{
	public:
		c()
		{
			cout<<"\n c's constructor called.";
			
		}
		
		void show()
		{
			b::show();
			"\nc's method called .";
			
		}
};

int main()
{
	c obj;
	obj.show();
	return 0;
}