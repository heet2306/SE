//Write a program in C to extract a substring from a given string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100],result[100];
    int start;
    int end;
    
    //user input
    printf("Enter a string to extract a substring:\n");
    //read input
    gets(str);
    //puts(str);
    
    //user input
    printf("Enter starting index of string to extract:");
    //read input
    scanf("%d",&start);
    
    //user input
    printf("Enter ending index of string to extract:");
    //read input
    scanf("%d",&end);
    
    
	//loop for starting index to end index
    for (int i = start; i <= end; i++) 
	{
//		Copy the characters into the result
        result[i - start] = str[i];
    }

//	display substring
    printf("The substring is: %s\n", result);

    return 0;
}
