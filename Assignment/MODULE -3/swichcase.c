#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter any number b/w 1 and 7:");
scanf("%d",&n);
switch(n)
{
case 1:
printf("Sunday is the first day of the week");
break;
case 2:
printf("Monday is the second day of the week");
break;
case 3:
printf("Tuesday is the third day of the week");
break;
case 4:
printf("Wednesday is the fourth day of the week");
break;
case 5:
printf("Thursday is the fifthe day of the week");
break;
case 6:
printf("Friday is the sixth day of the week");
break;
case 7:
printf("Saturday is the seventh day of the week");
break;
default:
printf("You have entered a wrong choice");
}
getch();
}