#include<iostream>
using namespace std;

template <typename T>
int swap_numbers(T x,T y)
{
	T t;
	t = x;
	x = y;
	y = t;
	return 0;
}

int main()
{
	int a, b;
	
	cout<<"\n\t\t||||||||||||||||||||     SWAP NUMBER USING TEMPLATES      |||||||||||||||||||||||||||\n";
	cout<<"\nenter number A : ";
	cin>>a;
	cout<<"\nenter number B : ";
	cin>>b;
	cout<<"\n::::::::::::::\t:::::::::::\t:::::::::::\tbefore  swap\t::::::::\t:::::::::\t:::::::::\t\n";
	cout<<"\n\t\tA : "<<a<<"\t\tB : "<<b;
	
	swap_numbers(a,b);
	cout<<"\n\n\n::::::\t:::::\t:::::::\tafter swap\t:::::::\t:::::::\t:::::::\t\n";
	cout<<"\n\t\tA : "<<a<<"\t\tB : "<<b;
	return 0;
}