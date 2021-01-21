#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SIZE 100

int sanitize(char[]);
int isPalindrome(char[]);
int allWordPalindrome(char[], int);

int main(void)
{
	// # Variables
	int str[SIZE];
	int len;

	while (1)
	{
		// # Input
		printf("Enter a sentence\n");
		gets(str);

		// # Logic & Output
		len = sanitize(str);
		printf("Your sentence is%s a palindrome\n", allWordPalindrome(str, len) ? "" : " not");
	}

	// # Exit
	return 0;
}

int sanitize(char str[])
{
	// (int)r: Read counter
	//		Always incremented
	// (int)w: Write counter 
	//		Only incremented when char is valid
	int r, w, len, c;

	len = strlen(str);

	for (r = w = 0; r < len; r++)
	{
		if (('a' <= str[r] && str[r] <= 'z')
			|| ('0' <= str[r] && str[r] <= '9'))
		{
			// [a-z0-9]
			str[w] = str[r];
			w++;
		}
		else if ('A' <= str[r] && str[r] <= 'Z')
		{
			// [A-Z]
			str[w] = str[r] + 32;
			w++;
		}
		else if (str[r] == ' ')
		{
			str[w] = '\0';
			w++;
		}
	}
	// End the string by putting a null byte at the end
	str[w] = '\0';

	return w;
}

int allWordPalindrome(char str[], int sentenceLen)
{
	int wordLen, ret;
	ret = 1;

	wordLen = 0;
	do
	{
		ret = isPalindrome(&str[wordLen]);
		wordLen += strlen(&str[wordLen]) + 1;
	} while (wordLen < sentenceLen && ret);

	return ret;
}

int isPalindrome(char str[])
{
	int len, ret;

	ret = 1;
	len = strlen(str) - 1;

	for (int i = 0; i <= len / 2 && ret; i++)
		if (str[i] != str[len - i])
			ret = 0;

	return ret;
}