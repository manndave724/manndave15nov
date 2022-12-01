#include<stdio.h>

void main()
{
	int rollno,s1,s2,s3,tot;
	char name[20];
	float per;
	printf("\nEnter name : ");
	//gets (name);
	scanf ("%s,",&name);
	printf("Enter Roll No : ");
	scanf("%d",&rollno);
	printf("Enter Physics Marks :");
	scanf("%d",&s1);
	printf("Enter chemistry marks :");
	scanf("%d",&s2);
	printf("Enter maths marks :");
	scanf("%d",&s3);
	tot=s1+s2+s3;
	per=(float)tot/3;
	
	printf("\nroll no:%d,roll no");
	printf("\nName:%s",name);
	printf("\ntotal:%d",tot);
	printf("\percentage:%.2f",per);
	
	if(per>=75)
	{
		printf("\ndistinction ");
		
	}
	else if(per>=60)
	{
		printf("\nFirst class ");
	 }
	 else if(per>=50)
	 {
	 	printf("\nSecond class ");
	 }
	 else if(per>=40)
	 {
	 	printf("\nPass class ");
	 }
	 else 
	 {
	 	printf("\nFail !");
	 }
}