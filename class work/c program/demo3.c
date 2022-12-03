#include<stdio.h>

void main()
{
	int a,b,choice;
	printf("\n\t\tchoice calculator");
	
	printf("\n enter number a: ");
	scanf("%d",&a);
	printf("\n enter number b: ");
	scanf("%d",&b);
	printf("\nenter your choice");
	scanf("%d",&choice);
	printf("\nenter1 for addition");
	printf("\nenter2 for subtraction");
	printf("\nenter3 for multiplication");
	printf("\nenter4 for division");
	
	
	if(choice==1)
	{
		printf("\naddition:%d",(a+b));
	}
	else if(choice==2)
	{
		printf("\nsubtraction:%d",(a-b));
	}
	else if(choice==3)
	{
		printf("\nmultiplication:%d",(a*b));
	}
	else if(choice==4)
	{
		printf("\ndivison:%.2f",(float)a/b);
	}
	else 
	{
		printf("\n\t\tInvalid Input");
	}
	
	
	
}

	
	
 
	
	