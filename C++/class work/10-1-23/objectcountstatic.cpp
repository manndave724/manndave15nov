#include<iostream>
using namespace std;

class sample{
	public:
		static int objects;
		
		sample()
		{
			cout<<"\ndefualt costructor called.";
				objects++;
		}
};

int sample :: objects = 0;

int main()
{
	sample s1,s2,s3,s4,s5,s6,s7,s8,s9;
	cout<<"\nobjects count  : "<<s1.objects;
	return 0;
		
}