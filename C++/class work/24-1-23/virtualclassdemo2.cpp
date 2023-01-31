#include<iostream>
using namespace std;

class A{
	public:
		void bewafa()
		{
			cout<<"\n jay aene java do.";
		}
};

class B : virtual public A{
	
};

class C : virtual public A{
	
};

class D : public B,public C{
	
};

int main()
{
	D obj;
	obj.bewafa(); 
	return 0;
}