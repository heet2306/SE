//WAP to find reverse of string using recursion

#include <stdio.h>
#include <string.h>

//function create
void reverse(char *str) 
{
	
    if (*str == '\0') 
	{
        return;
    }
    //recursion function
    reverse(str + 1);
    
    printf("%c", *str);
}

int main() 
{
    char str[50];
    //input
    printf("enter a string to reverse:");
    //read string
    gets(str);
    //function call
    reverse(str);
    
    return 0;
}

