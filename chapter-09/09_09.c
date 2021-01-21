#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void charToMorse(char);
void wordToMorse(char[]);


int main(void)
{
	// Variables
	char str[20];

	// Input
	printf("Enter a word: ");
	scanf("%s", str);

	// Output & Logic
	wordToMorse(str);

	// # Exit
	return 0;
}

void charToMorse(char c)
{
	const char *morse[] = { ".-", "-...", "-.-.", "-..", ".", "...", "--.", "....", "..",".---", "-.-", ".-..", "--", "-.", "--", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", NULL };
	
	printf(morse[c - (('a' <= c && c <= 'z') ? 'a' : 'A')]);
}

void wordToMorse(char str[])
{
	int len;
	len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		charToMorse(str[i]);
		printf(" ");
	}
	puts("");
}
