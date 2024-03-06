//Write a program in C to remove characters from a string except alphabets.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
	
    int len;
    int i, j; 
    
    printf("Enter a string to remove characters: ");
    gets(str); // read the input from the user
    
    // get the length of the string
    len = strlen(str); 
    
    // iterate over each character of the string
    for (i = 0; i < len; i++) 
    {
    	// check if the character is not an alphabet
        if (! ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) 
        {
        	// shift the remaining characters to the left by one position
            for (j = i; j < len; j++) 
            {
                str[j] = str[j+1];
            }
            // decrement the length of the string
            len--; 
            // decrement the loop variable to avoid skipping a character
            i--; 
        }
    }
    // print the output string
    printf("string after removing characters: %s\n", str); 
    return 0;
}

