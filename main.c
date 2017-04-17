#include<stdio.h>
#include<stdlib.h>
#include"prototypes.h"
int main()
{
	printf("\t______________________________________________WELCOME TO MAIN MENU_________________________________________________\n");
	int c;
	printf("\t\t1 = ADDITION OF MATRICES\n");
	printf("\t\t2 = SUBTRACTION OF MATRICES\n");
	printf("\t\t3 = TRANSPOSE OF MATRIX\n");
	printf("\t\t4 = MULTIPLICATION OF MATRICES\n");
	printf("\t\t5 = EXIT\n");
	printf("ENTER YOUR CHOICE : \n");
	scanf("%d",&c);
	while(1)
	{
		switch (c)
		{
			case 1:
				a15();
				break;
			case 2:
				a16();
				break;
			case 3:
				a17();
				break;
			case 4:
				a18();
				break;
			case 5: exit(EXIT_SUCCESS);
				break;
			default:
				printf("PLEASE ENTER A VALID CHOICE \n");
		}
		printf("______________________________________________________________________________________\n");
		printf("\t\t1 = ADDITION OF MATRICES\n");
		printf("\t\t2 = SUBTRACTION OF MATRICES\n");
		printf("\t\t3 = TRANSPOSE OF MATRIX\n");
		printf("\t\t4 = MULTIPLICATION OF MATRICES\n");
		printf("\t\t5 = EXIT\n");
		printf("ENTER YOUR CHOICE : \n");
		scanf("%d",&c);
	}
	return 0;
}


