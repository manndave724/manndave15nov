#include<iostream>
using namespace std;

class Distance{
	public:
		double feet,inches;
		
		Distance(double f,double i)
		{
			feet = f;
			inches = i;
		}
		
		Distance operator-()
		{
			feet = -feet;
			inches = -inches;
			return Distance(feet,inches);
		}
		
		void Display()
		{
			cout<<"\nfeet :"<<feet<<"\ninches : "<<inches;
		}
		
		
};

int main()
{
	Distance d1(6,-9);
	-d1;
	d1.Display();
	return 0;
}