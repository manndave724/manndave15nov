#include<stdio.h>

void main()
{
	int num1, num2;

   printf("Enter First Number");
   scanf("%i", &num1); 

   printf("Enter Second Number");
   scanf("%i", &num2);
   printf("Choose Any Operator: +  | - | / | * \n");
   scanf(" %c", &ope);

 // Applying if-else condition to check conditions 
 if(ope == '+')
 {
  cal= num1 + num2;
  printf("Addition of two numbers is:  %i",cal);
 }

else if(ope == '-')
 {
  cal= num1 - num2;
  printf("Subtraction of two numbers is:  %i",cal);
 }
  
 else if(ope == '/')
 {
  cal= num1 / num2;
  printf("Division of two numbers is:  %i",cal);
 }
  
 else if(ope == '*' )
 {
  cal= num1 * num2;
  printf("Multiplication of two numbers is:  %i",cal);
 }
  
 else
 {
 printf("Invalid Input"); 
 }

}
