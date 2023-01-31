#include<iostream>
using namespace std;

class a{
	public:
		void friends()
		{
			cout<<"\njoin class online fast.";
		}
};

class b : virtual public a{
	
};

class c : virtual public a{
	
};

class d : virtual public b,public c{
	
};

int main()
{
	d obj;
	obj.friends();
	return 0;
}