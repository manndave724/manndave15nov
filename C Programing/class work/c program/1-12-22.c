#include<stdio.h>

/*
    &&-> reaturns true if both condition is true.
    ||-> returns true iif either one condition is truen.
    !-> returns the oppsite 
*/

void main()
{
	
		int a=2,b=0;
	
	if(a&&b)  //AND oprator
	{
		printf("\nLine 1 is True.");
	}
	else
	{
		printf("\nLine 1 is False ");
	}
	b=10,a=0;
	if(a||b)    //OR oprator 
	{
		printf("\nLine 2 is True.");
	}
	else
	{
		printf("\nLine 2 is False ");
	}
	a=10,b=2;
	if(!(a&&b))   //Not oprator 
	{
	    printf("\nLine 1 is True. ");	
	}
	else
	{
		printf("\nLine 1 is False ");
	}
	
}