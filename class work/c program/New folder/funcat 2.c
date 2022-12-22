#include<stdio.h>

void work (int a)
{
	printf("In function a= %d",a);
	if(a%2==0)
	{
		printf("\n %d is Even ",a);
		
	}
	else 
	{
		printf("\n %d is odd ",a);
	}
	
}


void main ()
{
	int a;
	printf("\nEnter value : ");
	scanf("%d",&a);
	work(a);
}
