#include<stdio.h>

void main()
{
	int matrix1[3][3];
	int matrix2[2][2];
	int i,j;
	printf("\n\n Enter Matrix 1 Elements  :  \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Elements[%d][%d]  : ",i,j);
			scanf("%d",&matrix1[i][j]);
		}	
	}
	printf("\n\n Enter matrix 2 Elements  :   \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Elements[%d][%d]  :  \n\n");
			scanf("%d",&matrix2[i][j]);
		}
	}
	
	
	printf("\n\nMatrix 1 Elements : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",matrix1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nMatrix 2 Elements : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",matrix2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nAdditoin of matrix  :  \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",(matrix1[i][j]+matrix2[i][j]));
		}
		printf("\n");
	}

	
}