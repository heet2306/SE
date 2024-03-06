//WAP to accept the height of a person in centimeters and categorize the
//person according to their height.

#include <stdio.h>

int main() 
{
	float height;
	
    printf("Enter your height: ");
	scanf("%f",&height);
	
	//condition:  Categorize the person based on height
	if(height < 150)
	{
		printf("you are short");
	}
	
	else
	{
		printf("you are tall");
	}
    return 0;
}
