#include<stdio.h>


int add(int a,int b)
{
	printf("\n in function A = %d,B  = %d",a,b);
	return a+b;
}

void maun ()
{
	int res;
	int a,b;
	printf("\nenter value of a :");
	scanf("%d",&a);
	printf("\nenter value of b : ");
	scanf("%d",&b);
	res=add(a,b);
    printf("\n%d",res);
}