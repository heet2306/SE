//Accept marks from user and check pass or fail

#include <stdio.h>

int main() 
{
	int marks;
	
    printf("Enter your marks:");
    scanf("%d",&marks);
    
    //condition: marks more than 50 pass, or you are fail
    if(marks>=50)
    {
    	printf("Congratulations! You have passed.\n");
	}
	else
	{
		printf("sorry! You are fail.\n");
	}

    return 0;
}
