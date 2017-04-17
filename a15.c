#include<stdio.h>
int a15()
{
	printf("\t\t____________ADDITION OF TWO MATRIX____________\n");
	int rows,col,i,j;
	printf("Enter the no of rows and column of MATRIX 'A'& 'B':\n");
	scanf("%d%d",&rows,&col);
	int a[rows][col];
	int b[rows][col];
	printf("Enter the elements of MATRIX 'A'\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of MATRIX 'B'\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\t\t__________THE MATRIX C (ADDITION OF MATRIX 'A' AND MATRIX 'B')__________\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\t\t\t%d  ",a[i][j]+b[i][j]);
		}
			printf("\n");
	}
return 0;
}
	
