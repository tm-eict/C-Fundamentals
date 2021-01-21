#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SIZE 10
#define MAX 20

int readStrings(char[], int);
void printStrings(char[], int);

int main(void)
{
	// # Variables
	char arr[SIZE * MAX];
	int len;

	// # Input
	printf("Enter 10 names (max 20 chars):\n");
	len = readStrings(arr, SIZE*MAX);

	// # Output
	printf("\n\nYou enterd: \n");
	printStrings(arr, len);

	// # Exit
	return 0;
}


int readStrings(char arr[], int size)
{
	char str[20];
	int len;
	len = 0;

	gets(str);

	while (_stricmp(str, "end") != 0 && len < size)
	{
		strcpy(&arr[len], str);
		len += strlen(str) + 1;
		gets(str);
	}

	return len;
}

void printStrings(char str[], int tlen)
{
	int wordLen, len;

	wordLen = 0;
	do
	{
		printf("%s\n", &str[wordLen]);
		wordLen += strlen(&str[wordLen]) + 1;
	} while (wordLen < tlen);
}
