#include<stdio.h>

void main()
{
	int a,b,op;
	printf("\n\t-------------------------------choice calculator----------------------------");
	
	printf("\n\tEnter Number A : ");         
	scanf("%d",&a);                            //taking input 1 from  user 
	
	printf("\n\tEnter Number B : ");
	scanf("%d",&b);                             //taking input 2 from  user      
	
	printf("\n\tA = %d \n\tB = %d",a,b);       //showing  the inputs entered by user 
	
	printf("\n\t::::::::::::::::::::::::::::::MENU:::::::::::::::::::::::::::::::");    //showing the list oprations that can be done in the calculator
	printf("\n\tEnter Your Choice:");
	printf("\n\tEnter 1 for Addition.");
	printf("\n\tEnter 2 for subscription.");
	printf("\ntEnter  3 for multiplication.");
	printf("\ntEnter  4 for Division.");
	
	scanf("%d",&op);        //taking the input of which opration user wants to perform 
	
	printf("\n\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\n\t\xB2\t\t          \xB2");
	
	
	switch(op)
	{
		case 1 : printf("\n\t    Addition = %d    ",(a+b));
			break;
			
		case 2 : printf("\n\t    Subscripption = %d    ",(a-b));
			break;
			
		case 3 : printf("\n\t    Multiplication = %d    ",(a*b));
			break;
			
		case 4 : printf("\n\t    Division = %.2f ",((float)a+b));
			break;
			
		dafault :printf("\n\t  It is a consonent");
			break;			
			
	}
	printf("\n\t\xB2\t\t            \xB2");
	printf("\n\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
}