//WAP program to print below output using for loop
//01 02 03 04 05 06 07 08 09 10
//11 12 13 14 15 16 17 18 19 20
//21 22 23 24 25 26 27 28 29 30
//31 32 33 34 35 36 37 38 39 40
//41 42 43 44 45 46 47 48 49 50


#include<stdio.h>
int main()
{
	int i,j;
	int num;
	//outer lopp for row
	for(i=0;i<=4;i++) 
	{
		//inner loop for number
		for(int j = 1; j <=10 ; j++) 
		{
            printf("%02d ", num++);//02 is for 0 before single digits numbers
        }
        printf("\n");
	}
	
	return 0;
}
