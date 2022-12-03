#include <stdio.h>

void main ()
{
    char ch;
    printf("\nEnter a character:");
    scanf("%c",&ch);
    
    switch(ch)
    {
      case 'a':printf("\nIt is vowel");
	           break;
	  case 'e':printf("\nIt is vowel");
	           break;
      case 'i':printf("\nIt is vowel");
	  	       break;
	  case 'o':printf("\nIt is vowel");
	           break;
	  case 'u':printf("\nIt is vowel");
	           break;
	  dafault:printf("\nIt is consonant");
	           break;
				  
	}
}
