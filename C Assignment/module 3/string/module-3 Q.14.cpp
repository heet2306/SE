//Write a program in C to combine two strings manually

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    int i,j,len1,len2;
    
	
    printf("Enter the first string: ");
    // read the first string from the user
    gets(s1); 
    printf("Enter the second string: ");
    // read the second string from the user
    gets(s2); 
    // get the length of the first string
    len1 = strlen(s1);
    // get the length of the second string
    len2 = strlen(s2);
	
	
    for (i = len1, j = 0; j < len2; i++, j++) // iterate over the second string and append it to the first string
    {
        s1[i] = s2[j]; // copy each character from s2 to s1
    }
    
    printf("The combined string is: %s\n", s1); // print the combined string
    
    return 0;
}

