#include<iostream>
using namespace std;

template <typename M>
M add(M a,M b)
{
	return a+b;
}

int main()
{
	cout<<"\nadd using integer type : "<<add<int>(10,20);
	cout<<"\nadd using float type : "<<add<float>(45.54f,65.98f);
	cout<<"\nstring concatenate : "<<add<string>("mann","dave");
	return 0;
}