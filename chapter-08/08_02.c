#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SIZE 8

int main(void)
{
	// # Variable
	char word1[SIZE], word2[SIZE], word3[SIZE], sentence[SIZE * 3];

	// # Input
	printf("enter the first word: \n");
	scanf("%s%*c", word1);
	printf("enter the scond word: \n");
	scanf("%s%*c", word2);
	printf("enter the third word: \n");
	scanf("%s%*c", word3);

	// # Logic
	strcpy(sentence, word1);
	strcat(sentence, " ");
	strcat(sentence, word2);
	strcat(sentence, " ");
	strcat(sentence, word3);

	// # Output
	printf("%s\n", sentence);

	// # Exit
	return 0;
}