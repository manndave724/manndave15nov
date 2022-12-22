#include<stdio.h>

void add(int a,int b)
{
	printf("\naddition : %d",(a+b));
}

void main ()
{
	int a,b;
	printf("\nEnter A, B :n ");
	scanf("%d%d",&a,&b);
	add(a,b);
	
}