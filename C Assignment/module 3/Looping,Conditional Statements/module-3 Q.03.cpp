 //WAP to take 10 no. Input from user find out below values
//a. How many Even numbers are there
//b. How many odd numbers are there
//c. Sum of even numbers
//d. Sum of odd numbers

#include<stdio.h>

int main()
{
	int i,num,add=0,even=0,odd=0,evensum=0,oddsum=0;
	
	//loop: to take 10 input number  
	for(i=1;i<=10;i++)
	{
		printf("%d Enter number:",i);
		scanf("%d",&num);

		//condition: check number is even or odd
		if(num %2==0)
		{
			even++;
			evensum +=num;
		}
		else
		{
			odd++;
			oddsum +=num;
		}
	}
	
	//display result sum,even,odd
	printf("even num %d\n",even);
	printf("odd num %d\n",odd);
	printf("Sum of even number: %d\n",evensum);
	printf("Sum of odd number: %d\n",oddsum);
	
	return 0;
	
}
