#include<stdio.h>

void f1()
{
	printf("\nF1 called");
	
}

void f2()
{
	f1();
	printf("\nF2 Called");
	f2();
}



void main()
{
	f1();
	f2();
}