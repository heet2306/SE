//Write a program in C to separate individual characters from a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int i;

    //user inputs string
	printf("Enter a string to separate individual characters:");
	gets(str);

	//print individual characters
    printf("The individual characters of the string are: ", str);

	//loop to separate individual characters
    for (i = 0; str[i] != '\0'; i++)
    {
        printf("%c ", str[i]);
    }

    return 0;
}

