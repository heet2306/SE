//WAP to show
//ii. Vowel or Consonant using switch case

#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter a Character:");
	scanf("%c",&ch);
	
	//switch: Character is vowel or not
	switch(ch)
	{
		case 'a': case 'e': case 'i': case 'o': case 'u':
			printf("%c Character is vowel.",ch);
			break;
			
		default:
            if ((ch >= 'a' && ch <= 'z') ) 
			{
                printf("%c is a consonant.\n", ch);
            } 
			else 
			{
                printf("Invalid input. Please enter an alphabet.\n");
            }
            break;
            
	}
	
	return 0;
	
}
