//Calculate 5 numbers from user and calculate number of even and odd using of while loop

#include<stdio.h>

int main()
{
	int i=1,num,even=0,odd=0;
	
	while(i<=5)
	{
		printf("Enter a number:",i);
		scanf("%d",&num);
		if(num %2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		i++;
	}
	printf("Even number %d\n",even);
	printf("odd number %d\n",odd);
	
	
	return 0;
}

