// C Program to find Smallest and 
// Largest Word in a String
#include<stdio.h>
#include<string.h>

void minMaxLengthWords(char input[], char minWord[], char maxWord[]) 
{
	// minWord and maxWord are received by reference 
	// and not by value
	// will be used to store and return output
	int len = strlen(input);
	int si = 0, ei = 0;


	int min_length = len, min_start_index = 0, max_length = 0, max_start_index = 0;

	// Loop while input string is not empty
	while (ei <= len) 
	{
		if (ei < len && input[ei] != ' ')
			ei++;
		
		else
		{
			// end of a word
			// find curr word length
			int curr_length = ei - si;
		
			if (curr_length < min_length) 
			{
				min_length = curr_length;
				min_start_index = si;
			}
			
			if (curr_length > max_length)
			{
				max_length = curr_length;
				max_start_index = si;
			}
			ei++;
			si = ei;
		}
	}
	
	// store minimum and maximum length words
	strncpy(minWord, input + min_start_index, min_length);
	minWord[min_length] = '\0';
	strncpy(maxWord, input + max_start_index, max_length);
	maxWord[max_length] = '\0';
}

// Driver code
int main() 
{
	char a[] = "I am studing software Engineering";
	char minWord[100], maxWord[100];
	
	//read string
	printf("The string is: %s\n", a);
	
	minMaxLengthWords(a, minWord, maxWord);
	
	// to take input in string use fgets(a, N, stdin);
	printf("Smallest length word: %s\n", minWord);
	printf("Largest length word: %s\n", maxWord);
	return 0;
} 

