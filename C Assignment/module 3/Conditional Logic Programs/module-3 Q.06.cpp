//Find the Character Is Vowel or Not

#include <stdio.h>

int main() 
{
	char ch;
	//user input
    printf("Enter any Character:");
    scanf("%c",&ch);
    
    // condition : in if all the vowel was declared 
    if ((ch == 'a' || ch == 'A') || (ch == 'e' || ch == 'E') || (ch == 'i' || ch == 'I') || (ch == 'o' || ch == 'O') || (ch == 'u' || ch == 'U'))
    {
    	printf("%c Character Is Vowel",ch);
	}
	
	// the ch are not vowel
	else 
	{
        printf("%c is not a vowel.\n",ch);
    }

    return 0;
}
