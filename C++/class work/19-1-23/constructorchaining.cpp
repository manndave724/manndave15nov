#include<iostream>
using namespace std;

class a{
	public:
		
		a()
		{
			cout<<"\n a's constructor called.";
			
		}
};

class b : public a{
	public:
	 
		b()
       {
			cout<<"\n b's constructor called.";
			
	   }
};

class c : public b{
	public:
		c()
		{
			cout<<"\n c's constructor called.";
			
		}
};

int main()
{
	c obj;
	return 0;
}