#include<iostream>
using namespace std;

template <typename K>
K add(K a,K b)
{
	return a+b;
}

int main()
{
	cout<<"\nadd using integer type : "<<add<int>(20,40);
	cout<<"\nadd using float type : "<<add<float>(49.85f,89.49f);
	cout<<"\nstring concatenate : "<<add<string>("kuldeep","gurjar");
	return 0;
}