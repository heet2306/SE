//Write a program in C to print individual characters of a string in reverse order

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i;

	//user inputs string
    printf("Enter a string to print individual characters of a string in reverse order: ");
    gets(str);

    printf("The individual characters of the string in reverse order are: ", str);

	//loop to reverse the string
    for (i = strlen(str) - 1; i >= 0; i--)//strlen is inbuild function of string
    {
        printf("%c ", str[i]);
    }

    return 0;
}

