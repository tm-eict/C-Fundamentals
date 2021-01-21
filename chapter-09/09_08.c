#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	// Variables
	const char* morse[] = { ".-", "-...", "-.-.", "-..", ".", "...", "--.", "....", "..",".---", "-.-", ".-..", "--", "-.", "--", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", NULL };
	char c;


	// Input
	printf("Enter a letter: ");
	scanf("%c%*c", &c);

	// # Output
	printf("%s\n", morse[c - (('a' <= c && c <= 'z') ? 'a' : 'A')]);


	// # Exit
	return 0;
}