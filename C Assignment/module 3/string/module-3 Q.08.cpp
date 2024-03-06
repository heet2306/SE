//Write a program in C to count the total number of vowels or consonants in a
//string.

#include<stdio.h>
#include <string.h>

int main()
{
	char str[50];
	int vowels=0;
	int consonants=0;
	
	//user inputs string
	printf("Enter a string to count the total number of vowels or consonants:");
	gets(str);
	
	//loop to find end of string
	for(int i=0;str[i] !='\0';i++)
	{
		//check the vowels input
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
		{
			vowels++;
		}
		//check the consonants input
		else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			consonants++;
		}
	}
	//print the number of vowels in string
	printf("The total number of vowels in the string is: %d.\n", vowels);
	//print the number of consonants in string
    printf("The total number of consonants in the string is: %d.", consonants);
	
	return 0;
}
