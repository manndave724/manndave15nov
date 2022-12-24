#include<stdio.h>


/*
	switch(condition)
	{
		case type:statement
				  break;
		case type:statement
				  break;
		case type:statement
				  break;
		default : statement
				 break;
	}
*/
void main()
{
	
	char ch;
	printf("\nenter a character:");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case'a':
	    case'e':
	    case'i':
	    case'o':
		case'u':printf("\nIt is a Vowel");
				   break;
		default  : printf("\nIt is a Consonant");
				   break;
				
	}
}