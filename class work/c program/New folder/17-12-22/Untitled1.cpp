#include<stdio.h>

struct Employee
{
	int eid;
	char name[10];
	float esal;
};

void main ()
{
struct employee emp;
	
	struct Employee emp;
	printf("\nEnter Id : ");
	scanf("%d",&emp.eid);
	
	printf("Enter Name  : ");
	scanf("%s",emp.ename);
	
	printf("Enter salary : ");
	scanf("%f",&emp.esal);
	
	printf("\n\n-------deatails---------\n\n");
	printf("\nid :%d",emp.eid);
	printf("\nname :%s",emp.ename);
	printf("\nsalary:%.2f",emp.esal);
	
	printf("\n\nSize of Structure is : %d Bytes",sizeof(emp));
	
}