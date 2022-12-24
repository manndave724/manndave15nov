#include<stdio.h>

void main()
{
	int age;
	char name[50];
	float salary;
	
	printf("\n\n\xB2\xB2\xB2\xB2 personal details  \xB2\xB2\xB2\xB2\xB2\xB2\n");
	
	printf("\nEnter your Name:");
	//scanf("%s",& name);
	gets (name);
	printf("Enter your Age :");
	scanf ("%d",&age);
	printf("Enter your salary:");
	scanf("%f", & salary);
	printf("\nName is:%s",name);
	printf("\nAge is: %d",age);
	printf("\nSalary is : %.2f",salary);
}