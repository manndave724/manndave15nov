#include<stdio.h>

union employee 
{
	int eid;
	char name[20];
	float esal;
};
void main ()
{
	union employee emp;
	
	printf("\enter id :");
	scanf("%d",&emp.eid);
	printf("id:%d",emp.eid);
	
	printf("\enter name :");
	scanf("%s",&emp.name);
	printf("name:%s",emp.name);

    printf("\n\nEnter salary:");
	scanf("%f",&emp.esal);
	printf("salary:%2f",emp.esal);
	
	printf("\n\nsize of unoin is : %d bytes ",sizeof(emp));
		
}