#include<stdio.h>
int a17()
{
	printf("\t\t____________________TRANSPOSE OF MATRIX____________________\n");
	int rows,col,i,j;
	printf("Enter the no of rows and column of MATRIX 'A':\n");
	scanf("%d%d",&rows,&col);
	int a[rows][col];
	int b[col][rows];
	printf("Enter the elements of MATRIX 'A'\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\t\t_______________TRANSPOSE OF MATRIX 'A'_______________\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	for(i=0;i<col;i++)
	{
		for(j=0;j<rows;j++)
		{
			printf("\t\t%d",b[i][j]);
		}
			printf("\n");
	}
return 0;
}
