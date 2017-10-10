#include<stdio.h>
int a18()
{
	printf("\t\t____________MULTIPLICATION OF TWO MATRIX____________\n");
	int arows,acol,brows,bcol,i,k,j,sum=0;
	printf("Enter the no of rows and column of MATRIX 'A':\n");
	scanf("%d%d",&arows,&acol);
	int a[100][100];
	int b[100][100];
	int c[100][100];
	printf("Enter the elements of MATRIX 'A'\n");
	for(i=0;i<arows;i++)
	{
		for(j=0;j<acol;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the no of rows and column of MATRIX 'B':\n");
	scanf("%d%d",&brows,&bcol);
	printf("Enter the elements of MATRIX 'B'\n");
	for(i=0;i<brows;i++)
	{
		for(j=0;j<bcol;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	if(acol==brows)
	{
	printf("\t\t__________THE MATRIX C (MULTIPLICATION OF MATRIX 'A' AND MATRIX 'B')__________\n");
	for(i=0;i<arows;i++)
	{
		for(j=0;j<bcol;j++)
		{
			for(k=0;k<acol;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
				c[i][j]=sum;
				printf("\t\t%d",c[i][j]);
				sum=0;
		}
			printf("\n");
	}
	}
	else
	{
		printf("\t\tMULTIPLICATION OF GIVEN MATRICES IS NOT POSSIBLE\n");
	}
return 0;
}

	
