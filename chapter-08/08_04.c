#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SIZE 100

void sanitize(char[]);
int isPalindrome(char[]);
void _sanitizeOld(char[]);

int main(void)
{
	// # Variables
	int str[SIZE];

	// # Input
	printf("Enter a sentence\n-> ");
	gets(str);

	// # Logic & Output
	printf("\n\"%s\" ", str);
	sanitize(str);
	printf("is%s a palindrome sentence.\n", isPalindrome(str) ? "" : " not");

	// # Exit
	return 0;
}

void sanitize(char str[])
{
	// (int)r: Read counter
	//		Always incremented
	// (int)w: Write counter 
	//		Only incremented when char is valid
	int r, w, len;

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
	}
	// End the string by putting a null byte at the end
	str[w] = '\0';
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

void _sanitizeOld(char str[])
{
	// (int)r: Read counter
	//		Always incremented
	// (int)w: Write counter 
	//		Only incremented when char is valid
	int r, w;

	// Could write this in a for loop
	r = w = 0;
	while (str[r] != '\0')
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
		r++;
	}
	// End the string by putting a null byte at the end
	str[w] = '\0';
}