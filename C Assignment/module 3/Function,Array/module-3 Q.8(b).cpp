////Write a program of structure employee that provides the following
//b. Write a program of structure for five employee that
//provides the following information -print and display
//empno, empname, address and age

#include<stdio.h>
int main()
{
	int i,j;
	int empno[5],age[5];
	char empname[100][5],address[100][5];

		for(i=0;i<5;i++)
		{
			printf("Enter your number:");
			scanf("%d",&empno[i]);
			
			printf("Enter your Age:");
			scanf("%d",&age[i]);
			
			printf("Enter your name:");
			scanf("%s",empname[i]);
			
			printf("Enter your address:");
			scanf("%s",address[i]);
		}
	
		for(i=0;i<5;i++)
		{
			printf("your number: %d\n",empno[i]);
			printf("your age: %d\n",age[i]);
			printf("your name: %s\n",empname[i]);
			printf("your address: %s\n",address[i]);
			
		}

	return 0;
}
